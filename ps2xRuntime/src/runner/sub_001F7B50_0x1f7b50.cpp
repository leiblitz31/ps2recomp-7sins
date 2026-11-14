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

// Function: sub_001F7B50
// Address: 0x1f7b50 - 0x1f7c30
void sub_001F7B50_0x1f7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7B50_0x1f7b50");
#endif

    switch (ctx->pc) {
        case 0x1f7b78u: goto label_1f7b78;
        case 0x1f7bbcu: goto label_1f7bbc;
        case 0x1f7bc8u: goto label_1f7bc8;
        case 0x1f7bdcu: goto label_1f7bdc;
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c20u: goto label_1f7c20;
        default: break;
    }

    ctx->pc = 0x1f7b50u;

    // 0x1f7b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f7b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f7b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b60: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7b64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7B64u;
    {
        const bool branch_taken_0x1f7b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b64) {
            ctx->pc = 0x1F7B78u;
            goto label_1f7b78;
        }
    }
    ctx->pc = 0x1F7B6Cu;
    // 0x1f7b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b70: 0xc07dde4  jal         func_1F7790
    ctx->pc = 0x1F7B70u;
    SET_GPR_U32(ctx, 31, 0x1F7B78u);
    ctx->pc = 0x1F7790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7790u, 0x1F7B70u, 0x1F7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B78u;
label_1f7b78:
    // 0x1f7b78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b7c: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1f7b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b84: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x1f7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b8c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f7b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b94: 0xc44000c8  lwc1        $f0, 0xC8($v0)
    ctx->pc = 0x1f7b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7ba0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f7ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f7ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7ba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bac: 0xa04300f9  sb          $v1, 0xF9($v0)
    ctx->pc = 0x1f7bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 249), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7bb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bb4: 0xc07e254  jal         func_1F8950
    ctx->pc = 0x1F7BB4u;
    SET_GPR_U32(ctx, 31, 0x1F7BBCu);
    ctx->pc = 0x1F8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8950u, 0x1F7BB4u, 0x1F7BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BBCu;
label_1f7bbc:
    // 0x1f7bbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bc0: 0xc07e244  jal         func_1F8910
    ctx->pc = 0x1F7BC0u;
    SET_GPR_U32(ctx, 31, 0x1F7BC8u);
    ctx->pc = 0x1F8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8910u, 0x1F7BC0u, 0x1F7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BC8u;
label_1f7bc8:
    // 0x1f7bc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bcc: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1f7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1f7bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bd4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7BD4u;
    SET_GPR_U32(ctx, 31, 0x1F7BDCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7BD4u, 0x1F7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BDCu;
label_1f7bdc:
    // 0x1f7bdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7be0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7be4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7BE4u;
    {
        const bool branch_taken_0x1f7be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f7be4) {
            ctx->pc = 0x1F7C20u;
            goto label_1f7c20;
        }
    }
    ctx->pc = 0x1F7BECu;
    // 0x1f7bec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bf0: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f7bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1f7bf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7BF4u;
    {
        const bool branch_taken_0x1f7bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7bf4) {
            ctx->pc = 0x1F7C20u;
            goto label_1f7c20;
        }
    }
    ctx->pc = 0x1F7BFCu;
    // 0x1f7bfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7c00: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1f7c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c08: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7C08u;
    SET_GPR_U32(ctx, 31, 0x1F7C10u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7C08u, 0x1F7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C10u;
label_1f7c10:
    // 0x1f7c10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7c14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7c18: 0xc07e46c  jal         func_1F91B0
    ctx->pc = 0x1F7C18u;
    SET_GPR_U32(ctx, 31, 0x1F7C20u);
    ctx->pc = 0x1F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F91B0u, 0x1F7C18u, 0x1F7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C20u;
label_1f7c20:
    // 0x1f7c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7c24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7C30u;
}
