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

// Function: sub_0024A1C0
// Address: 0x24a1c0 - 0x24aee0
void sub_0024A1C0_0x24a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A1C0_0x24a1c0");
#endif

    switch (ctx->pc) {
        case 0x24a208u: goto label_24a208;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a22cu: goto label_24a22c;
        case 0x24a244u: goto label_24a244;
        case 0x24a278u: goto label_24a278;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a418u: goto label_24a418;
        case 0x24a424u: goto label_24a424;
        case 0x24a4c4u: goto label_24a4c4;
        case 0x24a534u: goto label_24a534;
        case 0x24a564u: goto label_24a564;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a660u: goto label_24a660;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a788u: goto label_24a788;
        case 0x24a7e4u: goto label_24a7e4;
        case 0x24a868u: goto label_24a868;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a924u: goto label_24a924;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aadcu: goto label_24aadc;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab38u: goto label_24ab38;
        case 0x24abe0u: goto label_24abe0;
        case 0x24ac04u: goto label_24ac04;
        case 0x24ac28u: goto label_24ac28;
        case 0x24ac40u: goto label_24ac40;
        case 0x24ace8u: goto label_24ace8;
        case 0x24ad0cu: goto label_24ad0c;
        case 0x24ad30u: goto label_24ad30;
        case 0x24ad54u: goto label_24ad54;
        case 0x24ad88u: goto label_24ad88;
        case 0x24ada4u: goto label_24ada4;
        case 0x24ade4u: goto label_24ade4;
        case 0x24ae1cu: goto label_24ae1c;
        case 0x24ae34u: goto label_24ae34;
        case 0x24ae70u: goto label_24ae70;
        case 0x24ae90u: goto label_24ae90;
        default: break;
    }

    ctx->pc = 0x24a1c0u;

    // 0x24a1c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x24a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x24a1c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24a1c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24a1cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24a1d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24a1d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24a1d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24a1dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24a1e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24a1e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a1ec: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x24a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x24a1f0: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x24a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x24a1f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a1f8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24a1fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24a200: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24A200u;
    SET_GPR_U32(ctx, 31, 0x24A208u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24A200u, 0x24A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A208u;
label_24a208:
    // 0x24a208: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x24a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x24a20c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24a210: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24a210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24a214: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24A214u;
    SET_GPR_U32(ctx, 31, 0x24A21Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24A214u, 0x24A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A21Cu;
label_24a21c:
    // 0x24a21c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24a21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a224: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24A224u;
    SET_GPR_U32(ctx, 31, 0x24A22Cu);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24A224u, 0x24A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A22Cu;
label_24a22c:
    // 0x24a22c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24a22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a230: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x24a230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a234: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x24a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24a238: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x24a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x24a23c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24A23Cu;
    SET_GPR_U32(ctx, 31, 0x24A244u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24A23Cu, 0x24A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A244u;
label_24a244:
    // 0x24a244: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24a248: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x24a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24a24c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a250: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a254: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a258: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24a258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a25c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24a25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a260: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24a260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24a264: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24a268: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24a268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a26c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x24a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24a270: 0xc094f2c  jal         func_253CB0
    ctx->pc = 0x24A270u;
    SET_GPR_U32(ctx, 31, 0x24A278u);
    ctx->pc = 0x253CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253CB0u, 0x24A270u, 0x24A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A278u;
label_24a278:
    // 0x24a278: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24a27c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x24a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x24a280: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a284: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a288: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24a288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a28c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a290: 0xa3a0013f  sb          $zero, 0x13F($sp)
    ctx->pc = 0x24a290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a294: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x24a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24a298: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x24a298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x24a29c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x24a2a0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x24a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x24a2a4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x24a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x24a2a8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x24a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x24a2ac: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x24a2b0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x24a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x24a2b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2b8: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x24A2B8u;
    SET_GPR_U32(ctx, 31, 0x24A2C0u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x24A2B8u, 0x24A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2C0u;
label_24a2c0:
    // 0x24a2c0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x24a2c4: 0x104300b8  beq         $v0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x24A2C4u;
    {
        const bool branch_taken_0x24a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a2c4) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A2CCu;
    // 0x24a2cc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x24a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24a2d0: 0x104300b5  beq         $v0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x24A2D0u;
    {
        const bool branch_taken_0x24a2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a2d0) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A2D8u;
    // 0x24a2d8: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x24a2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24a2dc: 0x105100b2  beq         $v0, $s1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x24A2DCu;
    {
        const bool branch_taken_0x24a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24a2dc) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A2E4u;
    // 0x24a2e4: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x24A2E4u;
    {
        const bool branch_taken_0x24a2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2e4) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A2ECu;
    // 0x24a2ec: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x24a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x24a2f0: 0x104300ad  beq         $v0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x24A2F0u;
    {
        const bool branch_taken_0x24a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a2f0) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A2F8u;
    // 0x24a2f8: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x24a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x24a2fc: 0x104300a0  beq         $v0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x24A2FCu;
    {
        const bool branch_taken_0x24a2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a2fc) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A304u;
    // 0x24a304: 0x24120056  addiu       $s2, $zero, 0x56
    ctx->pc = 0x24a304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x24a308: 0x1052009d  beq         $v0, $s2, . + 4 + (0x9D << 2)
    ctx->pc = 0x24A308u;
    {
        const bool branch_taken_0x24a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x24a308) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A310u;
    // 0x24a310: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x24a310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x24a314: 0x1043009a  beq         $v0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A31Cu;
    // 0x24a31c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x24a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x24a320: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A320u;
    {
        const bool branch_taken_0x24a320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a320) {
            ctx->pc = 0x24A33Cu;
            goto label_24a33c;
        }
    }
    ctx->pc = 0x24A328u;
    // 0x24a328: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x24a32c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A32Cu;
    {
        const bool branch_taken_0x24a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a32c) {
            ctx->pc = 0x24A33Cu;
            goto label_24a33c;
        }
    }
    ctx->pc = 0x24A334u;
    // 0x24a334: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x24A334u;
    {
        const bool branch_taken_0x24a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a334) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A33Cu;
label_24a33c:
    // 0x24a33c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24a33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a340: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a348: 0x0  nop
    ctx->pc = 0x24a348u;
    // NOP
    // 0x24a34c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a350: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A350u;
    {
        const bool branch_taken_0x24a350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a350) {
            ctx->pc = 0x24A368u;
            goto label_24a368;
        }
    }
    ctx->pc = 0x24A358u;
    // 0x24a358: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a35c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24a35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24a360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A360u;
    {
        const bool branch_taken_0x24a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a360) {
            ctx->pc = 0x24A37Cu;
            goto label_24a37c;
        }
    }
    ctx->pc = 0x24A368u;
