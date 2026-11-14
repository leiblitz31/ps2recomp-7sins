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

// Function: sub_0023DE40
// Address: 0x23de40 - 0x23e020
void sub_0023DE40_0x23de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DE40_0x23de40");
#endif

    switch (ctx->pc) {
        case 0x23de60u: goto label_23de60;
        case 0x23de70u: goto label_23de70;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de90u: goto label_23de90;
        case 0x23dea4u: goto label_23dea4;
        case 0x23deb4u: goto label_23deb4;
        case 0x23dec4u: goto label_23dec4;
        case 0x23deccu: goto label_23decc;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dee8u: goto label_23dee8;
        case 0x23def4u: goto label_23def4;
        case 0x23df04u: goto label_23df04;
        case 0x23df18u: goto label_23df18;
        case 0x23df34u: goto label_23df34;
        case 0x23df48u: goto label_23df48;
        case 0x23df58u: goto label_23df58;
        case 0x23df84u: goto label_23df84;
        case 0x23df94u: goto label_23df94;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23dfb0u: goto label_23dfb0;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfccu: goto label_23dfcc;
        case 0x23e000u: goto label_23e000;
        default: break;
    }

    ctx->pc = 0x23de40u;

    // 0x23de40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23de44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23de48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23de4c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x23de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x23de50: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x23de50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x23de54: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23de58: 0xc041b48  jal         func_106D20
    ctx->pc = 0x23DE58u;
    SET_GPR_U32(ctx, 31, 0x23DE60u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x23DE58u, 0x23DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE60u;
label_23de60:
    // 0x23de60: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23de64: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23de68: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x23DE68u;
    SET_GPR_U32(ctx, 31, 0x23DE70u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x23DE68u, 0x23DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE70u;
label_23de70:
    // 0x23de70: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23de74: 0xc11931c  jal         func_464C70
    ctx->pc = 0x23DE74u;
    SET_GPR_U32(ctx, 31, 0x23DE7Cu);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x23DE74u, 0x23DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE7Cu;
label_23de7c:
    // 0x23de7c: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x23de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23de80: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23de84: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23de88: 0xc08f868  jal         func_23E1A0
    ctx->pc = 0x23DE88u;
    SET_GPR_U32(ctx, 31, 0x23DE90u);
    ctx->pc = 0x23E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E1A0u, 0x23DE88u, 0x23DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE90u;
label_23de90:
    // 0x23de90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23de94: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x23de94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23de98: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x23de98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23de9c: 0xc08f848  jal         func_23E120
    ctx->pc = 0x23DE9Cu;
    SET_GPR_U32(ctx, 31, 0x23DEA4u);
    ctx->pc = 0x23E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E120u, 0x23DE9Cu, 0x23DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEA4u;
label_23dea4:
    // 0x23dea4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23dea8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x23dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x23deac: 0xc08f83c  jal         func_23E0F0
    ctx->pc = 0x23DEACu;
    SET_GPR_U32(ctx, 31, 0x23DEB4u);
    ctx->pc = 0x23E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E0F0u, 0x23DEACu, 0x23DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEB4u;
label_23deb4:
    // 0x23deb4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23deb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23debc: 0xc08f82c  jal         func_23E0B0
    ctx->pc = 0x23DEBCu;
    SET_GPR_U32(ctx, 31, 0x23DEC4u);
    ctx->pc = 0x23E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E0B0u, 0x23DEBCu, 0x23DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEC4u;
label_23dec4:
    // 0x23dec4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23DEC4u;
    {
        const bool branch_taken_0x23dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dec4) {
            ctx->pc = 0x23DF34u;
            goto label_23df34;
        }
    }
    ctx->pc = 0x23DECCu;
label_23decc:
    // 0x23decc: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23ded0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x23DED0u;
    SET_GPR_U32(ctx, 31, 0x23DED8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x23DED0u, 0x23DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DED8u;
label_23ded8:
    // 0x23ded8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ded8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dedc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23dee0: 0xc08f818  jal         func_23E060
    ctx->pc = 0x23DEE0u;
    SET_GPR_U32(ctx, 31, 0x23DEE8u);
    ctx->pc = 0x23E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E060u, 0x23DEE0u, 0x23DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEE8u;
label_23dee8:
    // 0x23dee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23dee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23deec: 0xc041874  jal         func_1061D0
    ctx->pc = 0x23DEECu;
    SET_GPR_U32(ctx, 31, 0x23DEF4u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x23DEECu, 0x23DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEF4u;
label_23def4:
    // 0x23def4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23def8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23def8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23defc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23DEFCu;
    SET_GPR_U32(ctx, 31, 0x23DF04u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23DEFCu, 0x23DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF04u;
label_23df04:
    // 0x23df04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DF04u;
    {
        const bool branch_taken_0x23df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df04) {
            ctx->pc = 0x23DF28u;
            goto label_23df28;
        }
    }
    ctx->pc = 0x23DF0Cu;
    // 0x23df0c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23df10: 0xc08f818  jal         func_23E060
    ctx->pc = 0x23DF10u;
    SET_GPR_U32(ctx, 31, 0x23DF18u);
    ctx->pc = 0x23E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E060u, 0x23DF10u, 0x23DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF18u;
label_23df18:
    // 0x23df18: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23df1c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23df1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23df20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23DF20u;
    {
        const bool branch_taken_0x23df20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df20) {
            ctx->pc = 0x23DF60u;
            goto label_23df60;
        }
    }
    ctx->pc = 0x23DF28u;
label_23df28:
    // 0x23df28: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23df2c: 0xc08f808  jal         func_23E020
    ctx->pc = 0x23DF2Cu;
    SET_GPR_U32(ctx, 31, 0x23DF34u);
    ctx->pc = 0x23E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E020u, 0x23DF2Cu, 0x23DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF34u;
label_23df34:
    // 0x23df34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23df38: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x23df3c: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23df40: 0xc08f3bc  jal         func_23CEF0
    ctx->pc = 0x23DF40u;
    SET_GPR_U32(ctx, 31, 0x23DF48u);
    ctx->pc = 0x23CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CEF0u, 0x23DF40u, 0x23DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF48u;
label_23df48:
    // 0x23df48: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23df4c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x23df50: 0xc041998  jal         func_106660
    ctx->pc = 0x23DF50u;
    SET_GPR_U32(ctx, 31, 0x23DF58u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x23DF50u, 0x23DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF58u;
label_23df58:
    // 0x23df58: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x23DF58u;
    {
        const bool branch_taken_0x23df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df58) {
            ctx->pc = 0x23DECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23decc;
        }
    }
    ctx->pc = 0x23DF60u;
label_23df60:
    // 0x23df60: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x23df64: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x23df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23df68: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x23df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23df6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23df70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23df70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23df74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23df74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23df78: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23df7c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x23DF7Cu;
    SET_GPR_U32(ctx, 31, 0x23DF84u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x23DF7Cu, 0x23DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF84u;
label_23df84:
    // 0x23df84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df88: 0x27859db8  addiu       $a1, $gp, -0x6248
    ctx->pc = 0x23df88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942136));
    // 0x23df8c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x23DF8Cu;
    SET_GPR_U32(ctx, 31, 0x23DF94u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x23DF8Cu, 0x23DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF94u;
label_23df94:
    // 0x23df94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23DF94u;
    {
        const bool branch_taken_0x23df94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df94) {
            ctx->pc = 0x23DFE8u;
            goto label_23dfe8;
        }
    }
    ctx->pc = 0x23DF9Cu;
    // 0x23df9c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x23DF9Cu;
    SET_GPR_U32(ctx, 31, 0x23DFA4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x23DF9Cu, 0x23DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFA4u;
label_23dfa4:
    // 0x23dfa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23dfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfa8: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x23DFA8u;
    SET_GPR_U32(ctx, 31, 0x23DFB0u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x23DFA8u, 0x23DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFB0u;
label_23dfb0:
    // 0x23dfb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DFB0u;
    {
        const bool branch_taken_0x23dfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfb0) {
            ctx->pc = 0x23DFD8u;
            goto label_23dfd8;
        }
    }
    ctx->pc = 0x23DFB8u;
    // 0x23dfb8: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x23DFB8u;
    SET_GPR_U32(ctx, 31, 0x23DFC0u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x23DFB8u, 0x23DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfc4: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x23DFC4u;
    SET_GPR_U32(ctx, 31, 0x23DFCCu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x23DFC4u, 0x23DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFCCu;
label_23dfcc:
    // 0x23dfcc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x23dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x23dfd0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DFD0u;
    {
        const bool branch_taken_0x23dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23dfd0) {
            ctx->pc = 0x23DFE8u;
            goto label_23dfe8;
        }
    }
    ctx->pc = 0x23DFD8u;
label_23dfd8:
    // 0x23dfd8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x23dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dfdc: 0xc78081b4  lwc1        $f0, -0x7E4C($gp)
    ctx->pc = 0x23dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dfe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23dfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23dfe4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_23dfe8:
    // 0x23dfe8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x23dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dfec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23dff0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x23dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x23dff4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dff8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23DFF8u;
    SET_GPR_U32(ctx, 31, 0x23E000u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23DFF8u, 0x23E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E000u;
label_23e000:
    // 0x23e000: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e00c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23e010: 0x3e00008  jr          $ra
    ctx->pc = 0x23E010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E018u;
    // 0x23e018: 0x0  nop
    ctx->pc = 0x23e018u;
    // NOP
    // 0x23e01c: 0x0  nop
    ctx->pc = 0x23e01cu;
    // NOP
    ctx->pc = 0x23e020u;
}
