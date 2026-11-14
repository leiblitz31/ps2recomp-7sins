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

// Function: sub_0025C790
// Address: 0x25c790 - 0x25c9a0
void sub_0025C790_0x25c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C790_0x25c790");
#endif

    switch (ctx->pc) {
        case 0x25c878u: goto label_25c878;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c934u: goto label_25c934;
        case 0x25c95cu: goto label_25c95c;
        case 0x25c988u: goto label_25c988;
        default: break;
    }

    ctx->pc = 0x25c790u;

    // 0x25c790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25c794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25c798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c7a0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25c7a4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25c7a8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25c7ac: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x25c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x25c7b0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c7b4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x25C7B4u;
    {
        const bool branch_taken_0x25c7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7b4) {
            ctx->pc = 0x25C988u;
            goto label_25c988;
        }
    }
    ctx->pc = 0x25C7BCu;
    // 0x25c7bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c7c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25c7c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c7c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c7cc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x25c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c7d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25c7d4: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x25c7d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x25c7d8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C7D8u;
    {
        const bool branch_taken_0x25c7d8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x25c7d8) {
            ctx->pc = 0x25C7E8u;
            goto label_25c7e8;
        }
    }
    ctx->pc = 0x25C7E0u;
    // 0x25c7e0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x25c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x25c7e4: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x25c7e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_25c7e8:
    // 0x25c7e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c7ec: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x25c7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25c7f0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x25C7F0u;
    {
        const bool branch_taken_0x25c7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c7f0) {
            ctx->pc = 0x25C964u;
            goto label_25c964;
        }
    }
    ctx->pc = 0x25C7F8u;
    // 0x25c7f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x25c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c7fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c800: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x25c800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x25c804: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c808: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25c808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c80c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c810: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c814: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25c818: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x25c818u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25c81c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C81Cu;
    {
        const bool branch_taken_0x25c81c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25c81c) {
            ctx->pc = 0x25C82Cu;
            goto label_25c82c;
        }
    }
    ctx->pc = 0x25C824u;
    // 0x25c824: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25c824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25c828: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x25c828u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_25c82c:
    // 0x25c82c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c830: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x25c830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c834: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c838: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x25c838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x25c83c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x25C83Cu;
    {
        const bool branch_taken_0x25c83c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c83c) {
            ctx->pc = 0x25C8DCu;
            goto label_25c8dc;
        }
    }
    ctx->pc = 0x25C844u;
    // 0x25c844: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c848: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c84c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c854: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x25c854u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c858: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c85c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c860: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x25c860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c864: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25c868: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25c868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c86c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25c870: 0xc097380  jal         func_25CE00
    ctx->pc = 0x25C870u;
    SET_GPR_U32(ctx, 31, 0x25C878u);
    ctx->pc = 0x25CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE00u, 0x25C870u, 0x25C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C878u;
label_25c878:
    // 0x25c878: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c87c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c880: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c884: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25c888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c88c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x25c890: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c898: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25c89c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x25c89cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c8a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c8a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8a8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x25c8ac: 0xc097350  jal         func_25CD40
    ctx->pc = 0x25C8ACu;
    SET_GPR_U32(ctx, 31, 0x25C8B4u);
    ctx->pc = 0x25CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD40u, 0x25C8ACu, 0x25C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8B4u;
label_25c8b4:
    // 0x25c8b4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c8b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c8bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c8c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c8c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c8c8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x25c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25c8cc: 0xc09733c  jal         func_25CCF0
    ctx->pc = 0x25C8CCu;
    SET_GPR_U32(ctx, 31, 0x25C8D4u);
    ctx->pc = 0x25CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CCF0u, 0x25C8CCu, 0x25C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8D4u;
label_25c8d4:
    // 0x25c8d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25C8D4u;
    {
        const bool branch_taken_0x25c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c8d4) {
            ctx->pc = 0x25C988u;
            goto label_25c988;
        }
    }
    ctx->pc = 0x25C8DCu;
label_25c8dc:
    // 0x25c8dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c8e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c8e4: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c8e8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25c8ec: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x25c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25c8f0: 0xc09732c  jal         func_25CCB0
    ctx->pc = 0x25C8F0u;
    SET_GPR_U32(ctx, 31, 0x25C8F8u);
    ctx->pc = 0x25CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CCB0u, 0x25C8F0u, 0x25C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8F8u;
label_25c8f8:
    // 0x25c8f8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c8fc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c900: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25c900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c904: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c908: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25c90c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25c910: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25c910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25c914: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c918: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x25c918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c91c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c924: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c928: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c92c: 0xc097380  jal         func_25CE00
    ctx->pc = 0x25C92Cu;
    SET_GPR_U32(ctx, 31, 0x25C934u);
    ctx->pc = 0x25CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE00u, 0x25C92Cu, 0x25C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C934u;
label_25c934:
    // 0x25c934: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c938: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c93c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c944: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25c944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x25c948: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25c948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c94c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c950: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x25c950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25c954: 0xc09733c  jal         func_25CCF0
    ctx->pc = 0x25C954u;
    SET_GPR_U32(ctx, 31, 0x25C95Cu);
    ctx->pc = 0x25CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CCF0u, 0x25C954u, 0x25C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C95Cu;
label_25c95c:
    // 0x25c95c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C95Cu;
    {
        const bool branch_taken_0x25c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c95c) {
            ctx->pc = 0x25C988u;
            goto label_25c988;
        }
    }
    ctx->pc = 0x25C964u;
label_25c964:
    // 0x25c964: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x25c964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c968: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c96c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c970: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x25c970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c974: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x25c974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x25c978: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x25c978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c97c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c97cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c980: 0xc097268  jal         func_25C9A0
    ctx->pc = 0x25C980u;
    SET_GPR_U32(ctx, 31, 0x25C988u);
    ctx->pc = 0x25C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C9A0u, 0x25C980u, 0x25C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C988u;
label_25c988:
    // 0x25c988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c994: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x25c994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25c998: 0x3e00008  jr          $ra
    ctx->pc = 0x25C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C9A0u;
}