label_24a368:
    // 0x24a368: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a36c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a36cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a370: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24a370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24a374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a378: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x24a378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_24a37c:
    // 0x24a37c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a380: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a388: 0x0  nop
    ctx->pc = 0x24a388u;
    // NOP
    // 0x24a38c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a390: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A390u;
    {
        const bool branch_taken_0x24a390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a390) {
            ctx->pc = 0x24A3A8u;
            goto label_24a3a8;
        }
    }
    ctx->pc = 0x24A398u;
    // 0x24a398: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a39c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24a39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24a3a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A3A0u;
    {
        const bool branch_taken_0x24a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3a0) {
            ctx->pc = 0x24A3BCu;
            goto label_24a3bc;
        }
    }
    ctx->pc = 0x24A3A8u;
label_24a3a8:
    // 0x24a3a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a3a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a3ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a3b0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24a3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24a3b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a3b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x24a3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_24a3bc:
    // 0x24a3bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a3c0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24a3c4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24A3C4u;
    SET_GPR_U32(ctx, 31, 0x24A3CCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24A3C4u, 0x24A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3CCu;
label_24a3cc:
    // 0x24a3cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24a3ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a3d0: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A3D0u;
    {
        const bool branch_taken_0x24a3d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3d0) {
            ctx->pc = 0x24A3E8u;
            goto label_24a3e8;
        }
    }
    ctx->pc = 0x24A3D8u;
    // 0x24a3d8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x24a3dc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x24a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x24a3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A3E0u;
    {
        const bool branch_taken_0x24a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3e0) {
            ctx->pc = 0x24A3ECu;
            goto label_24a3ec;
        }
    }
    ctx->pc = 0x24A3E8u;
label_24a3e8:
    // 0x24a3e8: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x24a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_24a3ec:
    // 0x24a3ec: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x24a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x24a3f0: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x24a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x24a3f4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x24a3f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A3F8u;
    {
        const bool branch_taken_0x24a3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a3f8) {
            ctx->pc = 0x24A40Cu;
            goto label_24a40c;
        }
    }
    ctx->pc = 0x24A400u;
    // 0x24a400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a404: 0x100002a8  b           . + 4 + (0x2A8 << 2)
    ctx->pc = 0x24A404u;
    {
        const bool branch_taken_0x24a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a404) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A40Cu;
label_24a40c:
    // 0x24a40c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x24a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x24a410: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A550u;
            goto label_24a550;
        }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x24a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x24a41c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x24A41Cu;
    {
        const bool branch_taken_0x24a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a41c) {
            ctx->pc = 0x24A520u;
            goto label_24a520;
        }
    }
    ctx->pc = 0x24A424u;
label_24a424:
    // 0x24a424: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a428: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a430: 0x0  nop
    ctx->pc = 0x24a430u;
    // NOP
    // 0x24a434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a438: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A438u;
    {
        const bool branch_taken_0x24a438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a438) {
            ctx->pc = 0x24A450u;
            goto label_24a450;
        }
    }
    ctx->pc = 0x24A440u;
    // 0x24a440: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a444: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A448u;
    {
        const bool branch_taken_0x24a448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a448) {
            ctx->pc = 0x24A464u;
            goto label_24a464;
        }
    }
    ctx->pc = 0x24A450u;
label_24a450:
    // 0x24a450: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a454: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a458: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a45c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a464:
    // 0x24a464: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x24a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x24a468: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x24a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a46c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a470: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a478: 0x0  nop
    ctx->pc = 0x24a478u;
    // NOP
    // 0x24a47c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a47cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a480: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A480u;
    {
        const bool branch_taken_0x24a480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a480) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A488u;
    // 0x24a488: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a48c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A490u;
    {
        const bool branch_taken_0x24a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a490) {
            ctx->pc = 0x24A4ACu;
            goto label_24a4ac;
        }
    }
    ctx->pc = 0x24A498u;
label_24a498:
    // 0x24a498: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a49c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a4a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a4a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a4a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a4ac:
    // 0x24a4ac: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24a4b0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a4b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a4b8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24a4bc: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24A4BCu;
    SET_GPR_U32(ctx, 31, 0x24A4C4u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24A4BCu, 0x24A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4C4u;
label_24a4c4:
    // 0x24a4c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24a4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4c8: 0x14150004  bne         $zero, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A4C8u;
    {
        const bool branch_taken_0x24a4c8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 21));
        if (branch_taken_0x24a4c8) {
            ctx->pc = 0x24A4DCu;
            goto label_24a4dc;
        }
    }
    ctx->pc = 0x24A4D0u;
    // 0x24a4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4d4: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x24A4D4u;
    {
        const bool branch_taken_0x24a4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a4d4) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A4DCu;
label_24a4dc:
    // 0x24a4dc: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x24a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x24a4e0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x24a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x24a4e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A4E4u;
    {
        const bool branch_taken_0x24a4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a4e4) {
            ctx->pc = 0x24A4F8u;
            goto label_24a4f8;
        }
    }
    ctx->pc = 0x24A4ECu;
    // 0x24a4ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4f0: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x24A4F0u;
    {
        const bool branch_taken_0x24a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a4f0) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A4F8u;
label_24a4f8:
    // 0x24a4f8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x24a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x24a4fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x24a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x24a500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A500u;
    {
        const bool branch_taken_0x24a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a500) {
            ctx->pc = 0x24A514u;
            goto label_24a514;
        }
    }
    ctx->pc = 0x24A508u;
    // 0x24a508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a50c: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x24A50Cu;
    {
        const bool branch_taken_0x24a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a50c) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A514u;
