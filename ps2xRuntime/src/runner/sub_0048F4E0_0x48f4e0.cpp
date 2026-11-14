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

// Function: sub_0048F4E0
// Address: 0x48f4e0 - 0x48f750
void sub_0048F4E0_0x48f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F4E0_0x48f4e0");
#endif

    switch (ctx->pc) {
        case 0x48f4e0u: goto label_48f4e0;
        case 0x48f4e4u: goto label_48f4e4;
        case 0x48f4e8u: goto label_48f4e8;
        case 0x48f4ecu: goto label_48f4ec;
        case 0x48f4f0u: goto label_48f4f0;
        case 0x48f4f4u: goto label_48f4f4;
        case 0x48f4f8u: goto label_48f4f8;
        case 0x48f4fcu: goto label_48f4fc;
        case 0x48f500u: goto label_48f500;
        case 0x48f504u: goto label_48f504;
        case 0x48f508u: goto label_48f508;
        case 0x48f50cu: goto label_48f50c;
        case 0x48f510u: goto label_48f510;
        case 0x48f514u: goto label_48f514;
        case 0x48f518u: goto label_48f518;
        case 0x48f51cu: goto label_48f51c;
        case 0x48f520u: goto label_48f520;
        case 0x48f524u: goto label_48f524;
        case 0x48f528u: goto label_48f528;
        case 0x48f52cu: goto label_48f52c;
        case 0x48f530u: goto label_48f530;
        case 0x48f534u: goto label_48f534;
        case 0x48f538u: goto label_48f538;
        case 0x48f53cu: goto label_48f53c;
        case 0x48f540u: goto label_48f540;
        case 0x48f544u: goto label_48f544;
        case 0x48f548u: goto label_48f548;
        case 0x48f54cu: goto label_48f54c;
        case 0x48f550u: goto label_48f550;
        case 0x48f554u: goto label_48f554;
        case 0x48f558u: goto label_48f558;
        case 0x48f55cu: goto label_48f55c;
        case 0x48f560u: goto label_48f560;
        case 0x48f564u: goto label_48f564;
        case 0x48f568u: goto label_48f568;
        case 0x48f56cu: goto label_48f56c;
        case 0x48f570u: goto label_48f570;
        case 0x48f574u: goto label_48f574;
        case 0x48f578u: goto label_48f578;
        case 0x48f57cu: goto label_48f57c;
        case 0x48f580u: goto label_48f580;
        case 0x48f584u: goto label_48f584;
        case 0x48f588u: goto label_48f588;
        case 0x48f58cu: goto label_48f58c;
        case 0x48f590u: goto label_48f590;
        case 0x48f594u: goto label_48f594;
        case 0x48f598u: goto label_48f598;
        case 0x48f59cu: goto label_48f59c;
        case 0x48f5a0u: goto label_48f5a0;
        case 0x48f5a4u: goto label_48f5a4;
        case 0x48f5a8u: goto label_48f5a8;
        case 0x48f5acu: goto label_48f5ac;
        case 0x48f5b0u: goto label_48f5b0;
        case 0x48f5b4u: goto label_48f5b4;
        case 0x48f5b8u: goto label_48f5b8;
        case 0x48f5bcu: goto label_48f5bc;
        case 0x48f5c0u: goto label_48f5c0;
        case 0x48f5c4u: goto label_48f5c4;
        case 0x48f5c8u: goto label_48f5c8;
        case 0x48f5ccu: goto label_48f5cc;
        case 0x48f5d0u: goto label_48f5d0;
        case 0x48f5d4u: goto label_48f5d4;
        case 0x48f5d8u: goto label_48f5d8;
        case 0x48f5dcu: goto label_48f5dc;
        case 0x48f5e0u: goto label_48f5e0;
        case 0x48f5e4u: goto label_48f5e4;
        case 0x48f5e8u: goto label_48f5e8;
        case 0x48f5ecu: goto label_48f5ec;
        case 0x48f5f0u: goto label_48f5f0;
        case 0x48f5f4u: goto label_48f5f4;
        case 0x48f5f8u: goto label_48f5f8;
        case 0x48f5fcu: goto label_48f5fc;
        case 0x48f600u: goto label_48f600;
        case 0x48f604u: goto label_48f604;
        case 0x48f608u: goto label_48f608;
        case 0x48f60cu: goto label_48f60c;
        case 0x48f610u: goto label_48f610;
        case 0x48f614u: goto label_48f614;
        case 0x48f618u: goto label_48f618;
        case 0x48f61cu: goto label_48f61c;
        case 0x48f620u: goto label_48f620;
        case 0x48f624u: goto label_48f624;
        case 0x48f628u: goto label_48f628;
        case 0x48f62cu: goto label_48f62c;
        case 0x48f630u: goto label_48f630;
        case 0x48f634u: goto label_48f634;
        case 0x48f638u: goto label_48f638;
        case 0x48f63cu: goto label_48f63c;
        case 0x48f640u: goto label_48f640;
        case 0x48f644u: goto label_48f644;
        case 0x48f648u: goto label_48f648;
        case 0x48f64cu: goto label_48f64c;
        case 0x48f650u: goto label_48f650;
        case 0x48f654u: goto label_48f654;
        case 0x48f658u: goto label_48f658;
        case 0x48f65cu: goto label_48f65c;
        case 0x48f660u: goto label_48f660;
        case 0x48f664u: goto label_48f664;
        case 0x48f668u: goto label_48f668;
        case 0x48f66cu: goto label_48f66c;
        case 0x48f670u: goto label_48f670;
        case 0x48f674u: goto label_48f674;
        case 0x48f678u: goto label_48f678;
        case 0x48f67cu: goto label_48f67c;
        case 0x48f680u: goto label_48f680;
        case 0x48f684u: goto label_48f684;
        case 0x48f688u: goto label_48f688;
        case 0x48f68cu: goto label_48f68c;
        case 0x48f690u: goto label_48f690;
        case 0x48f694u: goto label_48f694;
        case 0x48f698u: goto label_48f698;
        case 0x48f69cu: goto label_48f69c;
        case 0x48f6a0u: goto label_48f6a0;
        case 0x48f6a4u: goto label_48f6a4;
        case 0x48f6a8u: goto label_48f6a8;
        case 0x48f6acu: goto label_48f6ac;
        case 0x48f6b0u: goto label_48f6b0;
        case 0x48f6b4u: goto label_48f6b4;
        case 0x48f6b8u: goto label_48f6b8;
        case 0x48f6bcu: goto label_48f6bc;
        case 0x48f6c0u: goto label_48f6c0;
        case 0x48f6c4u: goto label_48f6c4;
        case 0x48f6c8u: goto label_48f6c8;
        case 0x48f6ccu: goto label_48f6cc;
        case 0x48f6d0u: goto label_48f6d0;
        case 0x48f6d4u: goto label_48f6d4;
        case 0x48f6d8u: goto label_48f6d8;
        case 0x48f6dcu: goto label_48f6dc;
        case 0x48f6e0u: goto label_48f6e0;
        case 0x48f6e4u: goto label_48f6e4;
        case 0x48f6e8u: goto label_48f6e8;
        case 0x48f6ecu: goto label_48f6ec;
        case 0x48f6f0u: goto label_48f6f0;
        case 0x48f6f4u: goto label_48f6f4;
        case 0x48f6f8u: goto label_48f6f8;
        case 0x48f6fcu: goto label_48f6fc;
        case 0x48f700u: goto label_48f700;
        case 0x48f704u: goto label_48f704;
        case 0x48f708u: goto label_48f708;
        case 0x48f70cu: goto label_48f70c;
        case 0x48f710u: goto label_48f710;
        case 0x48f714u: goto label_48f714;
        case 0x48f718u: goto label_48f718;
        case 0x48f71cu: goto label_48f71c;
        case 0x48f720u: goto label_48f720;
        case 0x48f724u: goto label_48f724;
        case 0x48f728u: goto label_48f728;
        case 0x48f72cu: goto label_48f72c;
        case 0x48f730u: goto label_48f730;
        case 0x48f734u: goto label_48f734;
        case 0x48f738u: goto label_48f738;
        case 0x48f73cu: goto label_48f73c;
        case 0x48f740u: goto label_48f740;
        case 0x48f744u: goto label_48f744;
        case 0x48f748u: goto label_48f748;
        case 0x48f74cu: goto label_48f74c;
        default: break;
    }

    ctx->pc = 0x48f4e0u;

