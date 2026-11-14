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

// Function: sub_001DE890
// Address: 0x1de890 - 0x1de930
void sub_001DE890_0x1de890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE890_0x1de890");
#endif

    switch (ctx->pc) {
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de908u: goto label_1de908;
        case 0x1de914u: goto label_1de914;
        default: break;
    }

    ctx->pc = 0x1de890u;

    // 0x1de890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1de898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1de89c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8a0: 0x906300a9  lbu         $v1, 0xA9($v1)
    ctx->pc = 0x1de8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 169)));
    // 0x1de8a4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DE8A4u;
    {
        const bool branch_taken_0x1de8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de8a4) {
            ctx->pc = 0x1DE914u;
            goto label_1de914;
        }
    }
    ctx->pc = 0x1DE8ACu;
    // 0x1de8ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de8b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8b4: 0xa04300a9  sb          $v1, 0xA9($v0)
    ctx->pc = 0x1de8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 3));
    // 0x1de8b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de8c0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE8C0u;
    SET_GPR_U32(ctx, 31, 0x1DE8C8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE8C0u, 0x1DE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8C8u;
label_1de8c8:
    // 0x1de8c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8cc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de8d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de8d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de8d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1de8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8dc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1de8dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1de8e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8e4: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1de8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8e8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1de8e8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de8f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de8f4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE8F4u;
    SET_GPR_U32(ctx, 31, 0x1DE8FCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE8F4u, 0x1DE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8FCu;
label_1de8fc:
    // 0x1de8fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de900: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DE900u;
    SET_GPR_U32(ctx, 31, 0x1DE908u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DE900u, 0x1DE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE908u;
label_1de908:
    // 0x1de908: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de90c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DE90Cu;
    SET_GPR_U32(ctx, 31, 0x1DE914u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DE90Cu, 0x1DE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE914u;
label_1de914:
    // 0x1de914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE924u;
    // 0x1de924: 0x0  nop
    ctx->pc = 0x1de924u;
    // NOP
    // 0x1de928: 0x0  nop
    ctx->pc = 0x1de928u;
    // NOP
    // 0x1de92c: 0x0  nop
    ctx->pc = 0x1de92cu;
    // NOP
    ctx->pc = 0x1de930u;
}
