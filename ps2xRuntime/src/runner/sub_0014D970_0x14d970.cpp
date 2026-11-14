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

// Function: sub_0014D970
// Address: 0x14d970 - 0x14dd30
void sub_0014D970_0x14d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D970_0x14d970");
#endif

    switch (ctx->pc) {
        case 0x14d9e4u: goto label_14d9e4;
        case 0x14d9f4u: goto label_14d9f4;
        case 0x14da00u: goto label_14da00;
        case 0x14da10u: goto label_14da10;
        case 0x14da20u: goto label_14da20;
        case 0x14da2cu: goto label_14da2c;
        case 0x14da38u: goto label_14da38;
        case 0x14da4cu: goto label_14da4c;
        case 0x14da60u: goto label_14da60;
        case 0x14da90u: goto label_14da90;
        case 0x14dab8u: goto label_14dab8;
        case 0x14dac4u: goto label_14dac4;
        case 0x14db28u: goto label_14db28;
        case 0x14db34u: goto label_14db34;
        case 0x14dc04u: goto label_14dc04;
        case 0x14dc30u: goto label_14dc30;
        case 0x14dc54u: goto label_14dc54;
        case 0x14dca4u: goto label_14dca4;
        case 0x14dcb8u: goto label_14dcb8;
        case 0x14dcd8u: goto label_14dcd8;
        case 0x14dcf8u: goto label_14dcf8;
        default: break;
    }

    ctx->pc = 0x14d970u;

    // 0x14d970: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x14d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x14d974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14d978: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14d97c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14d980: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14d984: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d98c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d99c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14d9a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14d9a4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14d9a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14d9ac: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14d9b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14d9b4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14d9b8: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14d9bc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x14d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14d9c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d9c4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d9c8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9cc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14d9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14d9d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14d9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14d9d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14d9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14d9d8: 0x8f84ba8c  lw          $a0, -0x4574($gp)
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949516)));
    // 0x14d9dc: 0xc050b24  jal         func_142C90
    ctx->pc = 0x14D9DCu;
    SET_GPR_U32(ctx, 31, 0x14D9E4u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x14D9DCu, 0x14D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E4u;
label_14d9e4:
    // 0x14d9e4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14d9e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9ec: 0xc0412dc  jal         func_104B70
    ctx->pc = 0x14D9ECu;
    SET_GPR_U32(ctx, 31, 0x14D9F4u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x14D9ECu, 0x14D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9F4u;
label_14d9f4:
    // 0x14d9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9f8: 0xc090590  jal         func_241640
    ctx->pc = 0x14D9F8u;
    SET_GPR_U32(ctx, 31, 0x14DA00u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x14D9F8u, 0x14DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA00u;
label_14da00:
    // 0x14da00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14da00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14da08: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x14DA08u;
    SET_GPR_U32(ctx, 31, 0x14DA10u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x14DA08u, 0x14DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA10u;
label_14da10:
    // 0x14da10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14da14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da18: 0xc0469d4  jal         func_11A750
    ctx->pc = 0x14DA18u;
    SET_GPR_U32(ctx, 31, 0x14DA20u);
    ctx->pc = 0x11A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A750u, 0x14DA18u, 0x14DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA20u;
label_14da20:
    // 0x14da20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14da20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14da24: 0xc042290  jal         func_108A40
    ctx->pc = 0x14DA24u;
    SET_GPR_U32(ctx, 31, 0x14DA2Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x14DA24u, 0x14DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA2Cu;
label_14da2c:
    // 0x14da2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14da2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da30: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x14DA30u;
    {
        const bool branch_taken_0x14da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da30) {
            ctx->pc = 0x14DBF8u;
            goto label_14dbf8;
        }
    }
    ctx->pc = 0x14DA38u;
label_14da38:
    // 0x14da38: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14da3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14da44: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14DA44u;
    SET_GPR_U32(ctx, 31, 0x14DA4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14DA44u, 0x14DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA4Cu;
label_14da4c:
    // 0x14da4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14da4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14da54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da58: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14DA58u;
    SET_GPR_U32(ctx, 31, 0x14DA60u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14DA58u, 0x14DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA60u;
label_14da60:
    // 0x14da60: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14da64: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x14da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14da68: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14da6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14da70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14da74: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14da74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14da78: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14da78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14da7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14da7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14da80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da84: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x14da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14da88: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14DA88u;
    SET_GPR_U32(ctx, 31, 0x14DA90u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14DA88u, 0x14DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA90u;
label_14da90:
    // 0x14da90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x14da94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14da98: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14da9c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14daa0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14daa4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x14daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x14daa8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14daac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dab0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14DAB0u;
    SET_GPR_U32(ctx, 31, 0x14DAB8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14DAB0u, 0x14DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAB8u;
label_14dab8:
    // 0x14dab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dabc: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14DABCu;
    SET_GPR_U32(ctx, 31, 0x14DAC4u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14DABCu, 0x14DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAC4u;
label_14dac4:
    // 0x14dac4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DAC4u;
    {
        const bool branch_taken_0x14dac4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14dac4) {
            ctx->pc = 0x14DAE0u;
            goto label_14dae0;
        }
    }
    ctx->pc = 0x14DACCu;
    // 0x14dacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14daccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14dad0: 0x0  nop
    ctx->pc = 0x14dad0u;
    // NOP
    // 0x14dad4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14dad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14dad8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DAD8u;
    {
        const bool branch_taken_0x14dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dad8) {
            ctx->pc = 0x14DAFCu;
            goto label_14dafc;
        }
    }
    ctx->pc = 0x14DAE0u;
label_14dae0:
    // 0x14dae0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14dae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14dae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14dae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14daec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14daecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14daf0: 0x0  nop
    ctx->pc = 0x14daf0u;
    // NOP
    // 0x14daf4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14daf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14daf8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14daf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_14dafc:
    // 0x14dafc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14db00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14db00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14db04: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x14db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14db08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db0c: 0x0  nop
    ctx->pc = 0x14db0cu;
    // NOP
    // 0x14db10: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14db10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14db14: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14db14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14db18: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x14db18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14db1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db20: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14DB20u;
    SET_GPR_U32(ctx, 31, 0x14DB28u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14DB20u, 0x14DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db2c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x14DB2Cu;
    SET_GPR_U32(ctx, 31, 0x14DB34u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14DB2Cu, 0x14DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB34u;
label_14db34:
    // 0x14db34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB34u;
    {
        const bool branch_taken_0x14db34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14db34) {
            ctx->pc = 0x14DB50u;
            goto label_14db50;
        }
    }
    ctx->pc = 0x14DB3Cu;
    // 0x14db3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db40: 0x0  nop
    ctx->pc = 0x14db40u;
    // NOP
    // 0x14db44: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14db44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14db48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DB48u;
    {
        const bool branch_taken_0x14db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db48) {
            ctx->pc = 0x14DB6Cu;
            goto label_14db6c;
        }
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14db50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14db54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14db58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14db58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14db5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14db5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db60: 0x0  nop
    ctx->pc = 0x14db60u;
    // NOP
    // 0x14db64: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14db64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14db68: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14db68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_14db6c:
    // 0x14db6c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14db70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14db70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14db74: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x14db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14db78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db7c: 0x0  nop
    ctx->pc = 0x14db7cu;
    // NOP
    // 0x14db80: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14db80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14db84: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14db84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14db88: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x14db88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x14db8c: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x14db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db90: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14db94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14db98: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x14DB98u;
    {
        const bool branch_taken_0x14db98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14db98) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBA0u;
    // 0x14dba0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x14dba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dba4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x14dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dba8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14dba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dbac: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14DBACu;
    {
        const bool branch_taken_0x14dbac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dbac) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBB4u;
    // 0x14dbb4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14dbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dbb8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x14dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dbbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14dbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dbc0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x14DBC0u;
    {
        const bool branch_taken_0x14dbc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dbc0) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBC8u;
    // 0x14dbc8: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dbcc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x14dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dbd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14dbd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dbd4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x14DBD4u;
    {
        const bool branch_taken_0x14dbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dbd4) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBDCu;
    // 0x14dbdc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dbe0: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x14dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x14dbe4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dbe8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x14dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x14dbec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DC0Cu;
            goto label_14dc0c;
        }
    }
    ctx->pc = 0x14DBF4u;
label_14dbf4:
    // 0x14dbf4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_14dbf8:
    // 0x14dbf8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14dbfc: 0xc042288  jal         func_108A20
    ctx->pc = 0x14DBFCu;
    SET_GPR_U32(ctx, 31, 0x14DC04u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x14DBFCu, 0x14DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC04u;
label_14dc04:
    // 0x14dc04: 0x1602ff8c  bne         $s0, $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x14DC04u;
    {
        const bool branch_taken_0x14dc04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dc04) {
            ctx->pc = 0x14DA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14da38;
        }
    }
    ctx->pc = 0x14DC0Cu;
label_14dc0c:
    // 0x14dc0c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dc10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14dc14: 0x10020033  beq         $zero, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14DC14u;
    {
        const bool branch_taken_0x14dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dc14) {
            ctx->pc = 0x14DCE4u;
            goto label_14dce4;
        }
    }
    ctx->pc = 0x14DC1Cu;
    // 0x14dc1c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dc20: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14dc24: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14dc28: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14DC28u;
    SET_GPR_U32(ctx, 31, 0x14DC30u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14DC28u, 0x14DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC30u;
label_14dc30:
    // 0x14dc30: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x14dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dc34: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x14dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14dc38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14dc3c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x14dc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x14dc40: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dc44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14dc48: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14dc4c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14DC4Cu;
    SET_GPR_U32(ctx, 31, 0x14DC54u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14DC4Cu, 0x14DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC54u;
label_14dc54:
    // 0x14dc54: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x14dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dc58: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x14dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14dc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14dc60: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x14dc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x14dc64: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14dc68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14dc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14dc6c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x14dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14dc70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14dc74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dc74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14dc78: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x14dc78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x14dc7c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14dc80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14dc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14dc84: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x14dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14dc88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14dc8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dc8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14dc90: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x14dc90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x14dc94: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dc98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14dc9c: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14DC9Cu;
    SET_GPR_U32(ctx, 31, 0x14DCA4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14DC9Cu, 0x14DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCA4u;
label_14dca4:
    // 0x14dca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dca8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14dcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcb0: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14DCB0u;
    SET_GPR_U32(ctx, 31, 0x14DCB8u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14DCB0u, 0x14DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB8u;
label_14dcb8:
    // 0x14dcb8: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dcbc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14dcc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dcc4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x14dcc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dcc8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14dccc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14dcd0: 0xc0420a0  jal         func_108280
    ctx->pc = 0x14DCD0u;
    SET_GPR_U32(ctx, 31, 0x14DCD8u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x14DCD0u, 0x14DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCD8u;
label_14dcd8:
    // 0x14dcd8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14dcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14DCDCu;
    {
        const bool branch_taken_0x14dcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dcdc) {
            ctx->pc = 0x14DCFCu;
            goto label_14dcfc;
        }
    }
    ctx->pc = 0x14DCE4u;
label_14dce4:
    // 0x14dce4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14dce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dce8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14dcec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14dcf0: 0xc0420a0  jal         func_108280
    ctx->pc = 0x14DCF0u;
    SET_GPR_U32(ctx, 31, 0x14DCF8u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x14DCF0u, 0x14DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCF8u;
label_14dcf8:
    // 0x14dcf8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x14dcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14dcfc:
    // 0x14dcfc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14dcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14dd00: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14dd00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14dd04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14dd04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14dd08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14dd08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14dd0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14dd0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dd10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14dd10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dd14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14dd14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dd18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dd1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dd24: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x14dd24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14dd28: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DD30u;
}
