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

// Function: sub_0024E070
// Address: 0x24e070 - 0x24e3f0
void sub_0024E070_0x24e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E070_0x24e070");
#endif

    switch (ctx->pc) {
        case 0x24e0acu: goto label_24e0ac;
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0e4u: goto label_24e0e4;
        case 0x24e140u: goto label_24e140;
        case 0x24e184u: goto label_24e184;
        case 0x24e194u: goto label_24e194;
        case 0x24e1e4u: goto label_24e1e4;
        case 0x24e23cu: goto label_24e23c;
        case 0x24e27cu: goto label_24e27c;
        case 0x24e2b4u: goto label_24e2b4;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e34cu: goto label_24e34c;
        case 0x24e394u: goto label_24e394;
        case 0x24e3a0u: goto label_24e3a0;
        default: break;
    }

    ctx->pc = 0x24e070u;

    // 0x24e070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24e074: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24e078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24e07c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24e080: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24e084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24e088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24e08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24e090: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x24e090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x24e094: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x24e094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x24e098: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e09c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24e0a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24e0a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24E0A4u;
    SET_GPR_U32(ctx, 31, 0x24E0ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24E0A4u, 0x24E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0ACu;
label_24e0ac:
    // 0x24e0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24e0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24e0b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0b8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24E0B8u;
    SET_GPR_U32(ctx, 31, 0x24E0C0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24E0B8u, 0x24E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0C0u;
label_24e0c0:
    // 0x24e0c0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x24e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e0c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e0c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24e0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24e0d0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24e0d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24e0d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0dc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24E0DCu;
    SET_GPR_U32(ctx, 31, 0x24E0E4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24E0DCu, 0x24E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0E4u;
label_24e0e4:
    // 0x24e0e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x24e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e0e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e0ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24e0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24e0f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x24e0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24e0f8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24e0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24e100: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24e100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24e104: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x24e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24e108: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x24e108u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24e10c: 0xa812  mflo        $s5
    ctx->pc = 0x24e10cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x24e110: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x24e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e114: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24e114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24e118: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24e118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24e11c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x24e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24e120: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x24e120u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24e124: 0xa012  mflo        $s4
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x24e128: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x24e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e12c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24e130: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24e130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e134: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24e134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e138: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24E138u;
    SET_GPR_U32(ctx, 31, 0x24E140u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24E138u, 0x24E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E140u;
label_24e140:
    // 0x24e140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e144: 0x1010009d  beq         $zero, $s0, . + 4 + (0x9D << 2)
    ctx->pc = 0x24E144u;
    {
        const bool branch_taken_0x24e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x24e144) {
            ctx->pc = 0x24E3BCu;
            goto label_24e3bc;
        }
    }
    ctx->pc = 0x24E14Cu;
    // 0x24e14c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e150: 0x1002009a  beq         $zero, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x24E150u;
    {
        const bool branch_taken_0x24e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e150) {
            ctx->pc = 0x24E3BCu;
            goto label_24e3bc;
        }
    }
    ctx->pc = 0x24E158u;
    // 0x24e158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e15c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e160: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24e160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24e164: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24e168: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x24e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x24e16c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x24E16Cu;
    {
        const bool branch_taken_0x24e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e16c) {
            ctx->pc = 0x24E388u;
            goto label_24e388;
        }
    }
    ctx->pc = 0x24E174u;
    // 0x24e174: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x24e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24e178: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24e17c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24E17Cu;
    SET_GPR_U32(ctx, 31, 0x24E184u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24E17Cu, 0x24E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E184u;
label_24e184:
    // 0x24e184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24e184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e18c: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24E18Cu;
    SET_GPR_U32(ctx, 31, 0x24E194u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24E18Cu, 0x24E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E194u;
label_24e194:
    // 0x24e194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e198: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24e19c: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x24e19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x24e1a0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x24e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x24e1a4: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x24E1A4u;
    {
        const bool branch_taken_0x24e1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e1a4) {
            ctx->pc = 0x24E340u;
            goto label_24e340;
        }
    }
    ctx->pc = 0x24E1ACu;
    // 0x24e1ac: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x24e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x24e1b0: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24E1B0u;
    {
        const bool branch_taken_0x24e1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e1b0) {
            ctx->pc = 0x24E2A8u;
            goto label_24e2a8;
        }
    }
    ctx->pc = 0x24E1B8u;
    // 0x24e1b8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x24e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x24e1bc: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x24E1BCu;
    {
        const bool branch_taken_0x24e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e1bc) {
            ctx->pc = 0x24E270u;
            goto label_24e270;
        }
    }
    ctx->pc = 0x24E1C4u;
    // 0x24e1c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24e1c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E1C8u;
    {
        const bool branch_taken_0x24e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e1c8) {
            ctx->pc = 0x24E1D8u;
            goto label_24e1d8;
        }
    }
    ctx->pc = 0x24E1D0u;
    // 0x24e1d0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24E1D0u;
    {
        const bool branch_taken_0x24e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e1d0) {
            ctx->pc = 0x24E370u;
            goto label_24e370;
        }
    }
    ctx->pc = 0x24E1D8u;