label_48f4e0:
    // 0x48f4e0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x48f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_48f4e4:
    // 0x48f4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48f4e8:
    // 0x48f4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48f4ec:
    // 0x48f4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48f4f0:
    // 0x48f4f0: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x48f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
label_48f4f4:
    // 0x48f4f4: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x48f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_48f4f8:
    // 0x48f4f8: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x48f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
label_48f4fc:
    // 0x48f4fc: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x48f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48f500:
    // 0x48f500: 0xc041874  jal         func_1061D0
label_48f504:
    if (ctx->pc == 0x48F504u) {
        ctx->pc = 0x48F508u;
        goto label_48f508;
    }
    ctx->pc = 0x48F500u;
    SET_GPR_U32(ctx, 31, 0x48F508u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48F500u, 0x48F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F508u;
label_48f508:
    // 0x48f508: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_48f50c:
    if (ctx->pc == 0x48F50Cu) {
        ctx->pc = 0x48F510u;
        goto label_48f510;
    }
    ctx->pc = 0x48F508u;
    {
        const bool branch_taken_0x48f508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f508) {
            ctx->pc = 0x48F588u;
            goto label_48f588;
        }
    }
    ctx->pc = 0x48F510u;
label_48f510:
    // 0x48f510: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x48f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48f514:
    // 0x48f514: 0xc041874  jal         func_1061D0
