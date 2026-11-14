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

// Function: sub_001641E0
// Address: 0x1641e0 - 0x1649f0
void sub_001641E0_0x1641e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001641E0_0x1641e0");
#endif

    switch (ctx->pc) {
        case 0x164218u: goto label_164218;
        case 0x164270u: goto label_164270;
        case 0x1642b4u: goto label_1642b4;
        case 0x164314u: goto label_164314;
        case 0x16432cu: goto label_16432c;
        case 0x164344u: goto label_164344;
        case 0x164398u: goto label_164398;
        case 0x164414u: goto label_164414;
        case 0x164428u: goto label_164428;
        case 0x16446cu: goto label_16446c;
        case 0x1644ccu: goto label_1644cc;
        case 0x1644e4u: goto label_1644e4;
        case 0x1644fcu: goto label_1644fc;
        case 0x16454cu: goto label_16454c;
        case 0x1645c8u: goto label_1645c8;
        case 0x1645ccu: goto label_1645cc;
        case 0x1645e4u: goto label_1645e4;
        case 0x1645f4u: goto label_1645f4;
        case 0x164638u: goto label_164638;
        case 0x164694u: goto label_164694;
        case 0x1646a4u: goto label_1646a4;
        case 0x1646bcu: goto label_1646bc;
        case 0x1646ccu: goto label_1646cc;
        case 0x164710u: goto label_164710;
        case 0x16476cu: goto label_16476c;
        case 0x16477cu: goto label_16477c;
        case 0x164794u: goto label_164794;
        case 0x1647a4u: goto label_1647a4;
        case 0x1647e8u: goto label_1647e8;
        case 0x164854u: goto label_164854;
        case 0x164874u: goto label_164874;
        case 0x1648b8u: goto label_1648b8;
        case 0x164924u: goto label_164924;
        case 0x1649c8u: goto label_1649c8;
        default: break;
    }

    ctx->pc = 0x1641e0u;

    // 0x1641e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1641e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1641e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1641e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1641e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1641e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1641ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1641ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1641f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1641f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1641f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1641f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1641f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1641f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1641fc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1641fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x164200: 0xa3a50100  sb          $a1, 0x100($sp)
    ctx->pc = 0x164200u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 5));
    // 0x164204: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164208: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16420c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164210: 0xc08c910  jal         func_232440
    ctx->pc = 0x164210u;
    SET_GPR_U32(ctx, 31, 0x164218u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x164210u, 0x164218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164218u;
label_164218:
    // 0x164218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16421c: 0x0  nop
    ctx->pc = 0x16421cu;
    // NOP
    // 0x164220: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x164220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x164224: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164228u;
    {
        const bool branch_taken_0x164228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164228) {
            ctx->pc = 0x164248u;
            goto label_164248;
        }
    }
    ctx->pc = 0x164230u;
    // 0x164230: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164238: 0x0  nop
    ctx->pc = 0x164238u;
    // NOP
    // 0x16423c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x16423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x164240: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164240u;
    {
        const bool branch_taken_0x164240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164240) {
            ctx->pc = 0x164254u;
            goto label_164254;
        }
    }
    ctx->pc = 0x164248u;
label_164248:
    // 0x164248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16424c: 0x0  nop
    ctx->pc = 0x16424cu;
    // NOP
    // 0x164250: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x164250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_164254:
    // 0x164254: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x164254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164258: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x164258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16425c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164260: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x164264: 0x24a539b8  addiu       $a1, $a1, 0x39B8
    ctx->pc = 0x164264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14776));
    // 0x164268: 0xc05621c  jal         func_158870
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 31, 0x164270u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164268u, 0x164270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164270u;
label_164270:
    // 0x164270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164274: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x164274u;
    {
        const bool branch_taken_0x164274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164274) {
            ctx->pc = 0x164414u;
            goto label_164414;
        }
    }
    ctx->pc = 0x16427Cu;
    // 0x16427c: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x16427cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164280: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164280u;
    {
        const bool branch_taken_0x164280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164280) {
            ctx->pc = 0x1642B4u;
            goto label_1642b4;
        }
    }
    ctx->pc = 0x164288u;
    // 0x164288: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x164288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16428c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16428cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164290: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164294: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x164298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16429c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1642a0: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1642a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1642a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1642a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642ac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1642ACu;
    SET_GPR_U32(ctx, 31, 0x1642B4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1642ACu, 0x1642B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642B4u;
label_1642b4:
    // 0x1642b4: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1642b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1642b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1642B8u;
    {
        const bool branch_taken_0x1642b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1642b8) {
            ctx->pc = 0x1642D0u;
            goto label_1642d0;
        }
    }
    ctx->pc = 0x1642C0u;
    // 0x1642c0: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1642c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1642c4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1642c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1642c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1642C8u;
    {
        const bool branch_taken_0x1642c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1642c8) {
            ctx->pc = 0x1642D8u;
            goto label_1642d8;
        }
    }
    ctx->pc = 0x1642D0u;
