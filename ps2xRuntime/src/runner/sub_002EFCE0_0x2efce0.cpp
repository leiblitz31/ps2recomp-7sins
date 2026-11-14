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

// Function: sub_002EFCE0
// Address: 0x2efce0 - 0x2efd40
void sub_002EFCE0_0x2efce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFCE0_0x2efce0");
#endif

    switch (ctx->pc) {
        case 0x2efd10u: goto label_2efd10;
        default: break;
    }

    ctx->pc = 0x2efce0u;

    // 0x2efce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efce4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2efce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2efce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2efcf4: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2efcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2efcf8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2efcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcfc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2efcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd00: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2efd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2efd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2efd08: 0xc0bf86a  jal         func_2FE1A8
    ctx->pc = 0x2EFD08u;
    SET_GPR_U32(ctx, 31, 0x2EFD10u);
    ctx->pc = 0x2EFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD08u;
    // 0x2efd0c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A8u, 0x2EFD08u, 0x2EFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD10u;
label_2efd10:
    // 0x2efd10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2efd10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2efd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2efd18: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD18u;
    {
        const bool branch_taken_0x2efd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD18u;
        // 0x2efd1c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd18) {
            ctx->pc = 0x2EFD2Cu;
            goto label_2efd2c;
        }
    }
    ctx->pc = 0x2EFD20u;
    // 0x2efd20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2efd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2efd24: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFD24u;
    {
        const bool branch_taken_0x2efd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd24) {
            ctx->pc = 0x2EFD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD24u;
            // 0x2efd28: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD2Cu;
            goto label_2efd2c;
        }
    }
    ctx->pc = 0x2EFD2Cu;
label_2efd2c:
    // 0x2efd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efd30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efd38: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD38u;
        // 0x2efd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFD40u;
}