label_24a514:
    // 0x24a514: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x24a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x24a518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a51c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x24a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_24a520:
    // 0x24a520: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x24a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x24a524: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x24a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x24a528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a52c: 0xc042214  jal         func_108850
    ctx->pc = 0x24A52Cu;
    SET_GPR_U32(ctx, 31, 0x24A534u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24A52Cu, 0x24A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A534u;
label_24a534:
    // 0x24a534: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x24a534u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24a538: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x24a538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24a53c: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x24A53Cu;
    {
        const bool branch_taken_0x24a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a53c) {
            ctx->pc = 0x24A424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a424;
        }
    }
    ctx->pc = 0x24A544u;
    // 0x24a544: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24a548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a54c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x24a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_24a550:
    // 0x24a550: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24a554: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x24a558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a55c: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24A55Cu;
    SET_GPR_U32(ctx, 31, 0x24A564u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24A55Cu, 0x24A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A564u;
label_24a564:
    // 0x24a564: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x24a564u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24a568: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x24a568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24a56c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x24A56Cu;
    {
        const bool branch_taken_0x24a56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a56c) {
            ctx->pc = 0x24A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A574u;
    // 0x24a574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a578: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x24A578u;
    {
        const bool branch_taken_0x24a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a578) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A580u;
label_24a580:
    // 0x24a580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a584: 0xa3a2013f  sb          $v0, 0x13F($sp)
    ctx->pc = 0x24a584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a588: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24a58c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x24a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x24a590: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x24a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24a594: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x24a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x24a598: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24a59c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x24a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x24a5a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x24a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a5a4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x24a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_24a5a8:
    // 0x24a5a8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x24a5ac: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x24a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x24a5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5b4: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x24A5B4u;
    SET_GPR_U32(ctx, 31, 0x24A5BCu);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x24A5B4u, 0x24A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5BCu;
label_24a5bc:
    // 0x24a5bc: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x24a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x24a5c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A5C0u;
    {
        const bool branch_taken_0x24a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24a5c0) {
            ctx->pc = 0x24A5D0u;
            goto label_24a5d0;
        }
    }
    ctx->pc = 0x24A5C8u;
    // 0x24a5c8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x24a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24a5cc: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x24a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_24a5d0:
    // 0x24a5d0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a5d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a5dc: 0x0  nop
    ctx->pc = 0x24a5dcu;
    // NOP
    // 0x24a5e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a5e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A5E4u;
    {
        const bool branch_taken_0x24a5e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a5e4) {
            ctx->pc = 0x24A5FCu;
            goto label_24a5fc;
        }
    }
    ctx->pc = 0x24A5ECu;
    // 0x24a5ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a5ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a5f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24a5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24a5f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A5F4u;
    {
        const bool branch_taken_0x24a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5f4) {
            ctx->pc = 0x24A610u;
            goto label_24a610;
        }
    }
    ctx->pc = 0x24A5FCu;
label_24a5fc:
    // 0x24a5fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a5fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a600: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a604: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24a604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24a608: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a60c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x24a60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_24a610:
    // 0x24a610: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a614: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a61c: 0x0  nop
    ctx->pc = 0x24a61cu;
    // NOP
    // 0x24a620: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a624: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A624u;
    {
        const bool branch_taken_0x24a624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a624) {
            ctx->pc = 0x24A63Cu;
            goto label_24a63c;
        }
    }
    ctx->pc = 0x24A62Cu;
    // 0x24a62c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a630: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24a630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24a634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A634u;
    {
        const bool branch_taken_0x24a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a634) {
            ctx->pc = 0x24A650u;
            goto label_24a650;
        }
    }
    ctx->pc = 0x24A63Cu;
label_24a63c:
    // 0x24a63c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a63cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a640: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a644: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24a644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24a648: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a64c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x24a64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_24a650:
    // 0x24a650: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a654: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24a654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24a658: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24A658u;
    SET_GPR_U32(ctx, 31, 0x24A660u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24A658u, 0x24A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A660u;
label_24a660:
    // 0x24a660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a664: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A664u;
    {
        const bool branch_taken_0x24a664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a664) {
            ctx->pc = 0x24A67Cu;
            goto label_24a67c;
        }
    }
    ctx->pc = 0x24A66Cu;
    // 0x24a66c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a670: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x24a670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x24a674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A674u;
    {
        const bool branch_taken_0x24a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a674) {
            ctx->pc = 0x24A680u;
            goto label_24a680;
        }
    }
    ctx->pc = 0x24A67Cu;
label_24a67c:
    // 0x24a67c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x24a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_24a680:
    // 0x24a680: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x24a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24a684: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x24a684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x24a688: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x24a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x24a68c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A68Cu;
    {
        const bool branch_taken_0x24a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a68c) {
            ctx->pc = 0x24A6A0u;
            goto label_24a6a0;
        }
    }
    ctx->pc = 0x24A694u;
    // 0x24a694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a698: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x24A698u;
    {
        const bool branch_taken_0x24a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a698) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A6A0u;
label_24a6a0:
    // 0x24a6a0: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x24a6a4: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A6A4u;
    SET_GPR_U32(ctx, 31, 0x24A6ACu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A6A4u, 0x24A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6ACu;
label_24a6ac:
    // 0x24a6ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a6b0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x24a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x24a6b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24a6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6b8: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x24A6B8u;
    {
        const bool branch_taken_0x24a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a6b8) {
            ctx->pc = 0x24AE84u;
            goto label_24ae84;
        }
    }
    ctx->pc = 0x24A6C0u;
label_24a6c0:
    // 0x24a6c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6c4: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x24A6C4u;
    {
        const bool branch_taken_0x24a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a6c4) {
            ctx->pc = 0x24AE64u;
            goto label_24ae64;
        }
    }
    ctx->pc = 0x24A6CCu;
label_24a6cc:
    // 0x24a6cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24a6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6d8: 0xc094f5c  jal         func_253D70
    ctx->pc = 0x24A6D8u;
    SET_GPR_U32(ctx, 31, 0x24A6E0u);
    ctx->pc = 0x253D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253D70u, 0x24A6D8u, 0x24A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24a6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a6e8: 0x146201dd  bne         $v1, $v0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x24A6E8u;
    {
        const bool branch_taken_0x24a6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a6e8) {
            ctx->pc = 0x24AE60u;
            goto label_24ae60;
        }
    }
    ctx->pc = 0x24A6F0u;
    // 0x24a6f0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a6fc: 0x0  nop
    ctx->pc = 0x24a6fcu;
    // NOP
    // 0x24a700: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a704: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A704u;
    {
        const bool branch_taken_0x24a704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a704) {
            ctx->pc = 0x24A71Cu;
            goto label_24a71c;
        }
    }
    ctx->pc = 0x24A70Cu;
    // 0x24a70c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a70cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a710: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A714u;
    {
        const bool branch_taken_0x24a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a714) {
            ctx->pc = 0x24A730u;
            goto label_24a730;
        }
    }
    ctx->pc = 0x24A71Cu;
