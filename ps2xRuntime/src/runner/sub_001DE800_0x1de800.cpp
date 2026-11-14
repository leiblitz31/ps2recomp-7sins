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

// Function: sub_001DE800
// Address: 0x1de800 - 0x1de890
void sub_001DE800_0x1de800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE800_0x1de800");
#endif

    switch (ctx->pc) {
        case 0x1de838u: goto label_1de838;
        case 0x1de868u: goto label_1de868;
        case 0x1de874u: goto label_1de874;
        case 0x1de880u: goto label_1de880;
        default: break;
    }

    ctx->pc = 0x1de800u;

    // 0x1de800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1de808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1de80c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de810: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x1de810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1de814: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DE814u;
    {
        const bool branch_taken_0x1de814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de814) {
            ctx->pc = 0x1DE880u;
            goto label_1de880;
        }
    }
    ctx->pc = 0x1DE81Cu;
    // 0x1de81c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de824: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1de824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x1de828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de82c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de830: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE830u;
    SET_GPR_U32(ctx, 31, 0x1DE838u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE830u, 0x1DE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE838u;
label_1de838:
    // 0x1de838: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de83c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de848: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de84c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1de84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de850: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1de850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de854: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1de854u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de85c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de860: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE860u;
    SET_GPR_U32(ctx, 31, 0x1DE868u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE860u, 0x1DE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE868u;
label_1de868:
    // 0x1de868: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de86c: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DE86Cu;
    SET_GPR_U32(ctx, 31, 0x1DE874u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DE86Cu, 0x1DE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE874u;
label_1de874:
    // 0x1de874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de878: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DE878u;
    SET_GPR_U32(ctx, 31, 0x1DE880u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DE878u, 0x1DE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE880u;
label_1de880:
    // 0x1de880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de884: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de888: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE890u;
}
