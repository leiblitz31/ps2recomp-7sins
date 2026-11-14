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

// Function: sub_001ADEE0
// Address: 0x1adee0 - 0x1adf80
void sub_001ADEE0_0x1adee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADEE0_0x1adee0");
#endif

    switch (ctx->pc) {
        case 0x1adf34u: goto label_1adf34;
        case 0x1adf64u: goto label_1adf64;
        default: break;
    }

    ctx->pc = 0x1adee0u;

    // 0x1adee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1adee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1adeec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adef0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1adef4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1adef8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADEF8u;
    {
        const bool branch_taken_0x1adef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adef8) {
            ctx->pc = 0x1ADF1Cu;
            goto label_1adf1c;
        }
    }
    ctx->pc = 0x1ADF00u;
    // 0x1adf00: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1adf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1adf04: 0x24638760  addiu       $v1, $v1, -0x78A0
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936416));
    // 0x1adf08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adf0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adf10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adf14: 0x400008  jr          $v0
    ctx->pc = 0x1ADF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADF1Cu: goto label_1adf1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ADF1Cu;
label_1adf1c:
    // 0x1adf1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf20: 0xc4400154  lwc1        $f0, 0x154($v0)
    ctx->pc = 0x1adf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adf24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1adf24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1adf28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf2c: 0xc064d10  jal         func_193440
    ctx->pc = 0x1ADF2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF34u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1ADF2Cu, 0x1ADF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF34u;
label_1adf34:
    // 0x1adf34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf38: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1adf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1adf3c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADF3Cu;
    {
        const bool branch_taken_0x1adf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adf3c) {
            ctx->pc = 0x1ADF6Cu;
            goto label_1adf6c;
        }
    }
    ctx->pc = 0x1ADF44u;
    // 0x1adf44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1adf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1adf48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1adf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1adf4c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1adf50: 0x27859468  addiu       $a1, $gp, -0x6B98
    ctx->pc = 0x1adf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939752));
    // 0x1adf54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adf58: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adf5c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1ADF5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF64u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1ADF5Cu, 0x1ADF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF64u;
label_1adf64:
    // 0x1adf64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf68: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1adf68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1adf6c:
    // 0x1adf6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adf70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1adf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1adf74: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF7Cu;
    // 0x1adf7c: 0x0  nop
    ctx->pc = 0x1adf7cu;
    // NOP
    ctx->pc = 0x1adf80u;
}