label_24a71c:
    // 0x24a71c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a71cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a720: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a724: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a728: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a72c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a730:
    // 0x24a730: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x24a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24a734: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a738: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a740: 0x0  nop
    ctx->pc = 0x24a740u;
    // NOP
    // 0x24a744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a748: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A748u;
    {
        const bool branch_taken_0x24a748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a748) {
            ctx->pc = 0x24A760u;
            goto label_24a760;
        }
    }
    ctx->pc = 0x24A750u;
    // 0x24a750: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a754: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a758: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A758u;
    {
        const bool branch_taken_0x24a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a758) {
            ctx->pc = 0x24A774u;
            goto label_24a774;
        }
    }
    ctx->pc = 0x24A760u;
label_24a760:
    // 0x24a760: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a760u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a764: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a768: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a76c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a774:
    // 0x24a774: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24a778: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a77c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24a780: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24A780u;
    SET_GPR_U32(ctx, 31, 0x24A788u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24A780u, 0x24A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A788u;
label_24a788:
    // 0x24a788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a78c: 0x14100004  bne         $zero, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A78Cu;
    {
        const bool branch_taken_0x24a78c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x24a78c) {
            ctx->pc = 0x24A7A0u;
            goto label_24a7a0;
        }
    }
    ctx->pc = 0x24A794u;
    // 0x24a794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a798: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x24A798u;
    {
        const bool branch_taken_0x24a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a798) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A7A0u;
label_24a7a0:
    // 0x24a7a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24a7a4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x24a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x24a7a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a7ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A7ACu;
    {
        const bool branch_taken_0x24a7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a7ac) {
            ctx->pc = 0x24A7F4u;
            goto label_24a7f4;
        }
    }
    ctx->pc = 0x24A7B4u;
    // 0x24a7b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24a7b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a7bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A7BCu;
    {
        const bool branch_taken_0x24a7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a7bc) {
            ctx->pc = 0x24A7F4u;
            goto label_24a7f4;
        }
    }
    ctx->pc = 0x24A7C4u;
    // 0x24a7c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a7c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A7C8u;
    {
        const bool branch_taken_0x24a7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7c8) {
            ctx->pc = 0x24A7F4u;
            goto label_24a7f4;
        }
    }
    ctx->pc = 0x24A7D0u;
    // 0x24a7d0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24a7d4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x24a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x24a7d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a7dc: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A7DCu;
    SET_GPR_U32(ctx, 31, 0x24A7E4u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A7DCu, 0x24A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7E4u;
label_24a7e4:
    // 0x24a7e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a7e8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x24a7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a7ec: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A7ECu;
    {
        const bool branch_taken_0x24a7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a7ec) {
            ctx->pc = 0x24A800u;
            goto label_24a800;
        }
    }
    ctx->pc = 0x24A7F4u;
label_24a7f4:
    // 0x24a7f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7f8: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x24A7F8u;
    {
        const bool branch_taken_0x24a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7f8) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A800u;
label_24a800:
    // 0x24a800: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A800u;
    {
        const bool branch_taken_0x24a800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a800) {
            ctx->pc = 0x24A824u;
            goto label_24a824;
        }
    }
    ctx->pc = 0x24A808u;
    // 0x24a808: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24a80c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x24a80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x24a810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A810u;
    {
        const bool branch_taken_0x24a810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a810) {
            ctx->pc = 0x24A824u;
            goto label_24a824;
        }
    }
    ctx->pc = 0x24A818u;
    // 0x24a818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a81c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x24A81Cu;
    {
        const bool branch_taken_0x24a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a81c) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A824u;
label_24a824:
    // 0x24a824: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A824u;
    {
        const bool branch_taken_0x24a824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a824) {
            ctx->pc = 0x24A848u;
            goto label_24a848;
        }
    }
    ctx->pc = 0x24A82Cu;
    // 0x24a82c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24a830: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24a834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A834u;
    {
        const bool branch_taken_0x24a834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a834) {
            ctx->pc = 0x24A848u;
            goto label_24a848;
        }
    }
    ctx->pc = 0x24A83Cu;
    // 0x24a83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a840: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x24A840u;
    {
        const bool branch_taken_0x24a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a840) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A848u;
label_24a848:
    // 0x24a848: 0x93a2013f  lbu         $v0, 0x13F($sp)
    ctx->pc = 0x24a848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
    // 0x24a84c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24a850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a854: 0x14620133  bne         $v1, $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x24A854u;
    {
        const bool branch_taken_0x24a854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a854) {
            ctx->pc = 0x24AD24u;
            goto label_24ad24;
        }
    }
    ctx->pc = 0x24A85Cu;
    // 0x24a85c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a860: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x24A860u;
    SET_GPR_U32(ctx, 31, 0x24A868u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x24A860u, 0x24A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A868u;
label_24a868:
    // 0x24a868: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x24a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x24a86c: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A8E8u;
            goto label_24a8e8;
        }
    }
    ctx->pc = 0x24A874u;
    // 0x24a874: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x24a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x24a878: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24A878u;
    {
        const bool branch_taken_0x24a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a878) {
            ctx->pc = 0x24A8BCu;
            goto label_24a8bc;
        }
    }
    ctx->pc = 0x24A880u;
    // 0x24a880: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x24a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x24a884: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A884u;
    {
        const bool branch_taken_0x24a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a884) {
            ctx->pc = 0x24A894u;
            goto label_24a894;
        }
    }
    ctx->pc = 0x24A88Cu;
    // 0x24a88c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24A88Cu;
    {
        const bool branch_taken_0x24a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a88c) {
            ctx->pc = 0x24A910u;
            goto label_24a910;
        }
    }
    ctx->pc = 0x24A894u;