label_48f518:
    if (ctx->pc == 0x48F518u) {
        ctx->pc = 0x48F51Cu;
        goto label_48f51c;
    }
    ctx->pc = 0x48F514u;
    SET_GPR_U32(ctx, 31, 0x48F51Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48F514u, 0x48F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F51Cu;
label_48f51c:
    // 0x48f51c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x48f51cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_48f520:
    // 0x48f520: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_48f524:
    if (ctx->pc == 0x48F524u) {
        ctx->pc = 0x48F528u;
        goto label_48f528;
    }
    ctx->pc = 0x48F520u;
    {
        const bool branch_taken_0x48f520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f520) {
            ctx->pc = 0x48F588u;
            goto label_48f588;
        }
    }
    ctx->pc = 0x48F528u;
label_48f528:
    // 0x48f528: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48f52c:
    // 0x48f52c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_48f530:
    if (ctx->pc == 0x48F530u) {
        ctx->pc = 0x48F534u;
        goto label_48f534;
    }
    ctx->pc = 0x48F52Cu;
    {
        const bool branch_taken_0x48f52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f52c) {
            ctx->pc = 0x48F588u;
            goto label_48f588;
        }
    }
    ctx->pc = 0x48F534u;
label_48f534:
    // 0x48f534: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x48f534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48f538:
    // 0x48f538: 0xc041b38  jal         func_106CE0
