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

// Function: sub_00177090
// Address: 0x177090 - 0x177740
void sub_00177090_0x177090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177090_0x177090");
#endif

    switch (ctx->pc) {
        case 0x1770d4u: goto label_1770d4;
        case 0x17710cu: goto label_17710c;
        case 0x17711cu: goto label_17711c;
        case 0x17712cu: goto label_17712c;
        case 0x1771a0u: goto label_1771a0;
        case 0x1771b8u: goto label_1771b8;
        case 0x1771c8u: goto label_1771c8;
        case 0x1771e4u: goto label_1771e4;
        case 0x1771f4u: goto label_1771f4;
        case 0x177204u: goto label_177204;
        case 0x177214u: goto label_177214;
        case 0x177224u: goto label_177224;
        case 0x177230u: goto label_177230;
        case 0x177244u: goto label_177244;
        case 0x177254u: goto label_177254;
        case 0x177274u: goto label_177274;
        case 0x17728cu: goto label_17728c;
        case 0x1772acu: goto label_1772ac;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772e4u: goto label_1772e4;
        case 0x177300u: goto label_177300;
        case 0x17731cu: goto label_17731c;
        case 0x177328u: goto label_177328;
        case 0x17734cu: goto label_17734c;
        case 0x177360u: goto label_177360;
        case 0x17737cu: goto label_17737c;
        case 0x177388u: goto label_177388;
        case 0x177398u: goto label_177398;
        case 0x1773acu: goto label_1773ac;
        case 0x1773c0u: goto label_1773c0;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773e0u: goto label_1773e0;
        case 0x1773f8u: goto label_1773f8;
        case 0x177414u: goto label_177414;
        case 0x177424u: goto label_177424;
        case 0x177448u: goto label_177448;
        case 0x177454u: goto label_177454;
        case 0x177468u: goto label_177468;
        case 0x177484u: goto label_177484;
        case 0x1774a0u: goto label_1774a0;
        case 0x1774c0u: goto label_1774c0;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774e8u: goto label_1774e8;
        case 0x177504u: goto label_177504;
        case 0x177520u: goto label_177520;
        case 0x17753cu: goto label_17753c;
        case 0x17754cu: goto label_17754c;
        case 0x177560u: goto label_177560;
        case 0x177574u: goto label_177574;
        case 0x17758cu: goto label_17758c;
        case 0x1775a8u: goto label_1775a8;
        case 0x1775b8u: goto label_1775b8;
        case 0x1775dcu: goto label_1775dc;
        case 0x1775e8u: goto label_1775e8;
        case 0x1775fcu: goto label_1775fc;
        case 0x177618u: goto label_177618;
        case 0x177634u: goto label_177634;
        case 0x177658u: goto label_177658;
        case 0x17766cu: goto label_17766c;
        case 0x177688u: goto label_177688;
        case 0x1776a4u: goto label_1776a4;
        case 0x1776c8u: goto label_1776c8;
        case 0x1776d8u: goto label_1776d8;
        case 0x1776e8u: goto label_1776e8;
        case 0x1776f8u: goto label_1776f8;
        case 0x17770cu: goto label_17770c;
        default: break;
    }

    ctx->pc = 0x177090u;

    // 0x177090: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x177094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x177098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17709c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1770a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1770a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1770a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1770a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1770a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1770a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1770ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1770acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1770b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1770b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1770b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1770b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1770b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1770b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1770bc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x1770bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x1770c0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1770c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1770c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1770cc: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1770CCu;
    SET_GPR_U32(ctx, 31, 0x1770D4u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1770CCu, 0x1770D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770D4u;
label_1770d4:
    // 0x1770d4: 0x1440018d  bnez        $v0, . + 4 + (0x18D << 2)
    ctx->pc = 0x1770D4u;
    {
        const bool branch_taken_0x1770d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1770d4) {
            ctx->pc = 0x17770Cu;
            goto label_17770c;
        }
    }
    ctx->pc = 0x1770DCu;
    // 0x1770dc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1770dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1770e0: 0xa0600050  sb          $zero, 0x50($v1)
    ctx->pc = 0x1770e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1770e4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1770e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1770e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1770ec: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x1770ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x1770f0: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1770f4: 0x10600185  beqz        $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x1770F4u;
    {
        const bool branch_taken_0x1770f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770f4) {
            ctx->pc = 0x17770Cu;
            goto label_17770c;
        }
    }
    ctx->pc = 0x1770FCu;
    // 0x1770fc: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x177100: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177104: 0xc085538  jal         func_2154E0
    ctx->pc = 0x177104u;
    SET_GPR_U32(ctx, 31, 0x17710Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x177104u, 0x17710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17710Cu;
label_17710c:
    // 0x17710c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x17710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x177110: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x177114: 0xc096880  jal         func_25A200
    ctx->pc = 0x177114u;
    SET_GPR_U32(ctx, 31, 0x17711Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x177114u, 0x17711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17711Cu;
label_17711c:
    // 0x17711c: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x17711cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x177120: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x177120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x177124: 0xc0968d0  jal         func_25A340
    ctx->pc = 0x177124u;
    SET_GPR_U32(ctx, 31, 0x17712Cu);
    ctx->pc = 0x25A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A340u, 0x177124u, 0x17712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17712Cu;
label_17712c:
    // 0x17712c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x17712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x177130: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x177130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x177134: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x177134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x177138: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177138u;
    {
        const bool branch_taken_0x177138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x177138) {
            ctx->pc = 0x177154u;
            goto label_177154;
        }
    }
    ctx->pc = 0x177140u;
    // 0x177140: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x177144: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177148: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x177148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x17714c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17714Cu;
    {
        const bool branch_taken_0x17714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17714c) {
            ctx->pc = 0x17717Cu;
            goto label_17717c;
        }
    }
    ctx->pc = 0x177154u;
