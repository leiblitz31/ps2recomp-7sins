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

// Function: sub_00180210
// Address: 0x180210 - 0x1803f0
void sub_00180210_0x180210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180210_0x180210");
#endif

    switch (ctx->pc) {
        case 0x180248u: goto label_180248;
        case 0x180258u: goto label_180258;
        case 0x180284u: goto label_180284;
        case 0x180294u: goto label_180294;
        case 0x1802d0u: goto label_1802d0;
        case 0x180304u: goto label_180304;
        case 0x18031cu: goto label_18031c;
        case 0x180330u: goto label_180330;
        case 0x180368u: goto label_180368;
        case 0x180374u: goto label_180374;
        case 0x1803acu: goto label_1803ac;
        default: break;
    }

    ctx->pc = 0x180210u;

    // 0x180210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x180214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x180214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18021c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180224: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x180224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x180228: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x180228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18022c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180230: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180234: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x180234u;
    {
        const bool branch_taken_0x180234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180234) {
            ctx->pc = 0x1803CCu;
            goto label_1803cc;
        }
    }
    ctx->pc = 0x18023Cu;
    // 0x18023c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180240: 0xc060260  jal         func_180980
    ctx->pc = 0x180240u;
    SET_GPR_U32(ctx, 31, 0x180248u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x180240u, 0x180248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18024c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180250: 0xc060250  jal         func_180940
    ctx->pc = 0x180250u;
    SET_GPR_U32(ctx, 31, 0x180258u);
    ctx->pc = 0x180940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180940u, 0x180250u, 0x180258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180258u;
label_180258:
    // 0x180258: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x180258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18025c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x18025Cu;
    {
        const bool branch_taken_0x18025c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18025c) {
            ctx->pc = 0x1802C4u;
            goto label_1802c4;
        }
    }
    ctx->pc = 0x180264u;
    // 0x180264: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x180264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180268: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18026c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180274: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180278: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x180278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18027c: 0xc060234  jal         func_1808D0
    ctx->pc = 0x18027Cu;
    SET_GPR_U32(ctx, 31, 0x180284u);
    ctx->pc = 0x1808D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1808D0u, 0x18027Cu, 0x180284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180284u;
label_180284:
    // 0x180284: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x180284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180288: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18028c: 0xc060218  jal         func_180860
    ctx->pc = 0x18028Cu;
    SET_GPR_U32(ctx, 31, 0x180294u);
    ctx->pc = 0x180860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180860u, 0x18028Cu, 0x180294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180294u;
label_180294:
    // 0x180294: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180298: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x180298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x18029c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1802a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1802a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1802a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1802ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1802b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1802b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1802b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802b8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1802b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1802bc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1802BCu;
    {
        const bool branch_taken_0x1802bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802bc) {
            ctx->pc = 0x1803ACu;
            goto label_1803ac;
        }
    }
    ctx->pc = 0x1802C4u;
label_1802c4:
    // 0x1802c4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802c8: 0xc060260  jal         func_180980
    ctx->pc = 0x1802C8u;
    SET_GPR_U32(ctx, 31, 0x1802D0u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x1802C8u, 0x1802D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1802D0u;
label_1802d0:
    // 0x1802d0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1802d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1802d4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1802D4u;
    {
        const bool branch_taken_0x1802d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1802d4) {
            ctx->pc = 0x180324u;
            goto label_180324;
        }
    }
    ctx->pc = 0x1802DCu;
    // 0x1802dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1802e0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1802e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1802e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802e8: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1802e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1802ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1802ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1802f0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1802f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1802f8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1802fc: 0xc0601ac  jal         func_1806B0
    ctx->pc = 0x1802FCu;
    SET_GPR_U32(ctx, 31, 0x180304u);
    ctx->pc = 0x1806B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806B0u, 0x1802FCu, 0x180304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180304u;
label_180304:
    // 0x180304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180308: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18030c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180310: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180314: 0xc06016c  jal         func_1805B0
    ctx->pc = 0x180314u;
    SET_GPR_U32(ctx, 31, 0x18031Cu);
    ctx->pc = 0x1805B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805B0u, 0x180314u, 0x18031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18031Cu;
label_18031c:
    // 0x18031c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18031Cu;
    {
        const bool branch_taken_0x18031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18031c) {
            ctx->pc = 0x1803ACu;
            goto label_1803ac;
        }
    }
    ctx->pc = 0x180324u;
label_180324:
    // 0x180324: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180328: 0xc060260  jal         func_180980
    ctx->pc = 0x180328u;
    SET_GPR_U32(ctx, 31, 0x180330u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x180328u, 0x180330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180330u;
label_180330:
    // 0x180330: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x180330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180338: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x180338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18033c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180344: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180348: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x180348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18034c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180350: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x180350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x180354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180358: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18035c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x180360: 0xc0601ac  jal         func_1806B0
    ctx->pc = 0x180360u;
    SET_GPR_U32(ctx, 31, 0x180368u);
    ctx->pc = 0x1806B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806B0u, 0x180360u, 0x180368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180368u;
label_180368:
    // 0x180368: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18036c: 0xc060260  jal         func_180980
    ctx->pc = 0x18036Cu;
    SET_GPR_U32(ctx, 31, 0x180374u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x18036Cu, 0x180374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180374u;
label_180374:
    // 0x180374: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x180374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18037c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180380: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x180380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180388: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18038c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180390: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180394: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x180394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x180398: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x180398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18039c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x18039cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1803a0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1803a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1803a4: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x1803A4u;
    SET_GPR_U32(ctx, 31, 0x1803ACu);
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x1803A4u, 0x1803ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1803ACu;
label_1803ac:
    // 0x1803ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1803acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1803b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1803b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1803b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1803bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1803bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1803c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1803c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1803c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1803c8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1803c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1803cc:
    // 0x1803cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1803d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1803d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1803d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1803d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1803d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1803dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1803dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1803e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1803e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1803E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1803E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1803ECu;
    // 0x1803ec: 0x0  nop
    ctx->pc = 0x1803ecu;
    // NOP
    ctx->pc = 0x1803f0u;
}