label_24e1d8:
    // 0x24e1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1dc: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x24E1DCu;
    SET_GPR_U32(ctx, 31, 0x24E1E4u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x24E1DCu, 0x24E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1E4u;
label_24e1e4:
    // 0x24e1e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E1E4u;
    {
        const bool branch_taken_0x24e1e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24e1e4) {
            ctx->pc = 0x24E200u;
            goto label_24e200;
        }
    }
    ctx->pc = 0x24E1ECu;
    // 0x24e1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1f0: 0x0  nop
    ctx->pc = 0x24e1f0u;
    // NOP
    // 0x24e1f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24e1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24e1f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24E1F8u;
    {
        const bool branch_taken_0x24e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e1f8) {
            ctx->pc = 0x24E21Cu;
            goto label_24e21c;
        }
    }
    ctx->pc = 0x24E200u;
label_24e200:
    // 0x24e200: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24e200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24e204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24e208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24e20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e210: 0x0  nop
    ctx->pc = 0x24e210u;
    // NOP
    // 0x24e214: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24e214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24e218: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24e218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24e21c:
    // 0x24e21c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e224: 0x0  nop
    ctx->pc = 0x24e224u;
    // NOP
    // 0x24e228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24e228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24e22c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x24e22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24e230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e234: 0xc094f24  jal         func_253C90
    ctx->pc = 0x24E234u;
    SET_GPR_U32(ctx, 31, 0x24E23Cu);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x24E234u, 0x24E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E23Cu;
label_24e23c:
    // 0x24e23c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e240: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e244: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24e244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e248: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e250: 0x0  nop
    ctx->pc = 0x24e250u;
    // NOP
    // 0x24e254: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x24e254u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x24e258: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24e258u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e25c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x24e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e260: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e264: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24e264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e268: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x24E268u;
    {
        const bool branch_taken_0x24e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e268) {
            ctx->pc = 0x24E370u;
            goto label_24e370;
        }
    }
    ctx->pc = 0x24E270u;
label_24e270:
    // 0x24e270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e274: 0xc094f24  jal         func_253C90
    ctx->pc = 0x24E274u;
    SET_GPR_U32(ctx, 31, 0x24E27Cu);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x24E274u, 0x24E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E27Cu;
label_24e27c:
    // 0x24e27c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e280: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e284: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24e284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e288: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x24e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e28c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e290: 0x0  nop
    ctx->pc = 0x24e290u;
    // NOP
    // 0x24e294: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x24e294u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x24e298: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x24e298u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e29c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24e29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e2a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x24E2A0u;
    {
        const bool branch_taken_0x24e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2a0) {
            ctx->pc = 0x24E370u;
            goto label_24e370;
        }
    }
    ctx->pc = 0x24E2A8u;