label_1642d0:
    // 0x1642d0: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1642d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1642d4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1642d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1642d8:
    // 0x1642d8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1642d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1642dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1642e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1642e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642e4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1642e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1642e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1642e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1642ec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1642f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1642f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1642f4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1642f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1642f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1642fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164300: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x164300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x164304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164308: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16430c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16430Cu;
    SET_GPR_U32(ctx, 31, 0x164314u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16430Cu, 0x164314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164314u;
label_164314:
    // 0x164314: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x164314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164318: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16431c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16431cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164320: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x164320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x164324: 0xc08c744  jal         func_231D10
    ctx->pc = 0x164324u;
    SET_GPR_U32(ctx, 31, 0x16432Cu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x164324u, 0x16432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16432Cu;
label_16432c:
    // 0x16432c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164330: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x164334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164338: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16433c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x16433Cu;
    SET_GPR_U32(ctx, 31, 0x164344u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x16433Cu, 0x164344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164344u;
label_164344:
    // 0x164344: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x164348: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x164348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x16434c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x16434cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164350: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x164350u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x164354: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x164354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164358: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x164358u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16435c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x16435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x164360: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164364: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164364u;
    {
        const bool branch_taken_0x164364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164364) {
            ctx->pc = 0x164398u;
            goto label_164398;
        }
    }
    ctx->pc = 0x16436Cu;
    // 0x16436c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164374: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164378: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16437c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164384: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x164384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x164388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16438c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16438cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164390: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164390u;
    SET_GPR_U32(ctx, 31, 0x164398u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164390u, 0x164398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164398u;
label_164398:
    // 0x164398: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16439c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16439Cu;
    {
        const bool branch_taken_0x16439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16439c) {
            ctx->pc = 0x1643B4u;
            goto label_1643b4;
        }
    }
    ctx->pc = 0x1643A4u;
    // 0x1643a4: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1643a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1643a8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1643a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1643ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1643ACu;
    {
        const bool branch_taken_0x1643ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643ac) {
            ctx->pc = 0x1643BCu;
            goto label_1643bc;
        }
    }
    ctx->pc = 0x1643B4u;
label_1643b4:
    // 0x1643b4: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1643b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1643b8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1643b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1643bc:
    // 0x1643bc: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1643bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1643c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1643C0u;
    {
        const bool branch_taken_0x1643c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643c0) {
            ctx->pc = 0x1643D4u;
            goto label_1643d4;
        }
    }
    ctx->pc = 0x1643C8u;
    // 0x1643c8: 0x27b400b8  addiu       $s4, $sp, 0xB8
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1643cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1643CCu;
    {
        const bool branch_taken_0x1643cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643cc) {
            ctx->pc = 0x1643D8u;
            goto label_1643d8;
        }
    }
    ctx->pc = 0x1643D4u;