label_48f53c:
    if (ctx->pc == 0x48F53Cu) {
        ctx->pc = 0x48F540u;
        goto label_48f540;
    }
    ctx->pc = 0x48F538u;
    SET_GPR_U32(ctx, 31, 0x48F540u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48F538u, 0x48F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F540u;
label_48f540:
    // 0x48f540: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x48f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_48f544:
    // 0x48f544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48f544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48f548:
    // 0x48f548: 0xc040304  jal         func_100C10
label_48f54c:
    if (ctx->pc == 0x48F54Cu) {
        ctx->pc = 0x48F550u;
        goto label_48f550;
    }
    ctx->pc = 0x48F548u;
    SET_GPR_U32(ctx, 31, 0x48F550u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x48F548u, 0x48F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F550u;
label_48f550:
    // 0x48f550: 0x8fb102c0  lw          $s1, 0x2C0($sp)
    ctx->pc = 0x48f550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48f554:
    // 0x48f554: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x48f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_48f558:
    // 0x48f558: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x48f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48f55c:
    // 0x48f55c: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x48f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_48f560:
    // 0x48f560: 0xc123dd4  jal         func_48F750
label_48f564:
    if (ctx->pc == 0x48F564u) {
        ctx->pc = 0x48F568u;
        goto label_48f568;
    }
    ctx->pc = 0x48F560u;
    SET_GPR_U32(ctx, 31, 0x48F568u);
    ctx->pc = 0x48F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F750u, 0x48F560u, 0x48F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F568u;
label_48f568:
    // 0x48f568: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x48f568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_48f56c:
    // 0x48f56c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x48f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_48f570:
    // 0x48f570: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48f574:
    // 0x48f574: 0xc0402d4  jal         func_100B50
label_48f578:
    if (ctx->pc == 0x48F578u) {
        ctx->pc = 0x48F57Cu;
        goto label_48f57c;
    }
    ctx->pc = 0x48F574u;
    SET_GPR_U32(ctx, 31, 0x48F57Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48F574u, 0x48F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F57Cu;
label_48f57c:
    // 0x48f57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f580:
    // 0x48f580: 0x1000006d  b           . + 4 + (0x6D << 2)
label_48f584:
    if (ctx->pc == 0x48F584u) {
        ctx->pc = 0x48F588u;
        goto label_48f588;
    }
    ctx->pc = 0x48F580u;
    {
        const bool branch_taken_0x48f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f580) {
            ctx->pc = 0x48F738u;
            goto label_48f738;
        }
    }
    ctx->pc = 0x48F588u;
label_48f588:
    // 0x48f588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48f588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f58c:
    // 0x48f58c: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x48f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48f590:
    // 0x48f590: 0xc041874  jal         func_1061D0
label_48f594:
    if (ctx->pc == 0x48F594u) {
        ctx->pc = 0x48F598u;
        goto label_48f598;
    }
    ctx->pc = 0x48F590u;
    SET_GPR_U32(ctx, 31, 0x48F598u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48F590u, 0x48F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F598u;
label_48f598:
    // 0x48f598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48f598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48f59c:
    // 0x48f59c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48f5a0:
    // 0x48f5a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48f5a4:
    // 0x48f5a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_48f5a8:
    if (ctx->pc == 0x48F5A8u) {
        ctx->pc = 0x48F5ACu;
        goto label_48f5ac;
    }
    ctx->pc = 0x48F5A4u;
    {
        const bool branch_taken_0x48f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5a4) {
            ctx->pc = 0x48F5CCu;
            goto label_48f5cc;
        }
    }
    ctx->pc = 0x48F5ACu;
label_48f5ac:
    // 0x48f5ac: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x48f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48f5b0:
    // 0x48f5b0: 0xc041874  jal         func_1061D0
label_48f5b4:
    if (ctx->pc == 0x48F5B4u) {
        ctx->pc = 0x48F5B8u;
        goto label_48f5b8;
    }
    ctx->pc = 0x48F5B0u;
    SET_GPR_U32(ctx, 31, 0x48F5B8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48F5B0u, 0x48F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F5B8u;
label_48f5b8:
    // 0x48f5b8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x48f5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_48f5bc:
    // 0x48f5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48f5c0:
    if (ctx->pc == 0x48F5C0u) {
        ctx->pc = 0x48F5C4u;
        goto label_48f5c4;
    }
    ctx->pc = 0x48F5BCu;
    {
        const bool branch_taken_0x48f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5bc) {
            ctx->pc = 0x48F5CCu;
            goto label_48f5cc;
        }
    }
    ctx->pc = 0x48F5C4u;
label_48f5c4:
    // 0x48f5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f5c8:
    // 0x48f5c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x48f5c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48f5cc:
    // 0x48f5cc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x48f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_48f5d0:
    // 0x48f5d0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48f5d4:
    if (ctx->pc == 0x48F5D4u) {
        ctx->pc = 0x48F5D8u;
        goto label_48f5d8;
    }
    ctx->pc = 0x48F5D0u;
    {
        const bool branch_taken_0x48f5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f5d0) {
            ctx->pc = 0x48F680u;
            goto label_48f680;
        }
    }
    ctx->pc = 0x48F5D8u;
label_48f5d8:
    // 0x48f5d8: 0x8f82b6a0  lw          $v0, -0x4960($gp)
    ctx->pc = 0x48f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948512)));
