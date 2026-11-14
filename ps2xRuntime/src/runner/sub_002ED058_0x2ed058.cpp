#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED058
// Address: 0x2ed058 - 0x2ed0b8
void sub_002ED058_0x2ed058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED058_0x2ed058");
#endif

    switch (ctx->pc) {
        case 0x2ed088u: goto label_2ed088;
        default: break;
    }

    ctx->pc = 0x2ed058u;

    // 0x2ed058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed05c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2ed05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2ed060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed06c: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2ed06cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2ed070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ed070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed074: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ed074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed078: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ed078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed07c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed080: 0xc0bf896  jal         func_2FE258
    ctx->pc = 0x2ED080u;
    SET_GPR_U32(ctx, 31, 0x2ED088u);
    ctx->pc = 0x2ED084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED080u;
    // 0x2ed084: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE258u, 0x2ED080u, 0x2ED088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED088u;
label_2ed088:
    // 0x2ed088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed08c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ed08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed090: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED090u;
    {
        const bool branch_taken_0x2ed090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed090) {
            ctx->pc = 0x2ED094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED090u;
            // 0x2ed094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0A8u;
            goto label_2ed0a8;
        }
    }
    ctx->pc = 0x2ED098u;
    // 0x2ed098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ed098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ed09c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED09Cu;
    {
        const bool branch_taken_0x2ed09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed09c) {
            ctx->pc = 0x2ED0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED09Cu;
            // 0x2ed0a0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0A4u;
            goto label_2ed0a4;
        }
    }
    ctx->pc = 0x2ED0A4u;
label_2ed0a4:
    // 0x2ed0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed0a8:
    // 0x2ed0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0B0u;
        // 0x2ed0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED0B8u;
}
