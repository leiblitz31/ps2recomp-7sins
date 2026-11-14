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

// Function: sub_00464130
// Address: 0x464130 - 0x4641f0
void sub_00464130_0x464130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464130_0x464130");
#endif

    switch (ctx->pc) {
        case 0x464170u: goto label_464170;
        case 0x4641d0u: goto label_4641d0;
        default: break;
    }

    ctx->pc = 0x464130u;

    // 0x464130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x464130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x464134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464138: 0x40024800  mfc0        $v0, Count
    ctx->pc = 0x464138u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_count);
    // 0x46413c: 0xaf82bfdc  sw          $v0, -0x4024($gp)
    ctx->pc = 0x46413cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950876), GPR_U32(ctx, 2));
    // 0x464140: 0x8f83bffc  lw          $v1, -0x4004($gp)
    ctx->pc = 0x464140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950908)));
    // 0x464144: 0x8f82bfdc  lw          $v0, -0x4024($gp)
    ctx->pc = 0x464144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950876)));
    // 0x464148: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x464148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46414c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x46414Cu;
    {
        const bool branch_taken_0x46414c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46414c) {
            ctx->pc = 0x464174u;
            goto label_464174;
        }
    }
    ctx->pc = 0x464154u;
    // 0x464154: 0xc781bff8  lwc1        $f1, -0x4008($gp)
    ctx->pc = 0x464154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x464158: 0xc78080ec  lwc1        $f0, -0x7F14($gp)
    ctx->pc = 0x464158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46415c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x46415cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x464160: 0xe780bff8  swc1        $f0, -0x4008($gp)
    ctx->pc = 0x464160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950904), bits); }
    // 0x464164: 0xc78cbff8  lwc1        $f12, -0x4008($gp)
    ctx->pc = 0x464164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x464168: 0xc0beba2  jal         func_2FAE88
    ctx->pc = 0x464168u;
    SET_GPR_U32(ctx, 31, 0x464170u);
    ctx->pc = 0x2FAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAE88u, 0x464168u, 0x464170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464170u;
label_464170:
    // 0x464170: 0xff82bff0  sd          $v0, -0x4010($gp)
    ctx->pc = 0x464170u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950896), GPR_U64(ctx, 2));
label_464174:
    // 0x464174: 0x8f82bfdc  lw          $v0, -0x4024($gp)
    ctx->pc = 0x464174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950876)));
    // 0x464178: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x464178u;
    {
        const bool branch_taken_0x464178 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x464178) {
            ctx->pc = 0x464194u;
            goto label_464194;
        }
    }
    ctx->pc = 0x464180u;
    // 0x464180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x464180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x464184: 0x0  nop
    ctx->pc = 0x464184u;
    // NOP
    // 0x464188: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x464188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x46418c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x46418Cu;
    {
        const bool branch_taken_0x46418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46418c) {
            ctx->pc = 0x4641B0u;
            goto label_4641b0;
        }
    }
    ctx->pc = 0x464194u;
label_464194:
    // 0x464194: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x464194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x464198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x464198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x46419c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x46419cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4641a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4641a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4641a4: 0x0  nop
    ctx->pc = 0x4641a4u;
    // NOP
    // 0x4641a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4641a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4641ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4641acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4641b0:
    // 0x4641b0: 0xc78080f0  lwc1        $f0, -0x7F10($gp)
    ctx->pc = 0x4641b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4641b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4641b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4641b8: 0xe780bfe0  swc1        $f0, -0x4020($gp)
    ctx->pc = 0x4641b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950880), bits); }
    // 0x4641bc: 0xc781bff8  lwc1        $f1, -0x4008($gp)
    ctx->pc = 0x4641bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4641c0: 0xc780bfe0  lwc1        $f0, -0x4020($gp)
    ctx->pc = 0x4641c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4641c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x4641c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4641c8: 0xc0beba2  jal         func_2FAE88
    ctx->pc = 0x4641C8u;
    SET_GPR_U32(ctx, 31, 0x4641D0u);
    ctx->pc = 0x2FAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAE88u, 0x4641C8u, 0x4641D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4641D0u;
label_4641d0:
    // 0x4641d0: 0xff82bff0  sd          $v0, -0x4010($gp)
    ctx->pc = 0x4641d0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950896), GPR_U64(ctx, 2));
    // 0x4641d4: 0x8f82bfdc  lw          $v0, -0x4024($gp)
    ctx->pc = 0x4641d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950876)));
    // 0x4641d8: 0xaf82bffc  sw          $v0, -0x4004($gp)
    ctx->pc = 0x4641d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950908), GPR_U32(ctx, 2));
    // 0x4641dc: 0xdf82bff0  ld          $v0, -0x4010($gp)
    ctx->pc = 0x4641dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950896)));
    // 0x4641e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4641e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4641e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4641e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4641e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4641E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4641E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4641F0u;
}
