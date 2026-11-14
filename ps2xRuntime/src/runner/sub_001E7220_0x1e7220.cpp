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

// Function: sub_001E7220
// Address: 0x1e7220 - 0x1e73e0
void sub_001E7220_0x1e7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7220_0x1e7220");
#endif

    switch (ctx->pc) {
        case 0x1e7258u: goto label_1e7258;
        case 0x1e7268u: goto label_1e7268;
        case 0x1e7294u: goto label_1e7294;
        case 0x1e72a4u: goto label_1e72a4;
        case 0x1e72d8u: goto label_1e72d8;
        case 0x1e730cu: goto label_1e730c;
        case 0x1e7324u: goto label_1e7324;
        case 0x1e7338u: goto label_1e7338;
        case 0x1e7368u: goto label_1e7368;
        case 0x1e7374u: goto label_1e7374;
        case 0x1e73a4u: goto label_1e73a4;
        default: break;
    }

    ctx->pc = 0x1e7220u;

    // 0x1e7220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e7228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e722c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7234: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e7234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e7238: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e7238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e723c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7240: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7244: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E7244u;
    {
        const bool branch_taken_0x1e7244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7244) {
            ctx->pc = 0x1E73BCu;
            goto label_1e73bc;
        }
    }
    ctx->pc = 0x1E724Cu;
    // 0x1e724c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7250: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1E7250u;
    SET_GPR_U32(ctx, 31, 0x1E7258u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1E7250u, 0x1E7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7258u;
label_1e7258:
    // 0x1e7258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e725c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7260: 0xc079d68  jal         func_1E75A0
    ctx->pc = 0x1E7260u;
    SET_GPR_U32(ctx, 31, 0x1E7268u);
    ctx->pc = 0x1E75A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E75A0u, 0x1E7260u, 0x1E7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7268u;
label_1e7268:
    // 0x1e7268: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1e7268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e726c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E726Cu;
    {
        const bool branch_taken_0x1e726c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e726c) {
            ctx->pc = 0x1E72CCu;
            goto label_1e72cc;
        }
    }
    ctx->pc = 0x1E7274u;
    // 0x1e7274: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7278: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e727c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7284: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e7284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7288: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e728c: 0xc079d4c  jal         func_1E7530
    ctx->pc = 0x1E728Cu;
    SET_GPR_U32(ctx, 31, 0x1E7294u);
    ctx->pc = 0x1E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7530u, 0x1E728Cu, 0x1E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7294u;
label_1e7294:
    // 0x1e7294: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e7294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7298: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e729c: 0xc069c88  jal         func_1A7220
    ctx->pc = 0x1E729Cu;
    SET_GPR_U32(ctx, 31, 0x1E72A4u);
    ctx->pc = 0x1A7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7220u, 0x1E729Cu, 0x1E72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72A4u;
label_1e72a4:
    // 0x1e72a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72a8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e72ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72b0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1e72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1e72b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e72b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e72bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72c0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e72c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e72c4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E72C4u;
    {
        const bool branch_taken_0x1e72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e72c4) {
            ctx->pc = 0x1E73A4u;
            goto label_1e73a4;
        }
    }
    ctx->pc = 0x1E72CCu;
label_1e72cc:
    // 0x1e72cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72d0: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1E72D0u;
    SET_GPR_U32(ctx, 31, 0x1E72D8u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1E72D0u, 0x1E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72D8u;
label_1e72d8:
    // 0x1e72d8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1e72d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e72dc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E72DCu;
    {
        const bool branch_taken_0x1e72dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e72dc) {
            ctx->pc = 0x1E732Cu;
            goto label_1e732c;
        }
    }
    ctx->pc = 0x1E72E4u;
    // 0x1e72e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e72e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e72ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72f0: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1e72f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e72f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e72f8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e72fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e72fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7300: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e7304: 0xc079d18  jal         func_1E7460
    ctx->pc = 0x1E7304u;
    SET_GPR_U32(ctx, 31, 0x1E730Cu);
    ctx->pc = 0x1E7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7460u, 0x1E7304u, 0x1E730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E730Cu;
label_1e730c:
    // 0x1e730c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e730cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7310: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7318: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e731c: 0xc058c9c  jal         func_163270
    ctx->pc = 0x1E731Cu;
    SET_GPR_U32(ctx, 31, 0x1E7324u);
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x1E731Cu, 0x1E7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7324u;
label_1e7324:
    // 0x1e7324: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E7324u;
    {
        const bool branch_taken_0x1e7324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7324) {
            ctx->pc = 0x1E73A4u;
            goto label_1e73a4;
        }
    }
    ctx->pc = 0x1E732Cu;
label_1e732c:
    // 0x1e732c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7330: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1E7330u;
    SET_GPR_U32(ctx, 31, 0x1E7338u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1E7330u, 0x1E7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7338u;
label_1e7338:
    // 0x1e7338: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1e7338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e733c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e7340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7344: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7348: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e7348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e734c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7350: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e7350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7358: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e7358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e735c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e735cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e7360: 0xc079d18  jal         func_1E7460
    ctx->pc = 0x1E7360u;
    SET_GPR_U32(ctx, 31, 0x1E7368u);
    ctx->pc = 0x1E7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7460u, 0x1E7360u, 0x1E7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7368u;
label_1e7368:
    // 0x1e7368: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e736c: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1E736Cu;
    SET_GPR_U32(ctx, 31, 0x1E7374u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1E736Cu, 0x1E7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7374u;
label_1e7374:
    // 0x1e7374: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1e7374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e7378: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e737c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7380: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7384: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7388: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e738c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e738cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7390: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e7390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7394: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7398: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e7398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e739c: 0xc079cf8  jal         func_1E73E0
    ctx->pc = 0x1E739Cu;
    SET_GPR_U32(ctx, 31, 0x1E73A4u);
    ctx->pc = 0x1E73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73E0u, 0x1E739Cu, 0x1E73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73A4u;
label_1e73a4:
    // 0x1e73a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e73a8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1e73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1e73ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e73b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e73b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e73b8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1e73bc:
    // 0x1e73bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e73c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e73c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e73c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e73c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e73c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e73c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e73cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e73ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e73d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e73d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73DCu;
    // 0x1e73dc: 0x0  nop
    ctx->pc = 0x1e73dcu;
    // NOP
    ctx->pc = 0x1e73e0u;
}