label_1643d4:
    // 0x1643d4: 0x27b400a8  addiu       $s4, $sp, 0xA8
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1643d8:
    // 0x1643d8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1643dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1643dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1643e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1643e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1643e4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1643e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1643e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1643e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1643ec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1643f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1643f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1643f4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1643f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1643f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1643fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164400: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x164400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16440c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16440Cu;
    SET_GPR_U32(ctx, 31, 0x164414u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16440Cu, 0x164414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164414u;
label_164414:
    // 0x164414: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164418: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16441c: 0x24a539c8  addiu       $a1, $a1, 0x39C8
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14792));
    // 0x164420: 0xc05621c  jal         func_158870
    ctx->pc = 0x164420u;
    SET_GPR_U32(ctx, 31, 0x164428u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x164420u, 0x164428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164428u;
label_164428:
    // 0x164428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16442c: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16442c) {
            ctx->pc = 0x1645C8u;
            goto label_1645c8;
        }
    }
    ctx->pc = 0x164434u;
    // 0x164434: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164438u;
    {
        const bool branch_taken_0x164438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164438) {
            ctx->pc = 0x16446Cu;
            goto label_16446c;
        }
    }
    ctx->pc = 0x164440u;
    // 0x164440: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x164440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164448: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16444c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x164450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164454: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164458: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x16445c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16445cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164464: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164464u;
    SET_GPR_U32(ctx, 31, 0x16446Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164464u, 0x16446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16446Cu;
label_16446c:
    // 0x16446c: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x16446cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164470u;
    {
        const bool branch_taken_0x164470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164470) {
            ctx->pc = 0x164488u;
            goto label_164488;
        }
    }
    ctx->pc = 0x164478u;
    // 0x164478: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x164478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16447c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x16447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x164480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164480u;
    {
        const bool branch_taken_0x164480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164480) {
            ctx->pc = 0x164490u;
            goto label_164490;
        }
    }
    ctx->pc = 0x164488u;
label_164488:
    // 0x164488: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x164488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16448c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x16448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_164490:
    // 0x164490: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164494: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16449c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1644a0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1644a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1644a4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1644a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1644a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1644ac: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1644b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1644b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1644b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1644b8: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1644bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1644c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644c4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1644C4u;
    SET_GPR_U32(ctx, 31, 0x1644CCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1644C4u, 0x1644CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644CCu;
label_1644cc:
    // 0x1644cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1644d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1644d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1644dc: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1644DCu;
    SET_GPR_U32(ctx, 31, 0x1644E4u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1644DCu, 0x1644E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644E4u;
label_1644e4:
    // 0x1644e4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1644e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1644ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1644ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644f0: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1644f4: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1644F4u;
    SET_GPR_U32(ctx, 31, 0x1644FCu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1644F4u, 0x1644FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644FCu;
label_1644fc:
    // 0x1644fc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x164500: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x164504: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x164504u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164508: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x164508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16450c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x16450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164510: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x164510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x164514: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164518u;
    {
        const bool branch_taken_0x164518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164518) {
            ctx->pc = 0x16454Cu;
            goto label_16454c;
        }
    }
    ctx->pc = 0x164520u;
    // 0x164520: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164524: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164528: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16452c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x164530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164538: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16453c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16453cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164544: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164544u;
    SET_GPR_U32(ctx, 31, 0x16454Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164544u, 0x16454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16454Cu;
label_16454c:
    // 0x16454c: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x16454cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164550u;
    {
        const bool branch_taken_0x164550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164550) {
            ctx->pc = 0x164568u;
            goto label_164568;
        }
    }
    ctx->pc = 0x164558u;
    // 0x164558: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x164558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16455c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x16455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x164560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164560u;
    {
        const bool branch_taken_0x164560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164560) {
            ctx->pc = 0x164570u;
            goto label_164570;
        }
    }
    ctx->pc = 0x164568u;
label_164568:
    // 0x164568: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x164568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16456c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x16456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_164570:
    // 0x164570: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164574u;
    {
        const bool branch_taken_0x164574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164574) {
            ctx->pc = 0x164588u;
            goto label_164588;
        }
    }
    ctx->pc = 0x16457Cu;
    // 0x16457c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x164580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164580u;
    {
        const bool branch_taken_0x164580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164580) {
            ctx->pc = 0x16458Cu;
            goto label_16458c;
        }
    }
    ctx->pc = 0x164588u;