label_177154:
    // 0x177154: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x177158: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177158u;
    {
        const bool branch_taken_0x177158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x177158) {
            ctx->pc = 0x177174u;
            goto label_177174;
        }
    }
    ctx->pc = 0x177160u;
    // 0x177160: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x177164: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177168: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x177168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x17716c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17716Cu;
    {
        const bool branch_taken_0x17716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17716c) {
            ctx->pc = 0x17717Cu;
            goto label_17717c;
        }
    }
    ctx->pc = 0x177174u;
label_177174:
    // 0x177174: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177178: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x177178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_17717c:
    // 0x17717c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x17717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177180: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x177180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x177184: 0x1002015e  beq         $zero, $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x177184u;
    {
        const bool branch_taken_0x177184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x177184) {
            ctx->pc = 0x177700u;
            goto label_177700;
        }
    }
    ctx->pc = 0x17718Cu;
    // 0x17718c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x17718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177190: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x177190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x177194: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177198: 0xc085538  jal         func_2154E0
    ctx->pc = 0x177198u;
    SET_GPR_U32(ctx, 31, 0x1771A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x177198u, 0x1771A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771A0u;
label_1771a0:
    // 0x1771a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1771a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771a4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1771a8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1771a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1771ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1771b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1771B0u;
    SET_GPR_U32(ctx, 31, 0x1771B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1771B0u, 0x1771B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771B8u;
label_1771b8:
    // 0x1771b8: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1771b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1771bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1771bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771c0: 0xc096950  jal         func_25A540
    ctx->pc = 0x1771C0u;
    SET_GPR_U32(ctx, 31, 0x1771C8u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x1771C0u, 0x1771C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771C8u;
label_1771c8:
    // 0x1771c8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1771cc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1771ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1771d0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1771d4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1771d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1771d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771dc: 0xc05db44  jal         func_176D10
    ctx->pc = 0x1771DCu;
    SET_GPR_U32(ctx, 31, 0x1771E4u);
    ctx->pc = 0x176D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D10u, 0x1771DCu, 0x1771E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771E4u;
label_1771e4:
    // 0x1771e4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1771e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1771e8: 0x278590c0  addiu       $a1, $gp, -0x6F40
    ctx->pc = 0x1771e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938816));
    // 0x1771ec: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1771ECu;
    SET_GPR_U32(ctx, 31, 0x1771F4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1771ECu, 0x1771F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771F4u;
label_1771f4:
    // 0x1771f4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1771f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1771f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1771f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771fc: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1771FCu;
    SET_GPR_U32(ctx, 31, 0x177204u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1771FCu, 0x177204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177204u;
label_177204:
    // 0x177204: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x177204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x177208: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x177208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17720c: 0xc059640  jal         func_165900
    ctx->pc = 0x17720Cu;
    SET_GPR_U32(ctx, 31, 0x177214u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x17720Cu, 0x177214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177214u;
label_177214:
    // 0x177214: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x177214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177218: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x177218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17721c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x17721Cu;
    SET_GPR_U32(ctx, 31, 0x177224u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x17721Cu, 0x177224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177224u;
label_177224:
    // 0x177224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177228: 0xc096960  jal         func_25A580
    ctx->pc = 0x177228u;
    SET_GPR_U32(ctx, 31, 0x177230u);
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x177228u, 0x177230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177230u;
label_177230:
    // 0x177230: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x177230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x177234: 0x278590c8  addiu       $a1, $gp, -0x6F38
    ctx->pc = 0x177234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938824));
    // 0x177238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17723c: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x17723Cu;
    SET_GPR_U32(ctx, 31, 0x177244u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x17723Cu, 0x177244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177244u;
label_177244:
    // 0x177244: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x177244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x177248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17724c: 0xc05d680  jal         func_175A00
    ctx->pc = 0x17724Cu;
    SET_GPR_U32(ctx, 31, 0x177254u);
    ctx->pc = 0x175A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A00u, 0x17724Cu, 0x177254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177254u;
label_177254:
    // 0x177254: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x177254u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177258: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x177258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17725c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17725cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x177260: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x177260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x177264: 0x27c5ffff  addiu       $a1, $fp, -0x1
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x177268: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x177268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x17726c: 0xc05e064  jal         func_178190
    ctx->pc = 0x17726Cu;
    SET_GPR_U32(ctx, 31, 0x177274u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x17726Cu, 0x177274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177274u;
label_177274:
    // 0x177274: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x177274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x177278: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x177278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17727c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x177280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177284: 0xc05d680  jal         func_175A00
    ctx->pc = 0x177284u;
    SET_GPR_U32(ctx, 31, 0x17728Cu);
    ctx->pc = 0x175A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A00u, 0x177284u, 0x17728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17728Cu;
label_17728c:
    // 0x17728c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x17728cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177290: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x177290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x177294: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x177294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x177298: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x177298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x17729c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x17729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1772a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1772a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772a4: 0xc05e064  jal         func_178190
    ctx->pc = 0x1772A4u;
    SET_GPR_U32(ctx, 31, 0x1772ACu);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x1772A4u, 0x1772ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772ACu;
label_1772ac:
    // 0x1772ac: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1772acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1772b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1772b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1772b4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1772b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1772b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1772bc: 0xc05d680  jal         func_175A00
    ctx->pc = 0x1772BCu;
    SET_GPR_U32(ctx, 31, 0x1772C4u);
    ctx->pc = 0x175A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A00u, 0x1772BCu, 0x1772C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772C4u;
label_1772c4:
    // 0x1772c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1772c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1772c8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1772c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1772cc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1772ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1772d0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1772d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1772d4: 0x27c50001  addiu       $a1, $fp, 0x1
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1772d8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1772d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1772dc: 0xc05e064  jal         func_178190
    ctx->pc = 0x1772DCu;
    SET_GPR_U32(ctx, 31, 0x1772E4u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x1772DCu, 0x1772E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772E4u;
label_1772e4:
    // 0x1772e4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1772e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1772e8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1772e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1772ec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1772ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1772f0: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1772f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1772f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1772F8u;
    SET_GPR_U32(ctx, 31, 0x177300u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1772F8u, 0x177300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177300u;
label_177300:
    // 0x177300: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177304: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177308: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17730c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x177310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177314: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x177314u;
    SET_GPR_U32(ctx, 31, 0x17731Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x177314u, 0x17731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17731Cu;
label_17731c:
    // 0x17731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177320: 0xc096958  jal         func_25A560
    ctx->pc = 0x177320u;
    SET_GPR_U32(ctx, 31, 0x177328u);
    ctx->pc = 0x25A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A560u, 0x177320u, 0x177328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177328u;
label_177328:
    // 0x177328: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x177328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x17732c: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x17732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x177330: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x177330u;
    {
        const bool branch_taken_0x177330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177330) {
            ctx->pc = 0x17737Cu;
            goto label_17737c;
        }
    }
    ctx->pc = 0x177338u;
    // 0x177338: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17733c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x177340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177344: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x177344u;
    SET_GPR_U32(ctx, 31, 0x17734Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x177344u, 0x17734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17734Cu;
label_17734c:
    // 0x17734c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177350: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x177350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x177354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177358: 0xc096958  jal         func_25A560
    ctx->pc = 0x177358u;
    SET_GPR_U32(ctx, 31, 0x177360u);
    ctx->pc = 0x25A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A560u, 0x177358u, 0x177360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177360u;
label_177360:
    // 0x177360: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177364: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x177364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x177368: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x177368u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17736c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17736cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177374: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x177374u;
    SET_GPR_U32(ctx, 31, 0x17737Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x177374u, 0x17737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17737Cu;
label_17737c:
    // 0x17737c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177380: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x177380u;
    SET_GPR_U32(ctx, 31, 0x177388u);
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x177380u, 0x177388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177388u;
label_177388:
    // 0x177388: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x177388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x17738c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x17738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x177390: 0xc05e04c  jal         func_178130
    ctx->pc = 0x177390u;
    SET_GPR_U32(ctx, 31, 0x177398u);
    ctx->pc = 0x178130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178130u, 0x177390u, 0x177398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177398u;
label_177398:
    // 0x177398: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x177398u;
    {
        const bool branch_taken_0x177398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177398) {
            ctx->pc = 0x1774C8u;
            goto label_1774c8;
        }
    }
    ctx->pc = 0x1773A0u;
    // 0x1773a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1773a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1773a4: 0xc05dfe0  jal         func_177F80
    ctx->pc = 0x1773A4u;
    SET_GPR_U32(ctx, 31, 0x1773ACu);
    ctx->pc = 0x177F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F80u, 0x1773A4u, 0x1773ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773ACu;
label_1773ac:
    // 0x1773ac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1773acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1773b0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1773b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1773b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1773b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773b8: 0xc05deec  jal         func_177BB0
    ctx->pc = 0x1773B8u;
    SET_GPR_U32(ctx, 31, 0x1773C0u);
    ctx->pc = 0x177BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177BB0u, 0x1773B8u, 0x1773C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773C0u;
label_1773c0:
    // 0x1773c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1773c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1773C4u;
    {
        const bool branch_taken_0x1773c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1773c4) {
            ctx->pc = 0x177418u;
            goto label_177418;
        }
    }
    ctx->pc = 0x1773CCu;
label_1773cc:
    // 0x1773cc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1773ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1773d0: 0x26450006  addiu       $a1, $s2, 0x6
    ctx->pc = 0x1773d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1773d4: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1773d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1773d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1773D8u;
    SET_GPR_U32(ctx, 31, 0x1773E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1773D8u, 0x1773E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773E0u;
label_1773e0:
    // 0x1773e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1773e4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1773e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1773e8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1773ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1773ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773f0: 0xc05ded4  jal         func_177B50
    ctx->pc = 0x1773F0u;
    SET_GPR_U32(ctx, 31, 0x1773F8u);
    ctx->pc = 0x177B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B50u, 0x1773F0u, 0x1773F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773F8u;
label_1773f8:
    // 0x1773f8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1773fc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x177400: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x177400u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x177404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177408: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17740c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17740Cu;
    SET_GPR_U32(ctx, 31, 0x177414u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17740Cu, 0x177414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177414u;
label_177414:
    // 0x177414: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_177418:
    // 0x177418: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17741c: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x17741Cu;
    SET_GPR_U32(ctx, 31, 0x177424u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x17741Cu, 0x177424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177424u;
label_177424:
    // 0x177424: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x177424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177428: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x177428u;
    {
        const bool branch_taken_0x177428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177428) {
            ctx->pc = 0x17743Cu;
            goto label_17743c;
        }
    }
    ctx->pc = 0x177430u;
    // 0x177430: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x177434: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x177434u;
    {
        const bool branch_taken_0x177434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177434) {
            ctx->pc = 0x1773CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1773cc;
        }
    }
    ctx->pc = 0x17743Cu;
label_17743c:
    // 0x17743c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x17743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x177440: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x177440u;
    SET_GPR_U32(ctx, 31, 0x177448u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x177440u, 0x177448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177448u;
label_177448:
    // 0x177448: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x177448u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17744c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17744Cu;
    {
        const bool branch_taken_0x17744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17744c) {
            ctx->pc = 0x1774A4u;
            goto label_1774a4;
        }
    }
    ctx->pc = 0x177454u;
label_177454:
    // 0x177454: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177458: 0x26e50006  addiu       $a1, $s7, 0x6
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
    // 0x17745c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x177460: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x177460u;
    SET_GPR_U32(ctx, 31, 0x177468u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x177460u, 0x177468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177468u;
label_177468:
    // 0x177468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17746c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x17746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x177470: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x177474: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x177474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x177478: 0x24a54c00  addiu       $a1, $a1, 0x4C00
    ctx->pc = 0x177478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19456));
    // 0x17747c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17747Cu;
    SET_GPR_U32(ctx, 31, 0x177484u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17747Cu, 0x177484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177484u;
label_177484:
    // 0x177484: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x177484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177488: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17748c: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x17748cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x177490: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177498: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x177498u;
    SET_GPR_U32(ctx, 31, 0x1774A0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x177498u, 0x1774A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774A0u;
label_1774a0:
    // 0x1774a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1774a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1774a4:
    // 0x1774a4: 0x2ee20008  sltiu       $v0, $s7, 0x8
    ctx->pc = 0x1774a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1774a8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1774A8u;
    {
        const bool branch_taken_0x1774a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1774a8) {
            ctx->pc = 0x177454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177454;
        }
    }
    ctx->pc = 0x1774B0u;
    // 0x1774b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1774b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1774b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1774b8: 0xc05de04  jal         func_177810
    ctx->pc = 0x1774B8u;
    SET_GPR_U32(ctx, 31, 0x1774C0u);
    ctx->pc = 0x177810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177810u, 0x1774B8u, 0x1774C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C0u;
label_1774c0:
    // 0x1774c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1774C0u;
    {
        const bool branch_taken_0x1774c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1774c0) {
            ctx->pc = 0x177530u;
            goto label_177530;
        }
    }
    ctx->pc = 0x1774C8u;
label_1774c8:
    // 0x1774c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1774c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1774CCu;
    {
        const bool branch_taken_0x1774cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1774cc) {
            ctx->pc = 0x177524u;
            goto label_177524;
        }
    }
    ctx->pc = 0x1774D4u;
label_1774d4:
    // 0x1774d4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1774d8: 0x26c50006  addiu       $a1, $s6, 0x6
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
    // 0x1774dc: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1774dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1774e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1774E0u;
    SET_GPR_U32(ctx, 31, 0x1774E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1774E0u, 0x1774E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774E8u;
label_1774e8:
    // 0x1774e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1774e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1774ec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1774ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1774f0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1774f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1774f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1774f8: 0x24a54c00  addiu       $a1, $a1, 0x4C00
    ctx->pc = 0x1774f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19456));
    // 0x1774fc: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1774FCu;
    SET_GPR_U32(ctx, 31, 0x177504u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1774FCu, 0x177504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177504u;
label_177504:
    // 0x177504: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177508: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x177508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17750c: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x17750cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x177510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177518: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x177518u;
    SET_GPR_U32(ctx, 31, 0x177520u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x177518u, 0x177520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177520u;
label_177520:
    // 0x177520: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x177520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_177524:
    // 0x177524: 0x2ec20008  sltiu       $v0, $s6, 0x8
    ctx->pc = 0x177524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x177528: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x177528u;
    {
        const bool branch_taken_0x177528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177528) {
            ctx->pc = 0x1774D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1774d4;
        }
    }
    ctx->pc = 0x177530u;
label_177530:
    // 0x177530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177534: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x177534u;
    SET_GPR_U32(ctx, 31, 0x17753Cu);
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x177534u, 0x17753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17753Cu;
label_17753c:
    // 0x17753c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17753cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177544: 0xc05ddf8  jal         func_1777E0
    ctx->pc = 0x177544u;
    SET_GPR_U32(ctx, 31, 0x17754Cu);
    ctx->pc = 0x1777E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1777E0u, 0x177544u, 0x17754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17754Cu;
label_17754c:
    // 0x17754c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17754Cu;
    {
        const bool branch_taken_0x17754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17754c) {
            ctx->pc = 0x17764Cu;
            goto label_17764c;
        }
    }
    ctx->pc = 0x177554u;
    // 0x177554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177558: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x177558u;
    {
        const bool branch_taken_0x177558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177558) {
            ctx->pc = 0x1775ACu;
            goto label_1775ac;
        }
    }
    ctx->pc = 0x177560u;
label_177560:
    // 0x177560: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177564: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x177564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x177568: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x17756c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17756Cu;
    SET_GPR_U32(ctx, 31, 0x177574u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17756Cu, 0x177574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x177574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177578: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x177578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x17757c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177584: 0xc05dde0  jal         func_177780
    ctx->pc = 0x177584u;
    SET_GPR_U32(ctx, 31, 0x17758Cu);
    ctx->pc = 0x177780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177780u, 0x177584u, 0x17758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17758Cu;
label_17758c:
    // 0x17758c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x17758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177590: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x177594: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x177594u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x177598: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17759c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775a0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1775A0u;
    SET_GPR_U32(ctx, 31, 0x1775A8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1775A0u, 0x1775A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775A8u;
label_1775a8:
    // 0x1775a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1775ac:
    // 0x1775ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775b0: 0xc05ddd0  jal         func_177740
    ctx->pc = 0x1775B0u;
    SET_GPR_U32(ctx, 31, 0x1775B8u);
    ctx->pc = 0x177740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177740u, 0x1775B0u, 0x1775B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775B8u;
label_1775b8:
    // 0x1775b8: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1775b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1775bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1775BCu;
    {
        const bool branch_taken_0x1775bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1775bc) {
            ctx->pc = 0x1775D0u;
            goto label_1775d0;
        }
    }
    ctx->pc = 0x1775C4u;
    // 0x1775c4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1775c8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1775C8u;
    {
        const bool branch_taken_0x1775c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1775c8) {
            ctx->pc = 0x177560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177560;
        }
    }
    ctx->pc = 0x1775D0u;
label_1775d0:
    // 0x1775d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775d4: 0xc05ddd0  jal         func_177740
    ctx->pc = 0x1775D4u;
    SET_GPR_U32(ctx, 31, 0x1775DCu);
    ctx->pc = 0x177740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177740u, 0x1775D4u, 0x1775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775DCu;
label_1775dc:
    // 0x1775dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1775dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1775E0u;
    {
        const bool branch_taken_0x1775e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1775e0) {
            ctx->pc = 0x177638u;
            goto label_177638;
        }
    }
    ctx->pc = 0x1775E8u;
label_1775e8:
    // 0x1775e8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1775e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1775ec: 0x26a5000e  addiu       $a1, $s5, 0xE
    ctx->pc = 0x1775ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14));
    // 0x1775f0: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1775f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1775f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1775F4u;
    SET_GPR_U32(ctx, 31, 0x1775FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1775F4u, 0x1775FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775FCu;
label_1775fc:
    // 0x1775fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1775fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177600: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x177600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x177604: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x177604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x177608: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x177608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17760c: 0x24a54c00  addiu       $a1, $a1, 0x4C00
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19456));
    // 0x177610: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x177610u;
    SET_GPR_U32(ctx, 31, 0x177618u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x177610u, 0x177618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177618u;
label_177618:
    // 0x177618: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17761c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x177620: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x177620u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x177624: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177628: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17762c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17762Cu;
    SET_GPR_U32(ctx, 31, 0x177634u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17762Cu, 0x177634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177634u;
label_177634:
    // 0x177634: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x177634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_177638:
    // 0x177638: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17763c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17763Cu;
    {
        const bool branch_taken_0x17763c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17763c) {
            ctx->pc = 0x1775E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1775e8;
        }
    }
    ctx->pc = 0x177644u;
    // 0x177644: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x177644u;
    {
        const bool branch_taken_0x177644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177644) {
            ctx->pc = 0x1776B4u;
            goto label_1776b4;
        }
    }
    ctx->pc = 0x17764Cu;
