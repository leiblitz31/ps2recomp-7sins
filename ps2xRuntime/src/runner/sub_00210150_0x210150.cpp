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

// Function: sub_00210150
// Address: 0x210150 - 0x210390
void sub_00210150_0x210150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210150_0x210150");
#endif

    switch (ctx->pc) {
        case 0x21023cu: goto label_21023c;
        case 0x210288u: goto label_210288;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102d4u: goto label_2102d4;
        case 0x210318u: goto label_210318;
        case 0x210348u: goto label_210348;
        case 0x210374u: goto label_210374;
        default: break;
    }

    ctx->pc = 0x210150u;

    // 0x210150: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x210154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21015c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210160: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x210160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x210164: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x210164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x210168: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x210168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x21016c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x21016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x210170: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x210170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210174: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x210174u;
    {
        const bool branch_taken_0x210174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210174) {
            ctx->pc = 0x210374u;
            goto label_210374;
        }
    }
    ctx->pc = 0x21017Cu;
    // 0x21017c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x21017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210180: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x210180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210184: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210188: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x210188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21018c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21018cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210190: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x210190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210194: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x210194u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x210198: 0x1812  mflo        $v1
    ctx->pc = 0x210198u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21019c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2101a0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2101a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2101a4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2101A4u;
    {
        const bool branch_taken_0x2101a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2101a4) {
            ctx->pc = 0x210350u;
            goto label_210350;
        }
    }
    ctx->pc = 0x2101ACu;
    // 0x2101ac: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2101acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2101b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2101b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2101b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2101b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2101b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2101bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2101bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2101c0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2101c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2101c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2101c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2101c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2101c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2101cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2101ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2101d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2101d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2101d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2101d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2101d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2101d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2101dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2101dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2101e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2101e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2101e4: 0x8812  mflo        $s1
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2101e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2101e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2101ec: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2101ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2101f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2101f4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2101f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2101f8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2101F8u;
    {
        const bool branch_taken_0x2101f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2101f8) {
            ctx->pc = 0x2102B8u;
            goto label_2102b8;
        }
    }
    ctx->pc = 0x210200u;
    // 0x210200: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210204: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x210204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210208: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x210208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21020c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x210210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210218: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x210218u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21021c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210220: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210224: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x210224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x210228: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x210228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21022c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x21022cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210230: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x210234: 0xc084200  jal         func_210800
    ctx->pc = 0x210234u;
    SET_GPR_U32(ctx, 31, 0x21023Cu);
    ctx->pc = 0x210800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210800u, 0x210234u, 0x21023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21023Cu;
label_21023c:
    // 0x21023c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x21023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210240: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210244: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x210248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21024c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210250: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x210254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210258: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x210258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21025c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210260: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x210264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210268: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21026c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x21026cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210270: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x210270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x210274: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x210274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21027c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x21027cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x210280: 0xc0841d0  jal         func_210740
    ctx->pc = 0x210280u;
    SET_GPR_U32(ctx, 31, 0x210288u);
    ctx->pc = 0x210740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210740u, 0x210280u, 0x210288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210288u;
label_210288:
    // 0x210288: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21028c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x210290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210294: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x210294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210298: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21029c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2102a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2102a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2102a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2102a8: 0xc0841b8  jal         func_2106E0
    ctx->pc = 0x2102A8u;
    SET_GPR_U32(ctx, 31, 0x2102B0u);
    ctx->pc = 0x2106E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2106E0u, 0x2102A8u, 0x2102B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102B0u;
label_2102b0:
    // 0x2102b0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x210374u;
            goto label_210374;
        }
    }
    ctx->pc = 0x2102B8u;
label_2102b8:
    // 0x2102b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2102bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2102bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2102c0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2102c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2102c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2102cc: 0xc0841a8  jal         func_2106A0
    ctx->pc = 0x2102CCu;
    SET_GPR_U32(ctx, 31, 0x2102D4u);
    ctx->pc = 0x2106A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2106A0u, 0x2102CCu, 0x2102D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102D4u;
label_2102d4:
    // 0x2102d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2102d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2102d8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2102dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2102e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2102e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2102e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2102e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2102e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2102ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2102ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2102f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2102f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2102f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2102f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2102fc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2102fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x210300: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x210300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210308: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21030c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x21030cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x210310: 0xc084200  jal         func_210800
    ctx->pc = 0x210310u;
    SET_GPR_U32(ctx, 31, 0x210318u);
    ctx->pc = 0x210800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210800u, 0x210310u, 0x210318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x210318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21031c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x210320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x210320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x210324: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x210324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210328: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x210328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21032c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210330: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x210330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x210334: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21033c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x21033cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x210340: 0xc0841b8  jal         func_2106E0
    ctx->pc = 0x210340u;
    SET_GPR_U32(ctx, 31, 0x210348u);
    ctx->pc = 0x2106E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2106E0u, 0x210340u, 0x210348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210348u;
label_210348:
    // 0x210348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x210348u;
    {
        const bool branch_taken_0x210348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210348) {
            ctx->pc = 0x210374u;
            goto label_210374;
        }
    }
    ctx->pc = 0x210350u;
label_210350:
    // 0x210350: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x210350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x210354: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210358: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x210358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21035c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x21035cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210360: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x210360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x210364: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210368: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x210368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21036c: 0xc0840e4  jal         func_210390
    ctx->pc = 0x21036Cu;
    SET_GPR_U32(ctx, 31, 0x210374u);
    ctx->pc = 0x210390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210390u, 0x21036Cu, 0x210374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210374u;
label_210374:
    // 0x210374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21037c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21037cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210380: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x210384: 0x3e00008  jr          $ra
    ctx->pc = 0x210384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21038Cu;
    // 0x21038c: 0x0  nop
    ctx->pc = 0x21038cu;
    // NOP
    ctx->pc = 0x210390u;
}
