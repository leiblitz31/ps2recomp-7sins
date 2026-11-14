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

// Function: sub_002F62B0
// Address: 0x2f62b0 - 0x2f6310
void sub_002F62B0_0x2f62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F62B0_0x2f62b0");
#endif

    switch (ctx->pc) {
        case 0x2f62e0u: goto label_2f62e0;
        default: break;
    }

    ctx->pc = 0x2f62b0u;

    // 0x2f62b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f62b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2f62b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f62bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f62bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f62c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f62c4: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2f62c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2f62c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f62c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f62ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62d0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2f62d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f62d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f62d8: 0xc0bf84a  jal         func_2FE128
    ctx->pc = 0x2F62D8u;
    SET_GPR_U32(ctx, 31, 0x2F62E0u);
    ctx->pc = 0x2F62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62D8u;
    // 0x2f62dc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE128u, 0x2F62D8u, 0x2F62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62E0u;
label_2f62e0:
    // 0x2f62e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f62e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f62e8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F62E8u;
    {
        const bool branch_taken_0x2f62e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62E8u;
        // 0x2f62ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62e8) {
            ctx->pc = 0x2F62FCu;
            goto label_2f62fc;
        }
    }
    ctx->pc = 0x2F62F0u;
    // 0x2f62f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f62f4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F62F4u;
    {
        const bool branch_taken_0x2f62f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f62f4) {
            ctx->pc = 0x2F62F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F62F4u;
            // 0x2f62f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F62FCu;
            goto label_2f62fc;
        }
    }
    ctx->pc = 0x2F62FCu;
label_2f62fc:
    // 0x2f62fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f62fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f6300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6308: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6308u;
        // 0x2f630c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6310u;
}