label_17764c:
    // 0x17764c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17764cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177650: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x177650u;
    {
        const bool branch_taken_0x177650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177650) {
            ctx->pc = 0x1776A8u;
            goto label_1776a8;
        }
    }
    ctx->pc = 0x177658u;
label_177658:
    // 0x177658: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x177658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17765c: 0x2685000e  addiu       $a1, $s4, 0xE
    ctx->pc = 0x17765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x177660: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x177660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x177664: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x177664u;
    SET_GPR_U32(ctx, 31, 0x17766Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x177664u, 0x17766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17766Cu;
label_17766c:
    // 0x17766c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177670: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x177670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x177674: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x177674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x177678: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x177678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17767c: 0x24a54c00  addiu       $a1, $a1, 0x4C00
    ctx->pc = 0x17767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19456));
    // 0x177680: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x177680u;
    SET_GPR_U32(ctx, 31, 0x177688u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x177680u, 0x177688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177688u;
label_177688:
    // 0x177688: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17768c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x177690: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x177690u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x177694: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17769c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17769Cu;
    SET_GPR_U32(ctx, 31, 0x1776A4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17769Cu, 0x1776A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776A4u;
label_1776a4:
    // 0x1776a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1776a8:
    // 0x1776a8: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x1776a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1776ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1776ACu;
    {
        const bool branch_taken_0x1776ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776ac) {
            ctx->pc = 0x177658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177658;
        }
    }
    ctx->pc = 0x1776B4u;
label_1776b4:
    // 0x1776b4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1776b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1776b8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1776b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1776bc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1776bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1776c0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1776C0u;
    SET_GPR_U32(ctx, 31, 0x1776C8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1776C0u, 0x1776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776C8u;
label_1776c8:
    // 0x1776c8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1776c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x1776cc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1776ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1776d0: 0xc05e118  jal         func_178460
    ctx->pc = 0x1776D0u;
    SET_GPR_U32(ctx, 31, 0x1776D8u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x1776D0u, 0x1776D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776D8u;
label_1776d8:
    // 0x1776d8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1776d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1776dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1776dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1776e0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1776E0u;
    SET_GPR_U32(ctx, 31, 0x1776E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1776E0u, 0x1776E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776E8u;
label_1776e8:
    // 0x1776e8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1776e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1776ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1776ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1776f0: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1776F0u;
    SET_GPR_U32(ctx, 31, 0x1776F8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1776F0u, 0x1776F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776F8u;
label_1776f8:
    // 0x1776f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1776F8u;
    {
        const bool branch_taken_0x1776f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1776f8) {
            ctx->pc = 0x17770Cu;
            goto label_17770c;
        }
    }
    ctx->pc = 0x177700u;
label_177700:
    // 0x177700: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x177704: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x177704u;
    SET_GPR_U32(ctx, 31, 0x17770Cu);
    ctx->pc = 0x178DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178DD0u, 0x177704u, 0x17770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17770Cu;
label_17770c:
    // 0x17770c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17770cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x177710: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177710u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177714: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177718: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17771c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17771cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17772c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17772cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177734: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x177738: 0x3e00008  jr          $ra
    ctx->pc = 0x177738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177740u;
}