label_24a894:
    // 0x24a894: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x24a894u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a898: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a89c: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A89Cu;
    SET_GPR_U32(ctx, 31, 0x24A8A4u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A89Cu, 0x24A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8A4u;
label_24a8a4:
    // 0x24a8a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a8a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24A8A8u;
    {
        const bool branch_taken_0x24a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a8a8) {
            ctx->pc = 0x24A910u;
            goto label_24a910;
        }
    }
    ctx->pc = 0x24A8B0u;
    // 0x24a8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8b4: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x24A8B4u;
    {
        const bool branch_taken_0x24a8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a8b4) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A8BCu;
label_24a8bc:
    // 0x24a8bc: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x24a8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a8c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a8c4: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A8C4u;
    SET_GPR_U32(ctx, 31, 0x24A8CCu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A8C4u, 0x24A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8CCu;
label_24a8cc:
    // 0x24a8cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a8d4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24A8D4u;
    {
        const bool branch_taken_0x24a8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a8d4) {
            ctx->pc = 0x24A910u;
            goto label_24a910;
        }
    }
    ctx->pc = 0x24A8DCu;
    // 0x24a8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8e0: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x24A8E0u;
    {
        const bool branch_taken_0x24a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a8e0) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A8E8u;
label_24a8e8:
    // 0x24a8e8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x24a8e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a8ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a8f0: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A8F0u;
    SET_GPR_U32(ctx, 31, 0x24A8F8u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A8F0u, 0x24A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8F8u;
label_24a8f8:
    // 0x24a8f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a8fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A8FCu;
    {
        const bool branch_taken_0x24a8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a8fc) {
            ctx->pc = 0x24A910u;
            goto label_24a910;
        }
    }
    ctx->pc = 0x24A904u;
    // 0x24a904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a908: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x24A908u;
    {
        const bool branch_taken_0x24a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a908) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24A910u;
label_24a910:
    // 0x24a910: 0x1640003f  bnez        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x24A910u;
    {
        const bool branch_taken_0x24a910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a910) {
            ctx->pc = 0x24AA10u;
            goto label_24aa10;
        }
    }
    ctx->pc = 0x24A918u;
    // 0x24a918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a91c: 0xc091010  jal         func_244040
    ctx->pc = 0x24A91Cu;
    SET_GPR_U32(ctx, 31, 0x24A924u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24A91Cu, 0x24A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A924u;
label_24a924:
    // 0x24a924: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x24A924u;
    {
        const bool branch_taken_0x24a924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a924) {
            ctx->pc = 0x24AA10u;
            goto label_24aa10;
        }
    }
    ctx->pc = 0x24A92Cu;
    // 0x24a92c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a930: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a938: 0x0  nop
    ctx->pc = 0x24a938u;
    // NOP
    // 0x24a93c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a940: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A940u;
    {
        const bool branch_taken_0x24a940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a940) {
            ctx->pc = 0x24A958u;
            goto label_24a958;
        }
    }
    ctx->pc = 0x24A948u;
    // 0x24a948: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a94c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a94cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A950u;
    {
        const bool branch_taken_0x24a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a950) {
            ctx->pc = 0x24A96Cu;
            goto label_24a96c;
        }
    }
    ctx->pc = 0x24A958u;
label_24a958:
    // 0x24a958: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a95c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a960: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a964: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a968: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a96c:
    // 0x24a96c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x24a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24a970: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a974: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24a978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a97c: 0x0  nop
    ctx->pc = 0x24a97cu;
    // NOP
    // 0x24a980: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24a980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a984: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24A984u;
    {
        const bool branch_taken_0x24a984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a984) {
            ctx->pc = 0x24A99Cu;
            goto label_24a99c;
        }
    }
    ctx->pc = 0x24A98Cu;
    // 0x24a98c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a98cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a990: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A994u;
    {
        const bool branch_taken_0x24a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a994) {
            ctx->pc = 0x24A9B0u;
            goto label_24a9b0;
        }
    }
    ctx->pc = 0x24A99Cu;
label_24a99c:
    // 0x24a99c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24a99cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a9a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24a9a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24a9a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24a9a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24a9a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a9ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24a9b0:
    // 0x24a9b0: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x24a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24a9b4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a9b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24a9bc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24a9c0: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24A9C0u;
    SET_GPR_U32(ctx, 31, 0x24A9C8u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24A9C0u, 0x24A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9C8u;
label_24a9c8:
    // 0x24a9c8: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x24a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x24a9cc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x24a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24a9d0: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A9D0u;
    {
        const bool branch_taken_0x24a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a9d0) {
            ctx->pc = 0x24AA04u;
            goto label_24aa04;
        }
    }
    ctx->pc = 0x24A9D8u;
    // 0x24a9d8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x24a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24a9dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a9e0: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A9E0u;
    {
        const bool branch_taken_0x24a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a9e0) {
            ctx->pc = 0x24AA04u;
            goto label_24aa04;
        }
    }
    ctx->pc = 0x24A9E8u;
    // 0x24a9e8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x24a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24a9ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a9f0: 0xc094d24  jal         func_253490
    ctx->pc = 0x24A9F0u;
    SET_GPR_U32(ctx, 31, 0x24A9F8u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24A9F0u, 0x24A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9F8u;
label_24a9f8:
    // 0x24a9f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24a9fc: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A9FCu;
    {
        const bool branch_taken_0x24a9fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a9fc) {
            ctx->pc = 0x24AA10u;
            goto label_24aa10;
        }
    }
    ctx->pc = 0x24AA04u;
label_24aa04:
    // 0x24aa04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24aa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa08: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x24AA08u;
    {
        const bool branch_taken_0x24aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa08) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AA10u;
