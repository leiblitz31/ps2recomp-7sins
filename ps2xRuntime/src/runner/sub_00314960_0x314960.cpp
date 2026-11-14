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

// Function: sub_00314960
// Address: 0x314960 - 0x3149e8
void sub_00314960_0x314960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314960_0x314960");
#endif

    switch (ctx->pc) {
        case 0x314980u: goto label_314980;
        case 0x3149c8u: goto label_3149c8;
        default: break;
    }

    ctx->pc = 0x314960u;

    // 0x314960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314964: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x314964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x314968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31496c: 0x24a54d78  addiu       $a1, $a1, 0x4D78
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19832));
    // 0x314970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314978: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x314978u;
    SET_GPR_U32(ctx, 31, 0x314980u);
    ctx->pc = 0x31497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314978u;
    // 0x31497c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x314978u, 0x314980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314980u;
label_314980:
    // 0x314980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x314980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31498c: 0x3e00008  jr          $ra
    ctx->pc = 0x31498Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31498Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314994u;
    // 0x314994: 0x0  nop
    ctx->pc = 0x314994u;
    // NOP
    // 0x314998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31499c: 0x8f82a5b4  lw          $v0, -0x5A4C($gp)
    ctx->pc = 0x31499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
    // 0x3149a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3149a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3149a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3149a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3149a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3149a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3149acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3149b0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3149b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3149b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3149b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3149B8u;
    {
        const bool branch_taken_0x3149b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B8u;
        // 0x3149bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149b8) {
            ctx->pc = 0x3149D0u;
            goto label_3149d0;
        }
    }
    ctx->pc = 0x3149C0u;
    // 0x3149c0: 0xc0c4b5a  jal         func_312D68
    ctx->pc = 0x3149C0u;
    SET_GPR_U32(ctx, 31, 0x3149C8u);
    ctx->pc = 0x312D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D68u, 0x3149C0u, 0x3149C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3149C8u;
label_3149c8:
    // 0x3149c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3149c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3149cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3149ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3149d0:
    // 0x3149d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3149d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3149d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3149d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3149d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3149d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3149dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3149DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149DCu;
        // 0x3149e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3149E4u;
    // 0x3149e4: 0x0  nop
    ctx->pc = 0x3149e4u;
    // NOP
    ctx->pc = 0x3149e8u;
}