label_48f5dc:
    // 0x48f5dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48f5e0:
    if (ctx->pc == 0x48F5E0u) {
        ctx->pc = 0x48F5E4u;
        goto label_48f5e4;
    }
    ctx->pc = 0x48F5DCu;
    {
        const bool branch_taken_0x48f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5dc) {
            ctx->pc = 0x48F680u;
            goto label_48f680;
        }
    }
    ctx->pc = 0x48F5E4u;
label_48f5e4:
    // 0x48f5e4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48f5e8:
    // 0x48f5e8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f5ec:
    // 0x48f5ec: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x48f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_48f5f0:
    // 0x48f5f0: 0xc115ee8  jal         func_457BA0
label_48f5f4:
    if (ctx->pc == 0x48F5F4u) {
        ctx->pc = 0x48F5F8u;
        goto label_48f5f8;
    }
    ctx->pc = 0x48F5F0u;
    SET_GPR_U32(ctx, 31, 0x48F5F8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48F5F0u, 0x48F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F5F8u;
label_48f5f8:
    // 0x48f5f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48f5fc:
    if (ctx->pc == 0x48F5FCu) {
        ctx->pc = 0x48F600u;
        goto label_48f600;
    }
    ctx->pc = 0x48F5F8u;
    {
        const bool branch_taken_0x48f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5f8) {
            ctx->pc = 0x48F680u;
            goto label_48f680;
        }
    }
    ctx->pc = 0x48F600u;
label_48f600:
    // 0x48f600: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x48f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_48f604:
    // 0x48f604: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48f608:
    if (ctx->pc == 0x48F608u) {
        ctx->pc = 0x48F60Cu;
        goto label_48f60c;
    }
    ctx->pc = 0x48F604u;
    {
        const bool branch_taken_0x48f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f604) {
            ctx->pc = 0x48F680u;
            goto label_48f680;
        }
    }
    ctx->pc = 0x48F60Cu;
label_48f60c:
    // 0x48f60c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48f610:
    // 0x48f610: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f614:
    // 0x48f614: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x48f614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_48f618:
    // 0x48f618: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48f618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48f61c:
    // 0x48f61c: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48f61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48f620:
    // 0x48f620: 0x24080119  addiu       $t0, $zero, 0x119
    ctx->pc = 0x48f620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
label_48f624:
    // 0x48f624: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48f624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48f628:
    // 0x48f628: 0x25294f10  addiu       $t1, $t1, 0x4F10
    ctx->pc = 0x48f628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20240));
label_48f62c:
    // 0x48f62c: 0xc113940  jal         func_44E500
label_48f630:
    if (ctx->pc == 0x48F630u) {
        ctx->pc = 0x48F634u;
        goto label_48f634;
    }
    ctx->pc = 0x48F62Cu;
    SET_GPR_U32(ctx, 31, 0x48F634u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48F62Cu, 0x48F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F634u;
label_48f634:
    // 0x48f634: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48f634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48f638:
    // 0x48f638: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48f638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48f63c:
    // 0x48f63c: 0x24a54f30  addiu       $a1, $a1, 0x4F30
    ctx->pc = 0x48f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
label_48f640:
    // 0x48f640: 0xc115c24  jal         func_457090
label_48f644:
    if (ctx->pc == 0x48F644u) {
        ctx->pc = 0x48F648u;
        goto label_48f648;
    }
    ctx->pc = 0x48F640u;
    SET_GPR_U32(ctx, 31, 0x48F648u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48F640u, 0x48F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F648u;
label_48f648:
    // 0x48f648: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48f64c:
    // 0x48f64c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x48f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_48f650:
    // 0x48f650: 0x40f809  jalr        $v0
label_48f654:
    if (ctx->pc == 0x48F654u) {
        ctx->pc = 0x48F658u;
        goto label_48f658;
    }
    ctx->pc = 0x48F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48F658u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F650u, 0x48F658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48F658u;
label_48f658:
    // 0x48f658: 0xaf82b6a0  sw          $v0, -0x4960($gp)
    ctx->pc = 0x48f658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948512), GPR_U32(ctx, 2));