label_24aa10:
    // 0x24aa10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24aa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa14: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24AA14u;
    SET_GPR_U32(ctx, 31, 0x24AA1Cu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24AA14u, 0x24AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA1Cu;
label_24aa1c:
    // 0x24aa1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24aa20: 0x16420040  bne         $s2, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x24AA20u;
    {
        const bool branch_taken_0x24aa20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x24aa20) {
            ctx->pc = 0x24AB24u;
            goto label_24ab24;
        }
    }
    ctx->pc = 0x24AA28u;
    // 0x24aa28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24aa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa2c: 0xc091010  jal         func_244040
    ctx->pc = 0x24AA2Cu;
    SET_GPR_U32(ctx, 31, 0x24AA34u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AA2Cu, 0x24AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA34u;
label_24aa34:
    // 0x24aa34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24aa38: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x24AA38u;
    {
        const bool branch_taken_0x24aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24aa38) {
            ctx->pc = 0x24AB24u;
            goto label_24ab24;
        }
    }
    ctx->pc = 0x24AA40u;
    // 0x24aa40: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aa44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24aa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aa4c: 0x0  nop
    ctx->pc = 0x24aa4cu;
    // NOP
    // 0x24aa50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24aa50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AA54u;
    {
        const bool branch_taken_0x24aa54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aa54) {
            ctx->pc = 0x24AA6Cu;
            goto label_24aa6c;
        }
    }
    ctx->pc = 0x24AA5Cu;
    // 0x24aa5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24aa5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24aa60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24aa60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24aa64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AA64u;
    {
        const bool branch_taken_0x24aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa64) {
            ctx->pc = 0x24AA80u;
            goto label_24aa80;
        }
    }
    ctx->pc = 0x24AA6Cu;
label_24aa6c:
    // 0x24aa6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24aa6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24aa70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24aa70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24aa74: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24aa74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24aa78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24aa7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24aa80:
    // 0x24aa80: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x24aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24aa84: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aa88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24aa8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aa90: 0x0  nop
    ctx->pc = 0x24aa90u;
    // NOP
    // 0x24aa94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24aa94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AA98u;
    {
        const bool branch_taken_0x24aa98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aa98) {
            ctx->pc = 0x24AAB0u;
            goto label_24aab0;
        }
    }
    ctx->pc = 0x24AAA0u;
    // 0x24aaa0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24aaa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24aaa4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24aaa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24aaa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AAA8u;
    {
        const bool branch_taken_0x24aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aaa8) {
            ctx->pc = 0x24AAC4u;
            goto label_24aac4;
        }
    }
    ctx->pc = 0x24AAB0u;
label_24aab0:
    // 0x24aab0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24aab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24aab4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24aab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24aab8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24aab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24aabc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24aac0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24aac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24aac4:
    // 0x24aac4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x24aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24aac8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x24aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24aacc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24aad0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24aad4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24AAD4u;
    SET_GPR_U32(ctx, 31, 0x24AADCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24AAD4u, 0x24AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AADCu;
label_24aadc:
    // 0x24aadc: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x24aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x24aae0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x24aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24aae4: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24AAE4u;
    {
        const bool branch_taken_0x24aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24aae4) {
            ctx->pc = 0x24AB18u;
            goto label_24ab18;
        }
    }
    ctx->pc = 0x24AAECu;
    // 0x24aaec: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x24aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24aaf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24aaf4: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24AAF4u;
    {
        const bool branch_taken_0x24aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24aaf4) {
            ctx->pc = 0x24AB18u;
            goto label_24ab18;
        }
    }
    ctx->pc = 0x24AAFCu;
    // 0x24aafc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x24aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24ab00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ab04: 0xc094d24  jal         func_253490
    ctx->pc = 0x24AB04u;
    SET_GPR_U32(ctx, 31, 0x24AB0Cu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24AB04u, 0x24AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB0Cu;
label_24ab0c:
    // 0x24ab0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24ab10: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AB10u;
    {
        const bool branch_taken_0x24ab10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ab10) {
            ctx->pc = 0x24AB24u;
            goto label_24ab24;
        }
    }
    ctx->pc = 0x24AB18u;
label_24ab18:
    // 0x24ab18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ab18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab1c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x24AB1Cu;
    {
        const bool branch_taken_0x24ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab1c) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AB24u;
label_24ab24:
    // 0x24ab24: 0x1620003d  bnez        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x24AB24u;
    {
        const bool branch_taken_0x24ab24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab24) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AB2Cu;
    // 0x24ab2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab30: 0xc091010  jal         func_244040
    ctx->pc = 0x24AB30u;
    SET_GPR_U32(ctx, 31, 0x24AB38u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AB30u, 0x24AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB38u;
label_24ab38:
    // 0x24ab38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ab3c: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x24AB3Cu;
    {
        const bool branch_taken_0x24ab3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ab3c) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AB44u;
    // 0x24ab44: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ab48: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24ab4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ab50: 0x0  nop
    ctx->pc = 0x24ab50u;
    // NOP
    // 0x24ab54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24ab54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ab58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AB58u;
    {
        const bool branch_taken_0x24ab58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ab58) {
            ctx->pc = 0x24AB70u;
            goto label_24ab70;
        }
    }
    ctx->pc = 0x24AB60u;
    // 0x24ab60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ab60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ab64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ab64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ab68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AB68u;
    {
        const bool branch_taken_0x24ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab68) {
            ctx->pc = 0x24AB84u;
            goto label_24ab84;
        }
    }
    ctx->pc = 0x24AB70u;
label_24ab70:
    // 0x24ab70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24ab70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ab74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ab74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ab78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ab78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ab7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ab80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24ab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24ab84:
    // 0x24ab84: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x24ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24ab88: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x24ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ab8c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ab90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24ab94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ab94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ab98: 0x0  nop
    ctx->pc = 0x24ab98u;
    // NOP
    // 0x24ab9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24ab9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24ABA0u;
    {
        const bool branch_taken_0x24aba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aba0) {
            ctx->pc = 0x24ABB8u;
            goto label_24abb8;
        }
    }
    ctx->pc = 0x24ABA8u;
    // 0x24aba8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24aba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24abac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24abacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24abb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24ABB0u;
    {
        const bool branch_taken_0x24abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24abb0) {
            ctx->pc = 0x24ABCCu;
            goto label_24abcc;
        }
    }
    ctx->pc = 0x24ABB8u;
