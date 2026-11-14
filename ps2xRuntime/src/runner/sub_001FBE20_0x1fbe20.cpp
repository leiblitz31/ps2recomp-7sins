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

// Function: sub_001FBE20
// Address: 0x1fbe20 - 0x1fc010
void sub_001FBE20_0x1fbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE20_0x1fbe20");
#endif

    switch (ctx->pc) {
        case 0x1fbe6cu: goto label_1fbe6c;
        case 0x1fbe90u: goto label_1fbe90;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbfc0u: goto label_1fbfc0;
        default: break;
    }

    ctx->pc = 0x1fbe20u;

    // 0x1fbe20: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1fbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1fbe24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fbe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fbe28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fbe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fbe2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fbe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fbe30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fbe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fbe34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fbe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fbe38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fbe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fbe3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fbe40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fbe44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fbe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbe48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbe4c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1fbe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x1fbe50: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x1fbe50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbe54: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1fbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1fbe58: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1fbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1fbe5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fbe5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fbe60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe64: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1FBE64u;
    {
        const bool branch_taken_0x1fbe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbe64) {
            ctx->pc = 0x1FBF18u;
            goto label_1fbf18;
        }
    }
    ctx->pc = 0x1FBE6Cu;
label_1fbe6c:
    // 0x1fbe6c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x1fbe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1fbe70: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1fbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fbe74: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1fbe74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1fbe78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fbe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fbe7c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1fbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fbe80: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1fbe84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fbe84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe88: 0xc07f9a0  jal         func_1FE680
    ctx->pc = 0x1FBE88u;
    SET_GPR_U32(ctx, 31, 0x1FBE90u);
    ctx->pc = 0x1FE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE680u, 0x1FBE88u, 0x1FBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE90u;
label_1fbe90:
    // 0x1fbe90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fbe94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fbe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbe98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FBE98u;
    SET_GPR_U32(ctx, 31, 0x1FBEA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FBE98u, 0x1FBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEA0u;
label_1fbea0:
    // 0x1fbea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fbea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fbea4: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x1fbea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fbea8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBEA8u;
    {
        const bool branch_taken_0x1fbea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbea8) {
            ctx->pc = 0x1FBED0u;
            goto label_1fbed0;
        }
    }
    ctx->pc = 0x1FBEB0u;
    // 0x1fbeb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fbeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbeb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbeb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbebc: 0x8c63bf5c  lw          $v1, -0x40A4($v1)
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BF5Cu));
    // 0x1fbec0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fbec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbec4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBEC4u;
    {
        const bool branch_taken_0x1fbec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbec4) {
            ctx->pc = 0x1FBED0u;
            goto label_1fbed0;
        }
    }
    ctx->pc = 0x1FBECCu;
    // 0x1fbecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fbeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbed0:
    // 0x1fbed0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1fbed4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbed8: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fbedc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fbedcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbee0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FBEE0u;
    {
        const bool branch_taken_0x1fbee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbee0) {
            ctx->pc = 0x1FBF18u;
            goto label_1fbf18;
        }
    }
    ctx->pc = 0x1FBEE8u;
    // 0x1fbee8: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1fbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1fbeec: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1fbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1fbef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fbef4: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x1fbef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1fbef8: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1fbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1fbefc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbf00: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fbf04: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fbf04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbf08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBF08u;
    {
        const bool branch_taken_0x1fbf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf08) {
            ctx->pc = 0x1FBF18u;
            goto label_1fbf18;
        }
    }
    ctx->pc = 0x1FBF10u;
    // 0x1fbf10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbf14: 0xa3a3010f  sb          $v1, 0x10F($sp)
    ctx->pc = 0x1fbf14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 3));
label_1fbf18:
    // 0x1fbf18: 0x93a3010f  lbu         $v1, 0x10F($sp)
    ctx->pc = 0x1fbf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x1fbf1c: 0x1060ffd3  beqz        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1FBF1Cu;
    {
        const bool branch_taken_0x1fbf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf1c) {
            ctx->pc = 0x1FBE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbe6c;
        }
    }
    ctx->pc = 0x1FBF24u;
    // 0x1fbf24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fbf24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf28: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1FBF28u;
    {
        const bool branch_taken_0x1fbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf28) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF30u;
label_1fbf30:
    // 0x1fbf30: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FBF30u;
    SET_GPR_U32(ctx, 31, 0x1FBF38u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FBF30u, 0x1FBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF38u;
label_1fbf38:
    // 0x1fbf38: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbf3c: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fbf40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fbf40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fbf44: 0xf010  mfhi        $fp
    ctx->pc = 0x1fbf44u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x1fbf48: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FBF48u;
    SET_GPR_U32(ctx, 31, 0x1FBF50u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FBF48u, 0x1FBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF50u;
label_1fbf50:
    // 0x1fbf50: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbf54: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fbf58: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fbf58u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fbf5c: 0xb810  mfhi        $s7
    ctx->pc = 0x1fbf5cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x1fbf60: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FBF60u;
    SET_GPR_U32(ctx, 31, 0x1FBF68u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FBF60u, 0x1FBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF68u;
label_1fbf68:
    // 0x1fbf68: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbf6c: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fbf70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fbf70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fbf74: 0xb010  mfhi        $s6
    ctx->pc = 0x1fbf74u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x1fbf78: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FBF78u;
    SET_GPR_U32(ctx, 31, 0x1FBF80u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FBF78u, 0x1FBF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF80u;
label_1fbf80:
    // 0x1fbf80: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbf84: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fbf88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fbf88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fbf8c: 0xa810  mfhi        $s5
    ctx->pc = 0x1fbf8cu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x1fbf90: 0x13d6000c  beq         $fp, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1FBF90u;
    {
        const bool branch_taken_0x1fbf90 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 22));
        if (branch_taken_0x1fbf90) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF98u;
    // 0x1fbf98: 0x12f5000a  beq         $s7, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBF98u;
    {
        const bool branch_taken_0x1fbf98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 21));
        if (branch_taken_0x1fbf98) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBFA0u;
    // 0x1fbfa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fbfa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fbfa4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1fbfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fbfa8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fbfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1fbfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fbfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fbfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb8: 0xc07f078  jal         func_1FC1E0
    ctx->pc = 0x1FBFB8u;
    SET_GPR_U32(ctx, 31, 0x1FBFC0u);
    ctx->pc = 0x1FC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC1E0u, 0x1FBFB8u, 0x1FBFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFC0u;
label_1fbfc0:
    // 0x1fbfc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fbfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fbfc4:
    // 0x1fbfc4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fbfc8: 0x8c63bf5c  lw          $v1, -0x40A4($v1)
    ctx->pc = 0x1fbfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BF5Cu));
    // 0x1fbfcc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1fbfccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbfd0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1FBFD0u;
    {
        const bool branch_taken_0x1fbfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbfd0) {
            ctx->pc = 0x1FBF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbf30;
        }
    }
    ctx->pc = 0x1FBFD8u;
    // 0x1fbfd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fbfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fbfdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fbfdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbfe0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fbfe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fbfe4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fbfe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fbfe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fbfe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fbfec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fbfecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc000: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1fc000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1fc004: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC00Cu;
    // 0x1fc00c: 0x0  nop
    ctx->pc = 0x1fc00cu;
    // NOP
    ctx->pc = 0x1fc010u;
}
