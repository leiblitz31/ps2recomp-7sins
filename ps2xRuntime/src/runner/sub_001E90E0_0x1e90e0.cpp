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

// Function: sub_001E90E0
// Address: 0x1e90e0 - 0x1e9310
void sub_001E90E0_0x1e90e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E90E0_0x1e90e0");
#endif

    switch (ctx->pc) {
        case 0x1e91e4u: goto label_1e91e4;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e92a0u: goto label_1e92a0;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92f4u: goto label_1e92f4;
        default: break;
    }

    ctx->pc = 0x1e90e0u;

    // 0x1e90e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e90e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e90e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e90e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e90ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e90f0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e90f4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e90f8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e90fc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1e90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1e9100: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9104: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1E9104u;
    {
        const bool branch_taken_0x1e9104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9104) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E910Cu;
    // 0x1e910c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9110: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9114: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9118: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e911c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1e911cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9124: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1e9124u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1e9128: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9128u;
    {
        const bool branch_taken_0x1e9128 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e9128) {
            ctx->pc = 0x1E9138u;
            goto label_1e9138;
        }
    }
    ctx->pc = 0x1E9130u;
    // 0x1e9130: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1e9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1e9134: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1e9134u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1e9138:
    // 0x1e9138: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e913c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e913cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9140: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1E9140u;
    {
        const bool branch_taken_0x1e9140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9140) {
            ctx->pc = 0x1E92D0u;
            goto label_1e92d0;
        }
    }
    ctx->pc = 0x1E9148u;
    // 0x1e9148: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e914c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e9150: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1e9150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9154: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x1e9154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e9158: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1e9158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e915c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e915cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e9160: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1e9160u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e9164: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x1e9164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e9168: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1e9168u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e916c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e9170: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9174: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9178: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e917c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e917cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9180: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e9180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9184: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e9188: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9188u;
    {
        const bool branch_taken_0x1e9188 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e9188) {
            ctx->pc = 0x1E9198u;
            goto label_1e9198;
        }
    }
    ctx->pc = 0x1E9190u;
    // 0x1e9190: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e9194: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1e9194u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1e9198:
    // 0x1e9198: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e919c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1e919cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e91a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e91a4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1e91a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e91a8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E91A8u;
    {
        const bool branch_taken_0x1e91a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e91a8) {
            ctx->pc = 0x1E9248u;
            goto label_1e9248;
        }
    }
    ctx->pc = 0x1E91B0u;
    // 0x1e91b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e91b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e91b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e91bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e91c0: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1e91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e91c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e91c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e91cc: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e91ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e91d0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e91d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e91d4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e91d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e91d8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e91d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e91dc: 0xc07a5cc  jal         func_1E9730
    ctx->pc = 0x1E91DCu;
    SET_GPR_U32(ctx, 31, 0x1E91E4u);
    ctx->pc = 0x1E9730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9730u, 0x1E91DCu, 0x1E91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91E4u;
label_1e91e4:
    // 0x1e91e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e91e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e91ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e91f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e91f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e91f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e91fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9204: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9208: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e9208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e920c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9214: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e9214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e9218: 0xc07a598  jal         func_1E9660
    ctx->pc = 0x1E9218u;
    SET_GPR_U32(ctx, 31, 0x1E9220u);
    ctx->pc = 0x1E9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9660u, 0x1E9218u, 0x1E9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9220u;
label_1e9220:
    // 0x1e9220: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9228: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e922c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9230: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9234: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e9238: 0xc07a580  jal         func_1E9600
    ctx->pc = 0x1E9238u;
    SET_GPR_U32(ctx, 31, 0x1E9240u);
    ctx->pc = 0x1E9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9600u, 0x1E9238u, 0x1E9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9240u;
label_1e9240:
    // 0x1e9240: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E9240u;
    {
        const bool branch_taken_0x1e9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9240) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E9248u;
label_1e9248:
    // 0x1e9248: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e9248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e924c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9250: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e9254: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e9258: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e925c: 0xc07a570  jal         func_1E95C0
    ctx->pc = 0x1E925Cu;
    SET_GPR_U32(ctx, 31, 0x1E9264u);
    ctx->pc = 0x1E95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95C0u, 0x1E925Cu, 0x1E9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9264u;
label_1e9264:
    // 0x1e9264: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9268: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e926c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9270: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9274: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e9278: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e927c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e927cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e9280: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9284: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e9284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9288: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e928c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9290: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9294: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e9294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9298: 0xc07a5cc  jal         func_1E9730
    ctx->pc = 0x1E9298u;
    SET_GPR_U32(ctx, 31, 0x1E92A0u);
    ctx->pc = 0x1E9730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9730u, 0x1E9298u, 0x1E92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92A0u;
label_1e92a0:
    // 0x1e92a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e92a4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e92a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e92ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e92acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e92b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e92b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e92b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e92b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e92b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92bc: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1e92bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e92c0: 0xc07a580  jal         func_1E9600
    ctx->pc = 0x1E92C0u;
    SET_GPR_U32(ctx, 31, 0x1E92C8u);
    ctx->pc = 0x1E9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9600u, 0x1E92C0u, 0x1E92C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92C8u;
label_1e92c8:
    // 0x1e92c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E92C8u;
    {
        const bool branch_taken_0x1e92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92c8) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x1e92d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e92d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e92d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e92dc: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1e92dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e92e0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1e92e4: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e92e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e92e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92ec: 0xc07a4c4  jal         func_1E9310
    ctx->pc = 0x1E92ECu;
    SET_GPR_U32(ctx, 31, 0x1E92F4u);
    ctx->pc = 0x1E9310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9310u, 0x1E92ECu, 0x1E92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92F4u;
label_1e92f4:
    // 0x1e92f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e92f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e92f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e92fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e92fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9300: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e9304: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E930Cu;
    // 0x1e930c: 0x0  nop
    ctx->pc = 0x1e930cu;
    // NOP
    ctx->pc = 0x1e9310u;
}
