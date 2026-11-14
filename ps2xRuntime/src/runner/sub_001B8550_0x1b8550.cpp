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

// Function: sub_001B8550
// Address: 0x1b8550 - 0x1b8790
void sub_001B8550_0x1b8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8550_0x1b8550");
#endif

    switch (ctx->pc) {
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b8774u: goto label_1b8774;
        default: break;
    }

    ctx->pc = 0x1b8550u;

    // 0x1b8550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b8554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b8558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b855c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8560: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b8560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b8564: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b8564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b8568: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1b8568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1b856c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1b856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1b8570: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8574: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1B8574u;
    {
        const bool branch_taken_0x1b8574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8574) {
            ctx->pc = 0x1B8774u;
            goto label_1b8774;
        }
    }
    ctx->pc = 0x1B857Cu;
    // 0x1b857c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8580: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b8584: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8588: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b8588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b858c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8590: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b8594: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8594u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8598: 0x1812  mflo        $v1
    ctx->pc = 0x1b8598u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1b859c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b85a0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b85a4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1B85A4u;
    {
        const bool branch_taken_0x1b85a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b85a4) {
            ctx->pc = 0x1B8750u;
            goto label_1b8750;
        }
    }
    ctx->pc = 0x1B85ACu;
    // 0x1b85ac: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1b85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b85b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b85b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1b85b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b85b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b85bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b85c0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1b85c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b85c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b85c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b85c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b85c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b85cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b85d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b85d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b85d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b85dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b85e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b85e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b85e4: 0x8812  mflo        $s1
    ctx->pc = 0x1b85e4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1b85e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b85ec: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1b85ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b85f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b85f4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1b85f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b85f8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B85F8u;
    {
        const bool branch_taken_0x1b85f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b85f8) {
            ctx->pc = 0x1B86B8u;
            goto label_1b86b8;
        }
    }
    ctx->pc = 0x1B8600u;
    // 0x1b8600: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8604: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b8604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8608: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b860c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b8610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8618: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1b8618u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b861c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8620: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8624: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1b8624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8628: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1b8628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b862c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b862cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8630: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1b8630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b8634: 0xc06e300  jal         func_1B8C00
    ctx->pc = 0x1B8634u;
    SET_GPR_U32(ctx, 31, 0x1B863Cu);
    ctx->pc = 0x1B8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C00u, 0x1B8634u, 0x1B863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B863Cu;
label_1b863c:
    // 0x1b863c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8640: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b8640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8644: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b8644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b8648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b864c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8650: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b8654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8658: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b8658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b865c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8660: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b8660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b8664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b866c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b8670: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1b8670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8674: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8678: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b867c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1b867cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b8680: 0xc06e2d0  jal         func_1B8B40
    ctx->pc = 0x1B8680u;
    SET_GPR_U32(ctx, 31, 0x1B8688u);
    ctx->pc = 0x1B8B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8B40u, 0x1B8680u, 0x1B8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8688u;
label_1b8688:
    // 0x1b8688: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b868c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b8690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8694: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8698: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b869c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b86a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b86a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1b86a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b86a8: 0xc06e2b8  jal         func_1B8AE0
    ctx->pc = 0x1B86A8u;
    SET_GPR_U32(ctx, 31, 0x1B86B0u);
    ctx->pc = 0x1B8AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8AE0u, 0x1B86A8u, 0x1B86B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86B0u;
label_1b86b0:
    // 0x1b86b0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B86B0u;
    {
        const bool branch_taken_0x1b86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86b0) {
            ctx->pc = 0x1B8774u;
            goto label_1b8774;
        }
    }
    ctx->pc = 0x1B86B8u;
label_1b86b8:
    // 0x1b86b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b86bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b86c0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b86c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b86c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1b86c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b86cc: 0xc06e2a8  jal         func_1B8AA0
    ctx->pc = 0x1B86CCu;
    SET_GPR_U32(ctx, 31, 0x1B86D4u);
    ctx->pc = 0x1B8AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8AA0u, 0x1B86CCu, 0x1B86D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86D4u;
label_1b86d4:
    // 0x1b86d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b86d8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1b86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b86dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b86e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b86e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b86e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b86ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b86f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b86f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b86f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b86fc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1b86fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8700: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8708: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b8708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b870c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1b870cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b8710: 0xc06e300  jal         func_1B8C00
    ctx->pc = 0x1B8710u;
    SET_GPR_U32(ctx, 31, 0x1B8718u);
    ctx->pc = 0x1B8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C00u, 0x1B8710u, 0x1B8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8718u;
label_1b8718:
    // 0x1b8718: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b8718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b871c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1b8720: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b8724: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8728: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b872c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8730: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b8730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b8734: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b873c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b8740: 0xc06e2b8  jal         func_1B8AE0
    ctx->pc = 0x1B8740u;
    SET_GPR_U32(ctx, 31, 0x1B8748u);
    ctx->pc = 0x1B8AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8AE0u, 0x1B8740u, 0x1B8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8748u;
label_1b8748:
    // 0x1b8748: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B8748u;
    {
        const bool branch_taken_0x1b8748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8748) {
            ctx->pc = 0x1B8774u;
            goto label_1b8774;
        }
    }
    ctx->pc = 0x1B8750u;
label_1b8750:
    // 0x1b8750: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1b8750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8754: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b8754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8758: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b875c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b875cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8760: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1b8760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b8764: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8768: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b876c: 0xc06e1e4  jal         func_1B8790
    ctx->pc = 0x1B876Cu;
    SET_GPR_U32(ctx, 31, 0x1B8774u);
    ctx->pc = 0x1B8790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8790u, 0x1B876Cu, 0x1B8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8774u;
label_1b8774:
    // 0x1b8774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b877c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b877cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8780: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b8780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8784: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B878Cu;
    // 0x1b878c: 0x0  nop
    ctx->pc = 0x1b878cu;
    // NOP
    ctx->pc = 0x1b8790u;
}