label_164588:
    // 0x164588: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16458c:
    // 0x16458c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164590: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164598: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x164598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16459c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x16459cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1645a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1645a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1645a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1645a8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1645ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1645acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1645bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645c0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1645C0u;
    SET_GPR_U32(ctx, 31, 0x1645C8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1645C0u, 0x1645C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645C8u;
label_1645c8:
    // 0x1645c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1645c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1645cc:
    // 0x1645cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1645ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1645d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1645d4: 0x24a539e8  addiu       $a1, $a1, 0x39E8
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14824));
    // 0x1645d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645dc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1645DCu;
    SET_GPR_U32(ctx, 31, 0x1645E4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1645DCu, 0x1645E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645E4u;
label_1645e4:
    // 0x1645e4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1645e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1645e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1645e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1645ec: 0xc05621c  jal         func_158870
    ctx->pc = 0x1645ECu;
    SET_GPR_U32(ctx, 31, 0x1645F4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1645ECu, 0x1645F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645F4u;
label_1645f4:
    // 0x1645f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1645f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645f8: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1645F8u;
    {
        const bool branch_taken_0x1645f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1645f8) {
            ctx->pc = 0x1646A0u;
            goto label_1646a0;
        }
    }
    ctx->pc = 0x164600u;
    // 0x164600: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164604: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164604u;
    {
        const bool branch_taken_0x164604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164604) {
            ctx->pc = 0x164638u;
            goto label_164638;
        }
    }
    ctx->pc = 0x16460Cu;
    // 0x16460c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164614: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164618: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16461c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164620: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164624: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x164628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16462c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16462cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164630: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164630u;
    SET_GPR_U32(ctx, 31, 0x164638u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164630u, 0x164638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164638u;
label_164638:
    // 0x164638: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16463c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16463Cu;
    {
        const bool branch_taken_0x16463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16463c) {
            ctx->pc = 0x164654u;
            goto label_164654;
        }
    }
    ctx->pc = 0x164644u;
    // 0x164644: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x164644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164648: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x164648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x16464c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16464Cu;
    {
        const bool branch_taken_0x16464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16464c) {
            ctx->pc = 0x16465Cu;
            goto label_16465c;
        }
    }
    ctx->pc = 0x164654u;
label_164654:
    // 0x164654: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x164654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164658: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x164658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_16465c:
    // 0x16465c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x16465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164660: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164668: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x164668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16466c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x16466cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164670: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x164674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164678: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16467c: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x164680: 0xc78d81bc  lwc1        $f13, -0x7E44($gp)
    ctx->pc = 0x164680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x164684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164688: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16468c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16468Cu;
    SET_GPR_U32(ctx, 31, 0x164694u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16468Cu, 0x164694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164694u;
label_164694:
    // 0x164694: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x164694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x164698: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x164698u;
    {
        const bool branch_taken_0x164698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164698) {
            ctx->pc = 0x1645CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645cc;
        }
    }
    ctx->pc = 0x1646A0u;
label_1646a0:
    // 0x1646a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1646a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1646a4:
    // 0x1646a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1646a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1646a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1646a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1646ac: 0x24a539f8  addiu       $a1, $a1, 0x39F8
    ctx->pc = 0x1646acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    // 0x1646b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1646b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646b4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1646B4u;
    SET_GPR_U32(ctx, 31, 0x1646BCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1646B4u, 0x1646BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1646BCu;
label_1646bc:
    // 0x1646bc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1646c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1646c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1646c4: 0xc05621c  jal         func_158870
    ctx->pc = 0x1646C4u;
    SET_GPR_U32(ctx, 31, 0x1646CCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1646C4u, 0x1646CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1646CCu;
label_1646cc:
    // 0x1646cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1646ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646d0: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1646D0u;
    {
        const bool branch_taken_0x1646d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646d0) {
            ctx->pc = 0x164778u;
            goto label_164778;
        }
    }
    ctx->pc = 0x1646D8u;
    // 0x1646d8: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1646d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1646dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1646DCu;
    {
        const bool branch_taken_0x1646dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646dc) {
            ctx->pc = 0x164710u;
            goto label_164710;
        }
    }
    ctx->pc = 0x1646E4u;
    // 0x1646e4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1646e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1646e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1646e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1646ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1646f0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1646f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1646f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1646f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1646fc: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x1646fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x164700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164708: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164708u;
    SET_GPR_U32(ctx, 31, 0x164710u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164708u, 0x164710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164710u;
label_164710:
    // 0x164710: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164714u;
    {
        const bool branch_taken_0x164714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164714) {
            ctx->pc = 0x16472Cu;
            goto label_16472c;
        }
    }
    ctx->pc = 0x16471Cu;
    // 0x16471c: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x16471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164720: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x164720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x164724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164724u;
    {
        const bool branch_taken_0x164724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164724) {
            ctx->pc = 0x164734u;
            goto label_164734;
        }
    }
    ctx->pc = 0x16472Cu;