label_48f65c:
    // 0x48f65c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48f660:
    // 0x48f660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48f664:
    if (ctx->pc == 0x48F664u) {
        ctx->pc = 0x48F668u;
        goto label_48f668;
    }
    ctx->pc = 0x48F660u;
    {
        const bool branch_taken_0x48f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f660) {
            ctx->pc = 0x48F670u;
            goto label_48f670;
        }
    }
    ctx->pc = 0x48F668u;
label_48f668:
    // 0x48f668: 0xd  break       0
    ctx->pc = 0x48f668u;
    runtime->handleBreak(rdram, ctx);
label_48f66c:
    // 0x48f66c: 0x0  nop
    ctx->pc = 0x48f66cu;
    // NOP
label_48f670:
    // 0x48f670: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x48f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_48f674:
    // 0x48f674: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48f678:
    // 0x48f678: 0xc11392c  jal         func_44E4B0
label_48f67c:
    if (ctx->pc == 0x48F67Cu) {
        ctx->pc = 0x48F680u;
        goto label_48f680;
    }
    ctx->pc = 0x48F678u;
    SET_GPR_U32(ctx, 31, 0x48F680u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48F678u, 0x48F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F680u;
label_48f680:
    // 0x48f680: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48f684:
    // 0x48f684: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48f688:
    if (ctx->pc == 0x48F688u) {
        ctx->pc = 0x48F68Cu;
        goto label_48f68c;
    }
    ctx->pc = 0x48F684u;
    {
        const bool branch_taken_0x48f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f684) {
            ctx->pc = 0x48F734u;
            goto label_48f734;
        }
    }
    ctx->pc = 0x48F68Cu;
label_48f68c:
    // 0x48f68c: 0x8f82b6a4  lw          $v0, -0x495C($gp)
    ctx->pc = 0x48f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948516)));
label_48f690:
    // 0x48f690: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48f694:
    if (ctx->pc == 0x48F694u) {
        ctx->pc = 0x48F698u;
        goto label_48f698;
    }
    ctx->pc = 0x48F690u;
    {
        const bool branch_taken_0x48f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f690) {
            ctx->pc = 0x48F734u;
            goto label_48f734;
        }
    }
    ctx->pc = 0x48F698u;
label_48f698:
    // 0x48f698: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48f69c:
    // 0x48f69c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f6a0:
    // 0x48f6a0: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x48f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_48f6a4:
    // 0x48f6a4: 0xc115ee8  jal         func_457BA0
label_48f6a8:
    if (ctx->pc == 0x48F6A8u) {
        ctx->pc = 0x48F6ACu;
        goto label_48f6ac;
    }
    ctx->pc = 0x48F6A4u;
    SET_GPR_U32(ctx, 31, 0x48F6ACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48F6A4u, 0x48F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F6ACu;
label_48f6ac:
    // 0x48f6ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48f6b0:
    if (ctx->pc == 0x48F6B0u) {
        ctx->pc = 0x48F6B4u;
        goto label_48f6b4;
    }
    ctx->pc = 0x48F6ACu;
    {
        const bool branch_taken_0x48f6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f6ac) {
            ctx->pc = 0x48F734u;
            goto label_48f734;
        }
    }
    ctx->pc = 0x48F6B4u;
label_48f6b4:
    // 0x48f6b4: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x48f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_48f6b8:
    // 0x48f6b8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48f6bc:
    if (ctx->pc == 0x48F6BCu) {
        ctx->pc = 0x48F6C0u;
        goto label_48f6c0;
    }
    ctx->pc = 0x48F6B8u;
    {
        const bool branch_taken_0x48f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f6b8) {
            ctx->pc = 0x48F734u;
            goto label_48f734;
        }
    }
    ctx->pc = 0x48F6C0u;