label_24abb8:
    // 0x24abb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24abb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24abbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24abbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24abc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24abc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24abc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24abc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24abc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24abcc:
    // 0x24abcc: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x24abccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24abd0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24abd4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24abd8: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24ABD8u;
    SET_GPR_U32(ctx, 31, 0x24ABE0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24ABD8u, 0x24ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABE0u;
label_24abe0:
    // 0x24abe0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24abe0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abe4: 0x101e000a  beq         $zero, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x24ABE4u;
    {
        const bool branch_taken_0x24abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x24abe4) {
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24ABECu;
    // 0x24abec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x24abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x24abf0: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ABF0u;
    {
        const bool branch_taken_0x24abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24abf0) {
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24ABF8u;
    // 0x24abf8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x24abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x24abfc: 0xc094d24  jal         func_253490
    ctx->pc = 0x24ABFCu;
    SET_GPR_U32(ctx, 31, 0x24AC04u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24ABFCu, 0x24AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC04u;
label_24ac04:
    // 0x24ac04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24ac08: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AC08u;
    {
        const bool branch_taken_0x24ac08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ac08) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AC10u;
label_24ac10:
    // 0x24ac10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ac10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac14: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x24AC14u;
    {
        const bool branch_taken_0x24ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac14) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AC1Cu;
label_24ac1c:
    // 0x24ac1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac20: 0xc042214  jal         func_108850
    ctx->pc = 0x24AC20u;
    SET_GPR_U32(ctx, 31, 0x24AC28u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24AC20u, 0x24AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC28u;
label_24ac28:
    // 0x24ac28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ac2c: 0x1622003d  bne         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24AC2Cu;
    {
        const bool branch_taken_0x24ac2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ac2c) {
            ctx->pc = 0x24AD24u;
            goto label_24ad24;
        }
    }
    ctx->pc = 0x24AC34u;
    // 0x24ac34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac38: 0xc091010  jal         func_244040
    ctx->pc = 0x24AC38u;
    SET_GPR_U32(ctx, 31, 0x24AC40u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AC38u, 0x24AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC40u;
label_24ac40:
    // 0x24ac40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ac44: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x24AC44u;
    {
        const bool branch_taken_0x24ac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ac44) {
            ctx->pc = 0x24AD24u;
            goto label_24ad24;
        }
    }
    ctx->pc = 0x24AC4Cu;
    // 0x24ac4c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x24ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24ac54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ac54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ac58: 0x0  nop
    ctx->pc = 0x24ac58u;
    // NOP
    // 0x24ac5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24ac5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ac60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AC60u;
    {
        const bool branch_taken_0x24ac60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ac60) {
            ctx->pc = 0x24AC78u;
            goto label_24ac78;
        }
    }
    ctx->pc = 0x24AC68u;
    // 0x24ac68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ac68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ac6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ac6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ac70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AC70u;
    {
        const bool branch_taken_0x24ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac70) {
            ctx->pc = 0x24AC8Cu;
            goto label_24ac8c;
        }
    }
    ctx->pc = 0x24AC78u;
label_24ac78:
    // 0x24ac78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24ac78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ac7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ac7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ac80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ac80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ac84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ac88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24ac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24ac8c:
    // 0x24ac8c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x24ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24ac90: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ac94: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x24ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac98: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24ac9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ac9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aca0: 0x0  nop
    ctx->pc = 0x24aca0u;
    // NOP
    // 0x24aca4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24aca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aca8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACA8u;
    {
        const bool branch_taken_0x24aca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aca8) {
            ctx->pc = 0x24ACC0u;
            goto label_24acc0;
        }
    }
    ctx->pc = 0x24ACB0u;
    // 0x24acb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24acb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24acb4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24acb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24acb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24ACB8u;
    {
        const bool branch_taken_0x24acb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24acb8) {
            ctx->pc = 0x24ACD4u;
            goto label_24acd4;
        }
    }
    ctx->pc = 0x24ACC0u;
label_24acc0:
    // 0x24acc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24acc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24acc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24acc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24acc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24acc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24accc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24acd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24acd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24acd4:
    // 0x24acd4: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x24acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24acd8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24acdc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24ace0: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24ACE0u;
    SET_GPR_U32(ctx, 31, 0x24ACE8u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24ACE0u, 0x24ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ACE8u;
label_24ace8:
    // 0x24ace8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24ace8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acec: 0x1017000a  beq         $zero, $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x24ACECu;
    {
        const bool branch_taken_0x24acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x24acec) {
            ctx->pc = 0x24AD18u;
            goto label_24ad18;
        }
    }
    ctx->pc = 0x24ACF4u;
    // 0x24acf4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x24acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24acf8: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ACF8u;
    {
        const bool branch_taken_0x24acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24acf8) {
            ctx->pc = 0x24AD18u;
            goto label_24ad18;
        }
    }
    ctx->pc = 0x24AD00u;
    // 0x24ad00: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x24ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24ad04: 0xc094d24  jal         func_253490
    ctx->pc = 0x24AD04u;
    SET_GPR_U32(ctx, 31, 0x24AD0Cu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24AD04u, 0x24AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD0Cu;
label_24ad0c:
    // 0x24ad0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24ad10: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AD10u;
    {
        const bool branch_taken_0x24ad10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ad10) {
            ctx->pc = 0x24AD24u;
            goto label_24ad24;
        }
    }
    ctx->pc = 0x24AD18u;
label_24ad18:
    // 0x24ad18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad1c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x24AD1Cu;
    {
        const bool branch_taken_0x24ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad1c) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AD24u;
label_24ad24:
    // 0x24ad24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad28: 0xc091048  jal         func_244120
    ctx->pc = 0x24AD28u;
    SET_GPR_U32(ctx, 31, 0x24AD30u);
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x24AD28u, 0x24AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD30u;
label_24ad30:
    // 0x24ad30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24ad34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad38: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x24AD38u;
    {
        const bool branch_taken_0x24ad38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ad38) {
            ctx->pc = 0x24AE60u;
            goto label_24ae60;
        }
    }
    ctx->pc = 0x24AD40u;
    // 0x24ad40: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x24AD40u;
    {
        const bool branch_taken_0x24ad40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ad40) {
            ctx->pc = 0x24AD7Cu;
            goto label_24ad7c;
        }
    }
    ctx->pc = 0x24AD48u;
    // 0x24ad48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad4c: 0xc091010  jal         func_244040
    ctx->pc = 0x24AD4Cu;
    SET_GPR_U32(ctx, 31, 0x24AD54u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AD4Cu, 0x24AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD54u;
label_24ad54:
    // 0x24ad54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AD54u;
    {
        const bool branch_taken_0x24ad54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ad54) {
            ctx->pc = 0x24AD7Cu;
            goto label_24ad7c;
        }
    }
    ctx->pc = 0x24AD5Cu;
    // 0x24ad5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x24ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24ad60: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x24ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x24ad64: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x24ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x24ad68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AD68u;
    {
        const bool branch_taken_0x24ad68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ad68) {
            ctx->pc = 0x24AD7Cu;
            goto label_24ad7c;
        }
    }
    ctx->pc = 0x24AD70u;
    // 0x24ad70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad74: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x24AD74u;
    {
        const bool branch_taken_0x24ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad74) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AD7Cu;