label_16472c:
    // 0x16472c: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x16472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164730: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x164730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_164734:
    // 0x164734: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164738: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16473c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164740: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x164740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164744: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x164744u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164748: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16474c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164750: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164754: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x164754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x164758: 0xc78d81bc  lwc1        $f13, -0x7E44($gp)
    ctx->pc = 0x164758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16475c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164764: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x164764u;
    SET_GPR_U32(ctx, 31, 0x16476Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x164764u, 0x16476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16476Cu;
label_16476c:
    // 0x16476c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x164770: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x164770u;
    {
        const bool branch_taken_0x164770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164770) {
            ctx->pc = 0x1646A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1646a4;
        }
    }
    ctx->pc = 0x164778u;
label_164778:
    // 0x164778: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16477c:
    // 0x16477c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x164780: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x164784: 0x24a53a08  addiu       $a1, $a1, 0x3A08
    ctx->pc = 0x164784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14856));
    // 0x164788: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x164788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16478c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x16478Cu;
    SET_GPR_U32(ctx, 31, 0x164794u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16478Cu, 0x164794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164794u;
label_164794:
    // 0x164794: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164798: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x164798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16479c: 0xc05621c  jal         func_158870
    ctx->pc = 0x16479Cu;
    SET_GPR_U32(ctx, 31, 0x1647A4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16479Cu, 0x1647A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647A4u;
label_1647a4:
    // 0x1647a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1647a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647a8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1647A8u;
    {
        const bool branch_taken_0x1647a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647a8) {
            ctx->pc = 0x164860u;
            goto label_164860;
        }
    }
    ctx->pc = 0x1647B0u;
    // 0x1647b0: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1647b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1647b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1647B4u;
    {
        const bool branch_taken_0x1647b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647b4) {
            ctx->pc = 0x1647E8u;
            goto label_1647e8;
        }
    }
    ctx->pc = 0x1647BCu;
    // 0x1647bc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1647c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1647c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1647c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1647c8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1647cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1647ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1647d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1647d4: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x1647d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1647d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1647d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1647dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647e0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1647E0u;
    SET_GPR_U32(ctx, 31, 0x1647E8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1647E0u, 0x1647E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647E8u;
label_1647e8:
    // 0x1647e8: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1647e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1647ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1647ECu;
    {
        const bool branch_taken_0x1647ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647ec) {
            ctx->pc = 0x16480Cu;
            goto label_16480c;
        }
    }
    ctx->pc = 0x1647F4u;
    // 0x1647f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1647f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1647f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1647fc: 0x0  nop
    ctx->pc = 0x1647fcu;
    // NOP
    // 0x164800: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x164800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x164804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164804u;
    {
        const bool branch_taken_0x164804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164804) {
            ctx->pc = 0x16481Cu;
            goto label_16481c;
        }
    }
    ctx->pc = 0x16480Cu;
label_16480c:
    // 0x16480c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164814: 0x0  nop
    ctx->pc = 0x164814u;
    // NOP
    // 0x164818: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x164818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_16481c:
    // 0x16481c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x16481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164820: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164828: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x164828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16482c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x16482cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164830: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x164834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164838: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16483c: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x164840: 0xc78d8200  lwc1        $f13, -0x7E00($gp)
    ctx->pc = 0x164840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x164844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16484c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16484Cu;
    SET_GPR_U32(ctx, 31, 0x164854u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16484Cu, 0x164854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164854u;
label_164854:
    // 0x164854: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x164858: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x164858u;
    {
        const bool branch_taken_0x164858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164858) {
            ctx->pc = 0x16477Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16477c;
        }
    }
    ctx->pc = 0x164860u;