label_48f6c0:
    // 0x48f6c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48f6c4:
    // 0x48f6c4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48f6c8:
    // 0x48f6c8: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x48f6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_48f6cc:
    // 0x48f6cc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48f6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48f6d0:
    // 0x48f6d0: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48f6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48f6d4:
    // 0x48f6d4: 0x2408011a  addiu       $t0, $zero, 0x11A
    ctx->pc = 0x48f6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_48f6d8:
    // 0x48f6d8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48f6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48f6dc:
    // 0x48f6dc: 0x25294f78  addiu       $t1, $t1, 0x4F78
    ctx->pc = 0x48f6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20344));
label_48f6e0:
    // 0x48f6e0: 0xc113940  jal         func_44E500
label_48f6e4:
    if (ctx->pc == 0x48F6E4u) {
        ctx->pc = 0x48F6E8u;
        goto label_48f6e8;
    }
    ctx->pc = 0x48F6E0u;
    SET_GPR_U32(ctx, 31, 0x48F6E8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48F6E0u, 0x48F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F6E8u;
label_48f6e8:
    // 0x48f6e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48f6ec:
    // 0x48f6ec: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48f6f0:
    // 0x48f6f0: 0x24a54f90  addiu       $a1, $a1, 0x4F90
    ctx->pc = 0x48f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20368));
label_48f6f4:
    // 0x48f6f4: 0xc115c24  jal         func_457090
label_48f6f8:
    if (ctx->pc == 0x48F6F8u) {
        ctx->pc = 0x48F6FCu;
        goto label_48f6fc;
    }
    ctx->pc = 0x48F6F4u;
    SET_GPR_U32(ctx, 31, 0x48F6FCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48F6F4u, 0x48F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F6FCu;
label_48f6fc:
    // 0x48f6fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48f700:
    // 0x48f700: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x48f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_48f704:
    // 0x48f704: 0x40f809  jalr        $v0
label_48f708:
    if (ctx->pc == 0x48F708u) {
        ctx->pc = 0x48F70Cu;
        goto label_48f70c;
    }
    ctx->pc = 0x48F704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48F70Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F704u, 0x48F70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48F70Cu;
label_48f70c:
    // 0x48f70c: 0xaf82b6a4  sw          $v0, -0x495C($gp)
    ctx->pc = 0x48f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948516), GPR_U32(ctx, 2));
label_48f710:
    // 0x48f710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_48f714:
    // 0x48f714: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48f718:
    if (ctx->pc == 0x48F718u) {
        ctx->pc = 0x48F71Cu;
        goto label_48f71c;
    }
    ctx->pc = 0x48F714u;
    {
        const bool branch_taken_0x48f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f714) {
            ctx->pc = 0x48F724u;
            goto label_48f724;
        }
    }
    ctx->pc = 0x48F71Cu;
label_48f71c:
    // 0x48f71c: 0xd  break       0
    ctx->pc = 0x48f71cu;
    runtime->handleBreak(rdram, ctx);
label_48f720:
    // 0x48f720: 0x0  nop
    ctx->pc = 0x48f720u;
    // NOP
label_48f724:
    // 0x48f724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48f728:
    // 0x48f728: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48f72c:
    // 0x48f72c: 0xc11392c  jal         func_44E4B0
label_48f730:
    if (ctx->pc == 0x48F730u) {
        ctx->pc = 0x48F734u;
        goto label_48f734;
    }
    ctx->pc = 0x48F72Cu;
    SET_GPR_U32(ctx, 31, 0x48F734u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48F72Cu, 0x48F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F734u;
label_48f734:
    // 0x48f734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48f734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f738:
    // 0x48f738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48f738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48f73c:
    // 0x48f73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48f73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48f740:
    // 0x48f740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48f744:
    // 0x48f744: 0x27bd02d0  addiu       $sp, $sp, 0x2D0
    ctx->pc = 0x48f744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_48f748:
    // 0x48f748: 0x3e00008  jr          $ra
label_48f74c:
    if (ctx->pc == 0x48F74Cu) {
        ctx->pc = 0x48F750u;
        goto label_fallthrough_0x48f748;
    }
    ctx->pc = 0x48F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48f748:
    ctx->pc = 0x48F750u;
}