label_24e2a8:
    // 0x24e2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e2ac: 0xc042214  jal         func_108850
    ctx->pc = 0x24E2ACu;
    SET_GPR_U32(ctx, 31, 0x24E2B4u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x24E2ACu, 0x24E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2B4u;
label_24e2b4:
    // 0x24e2b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E2B4u;
    {
        const bool branch_taken_0x24e2b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24e2b4) {
            ctx->pc = 0x24E2D0u;
            goto label_24e2d0;
        }
    }
    ctx->pc = 0x24E2BCu;
    // 0x24e2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e2c0: 0x0  nop
    ctx->pc = 0x24e2c0u;
    // NOP
    // 0x24e2c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24e2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24e2c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24E2C8u;
    {
        const bool branch_taken_0x24e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2c8) {
            ctx->pc = 0x24E2ECu;
            goto label_24e2ec;
        }
    }
    ctx->pc = 0x24E2D0u;
label_24e2d0:
    // 0x24e2d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24e2d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e2d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24e2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24e2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e2e0: 0x0  nop
    ctx->pc = 0x24e2e0u;
    // NOP
    // 0x24e2e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24e2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24e2e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24e2e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24e2ec:
    // 0x24e2ec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e2f4: 0x0  nop
    ctx->pc = 0x24e2f4u;
    // NOP
    // 0x24e2f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24e2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24e2fc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x24e2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24e300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e304: 0xc094f24  jal         func_253C90
    ctx->pc = 0x24E304u;
    SET_GPR_U32(ctx, 31, 0x24E30Cu);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x24E304u, 0x24E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E30Cu;
label_24e30c:
    // 0x24e30c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x24e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e310: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e314: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e318: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e320: 0x0  nop
    ctx->pc = 0x24e320u;
    // NOP
    // 0x24e324: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x24e324u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x24e328: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24e328u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e32c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e330: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e334: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24E338u;
    {
        const bool branch_taken_0x24e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e338) {
            ctx->pc = 0x24E370u;
            goto label_24e370;
        }
    }
    ctx->pc = 0x24E340u;
label_24e340:
    // 0x24e340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e344: 0xc094f24  jal         func_253C90
    ctx->pc = 0x24E344u;
    SET_GPR_U32(ctx, 31, 0x24E34Cu);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x24E344u, 0x24E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E34Cu;
label_24e34c:
    // 0x24e34c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x24e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e350: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24e350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24e354: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24e354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e358: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x24e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e360: 0x0  nop
    ctx->pc = 0x24e360u;
    // NOP
    // 0x24e364: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x24e364u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x24e368: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x24e368u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e36c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24e36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_24e370:
    // 0x24e370: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x24e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x24e374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e378: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e380: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e384: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24e384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_24e388:
    // 0x24e388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e38c: 0xc094d24  jal         func_253490
    ctx->pc = 0x24E38Cu;
    SET_GPR_U32(ctx, 31, 0x24E394u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24E38Cu, 0x24E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E394u;
label_24e394:
    // 0x24e394: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24e398: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x24E398u;
    SET_GPR_U32(ctx, 31, 0x24E3A0u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x24E398u, 0x24E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3A0u;
label_24e3a0:
    // 0x24e3a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e3a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24e3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e3ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24e3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e3b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E3B4u;
    {
        const bool branch_taken_0x24e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e3b4) {
            ctx->pc = 0x24E3C0u;
            goto label_24e3c0;
        }
    }
    ctx->pc = 0x24E3BCu;
label_24e3bc:
    // 0x24e3bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24e3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e3c0:
    // 0x24e3c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24e3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e3c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24e3c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e3c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24e3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e3cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24e3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e3d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24e3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24e3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e3d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e3dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x24e3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3E8u;
    // 0x24e3e8: 0x0  nop
    ctx->pc = 0x24e3e8u;
    // NOP
    // 0x24e3ec: 0x0  nop
    ctx->pc = 0x24e3ecu;
    // NOP
    ctx->pc = 0x24e3f0u;
}