label_24ad7c:
    // 0x24ad7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad80: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24AD80u;
    SET_GPR_U32(ctx, 31, 0x24AD88u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24AD80u, 0x24AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD88u;
label_24ad88:
    // 0x24ad88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad8c: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24ad90: 0x1645000f  bne         $s2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x24AD90u;
    {
        const bool branch_taken_0x24ad90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x24ad90) {
            ctx->pc = 0x24ADD0u;
            goto label_24add0;
        }
    }
    ctx->pc = 0x24AD98u;
    // 0x24ad98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad9c: 0xc091010  jal         func_244040
    ctx->pc = 0x24AD9Cu;
    SET_GPR_U32(ctx, 31, 0x24ADA4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AD9Cu, 0x24ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADA4u;
label_24ada4:
    // 0x24ada4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ada8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24ADA8u;
    {
        const bool branch_taken_0x24ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ada8) {
            ctx->pc = 0x24ADD0u;
            goto label_24add0;
        }
    }
    ctx->pc = 0x24ADB0u;
    // 0x24adb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x24adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24adb4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x24adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24adb8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x24adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x24adbc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24ADBCu;
    {
        const bool branch_taken_0x24adbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24adbc) {
            ctx->pc = 0x24ADD0u;
            goto label_24add0;
        }
    }
    ctx->pc = 0x24ADC4u;
    // 0x24adc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24adc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adc8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x24ADC8u;
    {
        const bool branch_taken_0x24adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24adc8) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24ADD0u;
label_24add0:
    // 0x24add0: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x24ADD0u;
    {
        const bool branch_taken_0x24add0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24add0) {
            ctx->pc = 0x24AE10u;
            goto label_24ae10;
        }
    }
    ctx->pc = 0x24ADD8u;
    // 0x24add8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24add8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24addc: 0xc091010  jal         func_244040
    ctx->pc = 0x24ADDCu;
    SET_GPR_U32(ctx, 31, 0x24ADE4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24ADDCu, 0x24ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADE4u;
label_24ade4:
    // 0x24ade4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ade8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24ADE8u;
    {
        const bool branch_taken_0x24ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24ade8) {
            ctx->pc = 0x24AE10u;
            goto label_24ae10;
        }
    }
    ctx->pc = 0x24ADF0u;
    // 0x24adf0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24adf4: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x24adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x24adf8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x24adf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24adfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24ADFCu;
    {
        const bool branch_taken_0x24adfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24adfc) {
            ctx->pc = 0x24AE10u;
            goto label_24ae10;
        }
    }
    ctx->pc = 0x24AE04u;
    // 0x24ae04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ae04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae08: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24AE08u;
    {
        const bool branch_taken_0x24ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ae08) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AE10u;
label_24ae10:
    // 0x24ae10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae14: 0xc042214  jal         func_108850
    ctx->pc = 0x24AE14u;
    SET_GPR_U32(ctx, 31, 0x24AE1Cu);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24AE14u, 0x24AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE1Cu;
label_24ae1c:
    // 0x24ae1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ae20: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24AE20u;
    {
        const bool branch_taken_0x24ae20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ae20) {
            ctx->pc = 0x24AE60u;
            goto label_24ae60;
        }
    }
    ctx->pc = 0x24AE28u;
    // 0x24ae28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae2c: 0xc091010  jal         func_244040
    ctx->pc = 0x24AE2Cu;
    SET_GPR_U32(ctx, 31, 0x24AE34u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x24AE2Cu, 0x24AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE34u;
label_24ae34:
    // 0x24ae34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ae38: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AE38u;
    {
        const bool branch_taken_0x24ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ae38) {
            ctx->pc = 0x24AE60u;
            goto label_24ae60;
        }
    }
    ctx->pc = 0x24AE40u;
    // 0x24ae40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24ae44: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x24ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x24ae48: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x24ae48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ae4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AE4Cu;
    {
        const bool branch_taken_0x24ae4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae4c) {
            ctx->pc = 0x24AE60u;
            goto label_24ae60;
        }
    }
    ctx->pc = 0x24AE54u;
    // 0x24ae54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ae54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24AE58u;
    {
        const bool branch_taken_0x24ae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ae58) {
            ctx->pc = 0x24AEA8u;
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AE60u;
label_24ae60:
    // 0x24ae60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24ae64:
    // 0x24ae64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae68: 0xc042214  jal         func_108850
    ctx->pc = 0x24AE68u;
    SET_GPR_U32(ctx, 31, 0x24AE70u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24AE68u, 0x24AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE70u;
label_24ae70:
    // 0x24ae70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24ae70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae74: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x24ae74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24ae78: 0x1460fe14  bnez        $v1, . + 4 + (-0x1EC << 2)
    ctx->pc = 0x24AE78u;
    {
        const bool branch_taken_0x24ae78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae78) {
            ctx->pc = 0x24A6CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a6cc;
        }
    }
    ctx->pc = 0x24AE80u;
    // 0x24ae80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24ae84:
    // 0x24ae84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae88: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24AE88u;
    SET_GPR_U32(ctx, 31, 0x24AE90u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24AE88u, 0x24AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE90u;
label_24ae90:
    // 0x24ae90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24ae90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae94: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x24ae94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24ae98: 0x1460fe09  bnez        $v1, . + 4 + (-0x1F7 << 2)
    ctx->pc = 0x24AE98u;
    {
        const bool branch_taken_0x24ae98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae98) {
            ctx->pc = 0x24A6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a6c0;
        }
    }
    ctx->pc = 0x24AEA0u;
    // 0x24aea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aea4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24aea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24aea8:
    // 0x24aea8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24aea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24aeac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24aeacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24aeb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24aeb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24aeb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24aeb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24aeb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24aeb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24aebc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24aebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24aec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24aec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24aec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24aec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24aec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24aec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24aecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24aeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aed0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x24aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x24AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AEDCu;
    // 0x24aedc: 0x0  nop
    ctx->pc = 0x24aedcu;
    // NOP
    ctx->pc = 0x24aee0u;
}
