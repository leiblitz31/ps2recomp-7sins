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

// Function: sub_00485AF0
// Address: 0x485af0 - 0x485b70
void sub_00485AF0_0x485af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485AF0_0x485af0");
#endif

    switch (ctx->pc) {
        case 0x485b18u: goto label_485b18;
        case 0x485b3cu: goto label_485b3c;
        default: break;
    }

    ctx->pc = 0x485af0u;

    // 0x485af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x485af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x485af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x485af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x485afc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x485afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x485b00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x485b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x485b04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x485b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485b08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x485b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485b0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x485b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485b10: 0xc0c855a  jal         func_321568
    ctx->pc = 0x485B10u;
    SET_GPR_U32(ctx, 31, 0x485B18u);
    ctx->pc = 0x321568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321568u, 0x485B10u, 0x485B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485B18u;
label_485b18:
    // 0x485b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b1c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x485B1Cu;
    {
        const bool branch_taken_0x485b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x485b1c) {
            ctx->pc = 0x485B48u;
            goto label_485b48;
        }
    }
    ctx->pc = 0x485B24u;
    // 0x485b24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x485b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485b28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x485b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x485b2c: 0x24a55af0  addiu       $a1, $a1, 0x5AF0
    ctx->pc = 0x485b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
    // 0x485b30: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x485b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485b34: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x485B34u;
    SET_GPR_U32(ctx, 31, 0x485B3Cu);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x485B34u, 0x485B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485B3Cu;
label_485b3c:
    // 0x485b3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x485b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485b40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x485B40u;
    {
        const bool branch_taken_0x485b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485b40) {
            ctx->pc = 0x485B54u;
            goto label_485b54;
        }
    }
    ctx->pc = 0x485B48u;
label_485b48:
    // 0x485b48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x485b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485b4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x485b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x485b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x485b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485b54:
    // 0x485b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485b5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x485b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x485b60: 0x3e00008  jr          $ra
    ctx->pc = 0x485B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485B68u;
    // 0x485b68: 0x0  nop
    ctx->pc = 0x485b68u;
    // NOP
    // 0x485b6c: 0x0  nop
    ctx->pc = 0x485b6cu;
    // NOP
    ctx->pc = 0x485b70u;
}