label_164860:
    // 0x164860: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x164860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164864: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x164864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x164868: 0x24a539d8  addiu       $a1, $a1, 0x39D8
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14808));
    // 0x16486c: 0xc05621c  jal         func_158870
    ctx->pc = 0x16486Cu;
    SET_GPR_U32(ctx, 31, 0x164874u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16486Cu, 0x164874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164874u;
label_164874:
    // 0x164874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164878: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x164878u;
    {
        const bool branch_taken_0x164878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x164878) {
            ctx->pc = 0x1649C8u;
            goto label_1649c8;
        }
    }
    ctx->pc = 0x164880u;
    // 0x164880: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164884: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164884u;
    {
        const bool branch_taken_0x164884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164884) {
            ctx->pc = 0x1648B8u;
            goto label_1648b8;
        }
    }
    ctx->pc = 0x16488Cu;
    // 0x16488c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164890: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164894: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164898: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16489c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1648a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1648a4: 0x27a700ec  addiu       $a3, $sp, 0xEC
    ctx->pc = 0x1648a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1648a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1648a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1648acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648b0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1648B0u;
    SET_GPR_U32(ctx, 31, 0x1648B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1648B0u, 0x1648B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648B8u;
label_1648b8:
    // 0x1648b8: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x1648b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1648bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1648BCu;
    {
        const bool branch_taken_0x1648bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648bc) {
            ctx->pc = 0x1648DCu;
            goto label_1648dc;
        }
    }
    ctx->pc = 0x1648C4u;
    // 0x1648c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1648c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1648c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1648cc: 0x0  nop
    ctx->pc = 0x1648ccu;
    // NOP
    // 0x1648d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1648d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1648d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1648D4u;
    {
        const bool branch_taken_0x1648d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648d4) {
            ctx->pc = 0x1648ECu;
            goto label_1648ec;
        }
    }
    ctx->pc = 0x1648DCu;
label_1648dc:
    // 0x1648dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1648dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1648e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1648e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1648e4: 0x0  nop
    ctx->pc = 0x1648e4u;
    // NOP
    // 0x1648e8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1648e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1648ec:
    // 0x1648ec: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1648f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1648f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1648f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1648f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1648f8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1648f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648fc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1648fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164900: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x164904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164908: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16490c: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x16490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x164910: 0xc78d8200  lwc1        $f13, -0x7E00($gp)
    ctx->pc = 0x164910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x164914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16491c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16491Cu;
    SET_GPR_U32(ctx, 31, 0x164924u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16491Cu, 0x164924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164924u;
label_164924:
    // 0x164924: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x164924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x164928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x164928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16492c: 0x0  nop
    ctx->pc = 0x16492cu;
    // NOP
    // 0x164930: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x164930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x164934: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x164934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x164938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x164938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16493c: 0x0  nop
    ctx->pc = 0x16493cu;
    // NOP
    // 0x164940: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x164940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x164944: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x164944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164948: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x164948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16494c: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x16494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164950: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x164950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x164954: 0x93a30100  lbu         $v1, 0x100($sp)
    ctx->pc = 0x164954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164958: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x164958u;
    {
        const bool branch_taken_0x164958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164958) {
            ctx->pc = 0x1649C8u;
            goto label_1649c8;
        }
    }
    ctx->pc = 0x164960u;
    // 0x164960: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x164960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164964u;
    {
        const bool branch_taken_0x164964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164964) {
            ctx->pc = 0x164984u;
            goto label_164984;
        }
    }
    ctx->pc = 0x16496Cu;
    // 0x16496c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16496cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164974: 0x0  nop
    ctx->pc = 0x164974u;
    // NOP
    // 0x164978: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x164978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16497c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16497Cu;
    {
        const bool branch_taken_0x16497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16497c) {
            ctx->pc = 0x164994u;
            goto label_164994;
        }
    }
    ctx->pc = 0x164984u;
label_164984:
    // 0x164984: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16498c: 0x0  nop
    ctx->pc = 0x16498cu;
    // NOP
    // 0x164990: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x164990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_164994:
    // 0x164994: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x164998: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16499c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16499cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1649a0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1649a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1649a4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1649a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1649a8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1649ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1649acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649b4: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1649b8: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1649bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1649bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649c0: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x1649C0u;
    SET_GPR_U32(ctx, 31, 0x1649C8u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x1649C0u, 0x1649C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649C8u;
label_1649c8:
    // 0x1649c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1649c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1649cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1649ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1649d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1649d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1649d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1649d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1649d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1649d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1649dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1649dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1649e0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1649e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1649E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1649E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1649ECu;
    // 0x1649ec: 0x0  nop
    ctx->pc = 0x1649ecu;
    // NOP
    ctx->pc = 0x1649f0u;
}
