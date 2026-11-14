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

// Function: sub_0045D500
// Address: 0x45d500 - 0x45d6b0
void sub_0045D500_0x45d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045D500_0x45d500");
#endif

    switch (ctx->pc) {
        case 0x45d500u: goto label_45d500;
        case 0x45d504u: goto label_45d504;
        case 0x45d508u: goto label_45d508;
        case 0x45d50cu: goto label_45d50c;
        case 0x45d510u: goto label_45d510;
        case 0x45d514u: goto label_45d514;
        case 0x45d518u: goto label_45d518;
        case 0x45d51cu: goto label_45d51c;
        case 0x45d520u: goto label_45d520;
        case 0x45d524u: goto label_45d524;
        case 0x45d528u: goto label_45d528;
        case 0x45d52cu: goto label_45d52c;
        case 0x45d530u: goto label_45d530;
        case 0x45d534u: goto label_45d534;
        case 0x45d538u: goto label_45d538;
        case 0x45d53cu: goto label_45d53c;
        case 0x45d540u: goto label_45d540;
        case 0x45d544u: goto label_45d544;
        case 0x45d548u: goto label_45d548;
        case 0x45d54cu: goto label_45d54c;
        case 0x45d550u: goto label_45d550;
        case 0x45d554u: goto label_45d554;
        case 0x45d558u: goto label_45d558;
        case 0x45d55cu: goto label_45d55c;
        case 0x45d560u: goto label_45d560;
        case 0x45d564u: goto label_45d564;
        case 0x45d568u: goto label_45d568;
        case 0x45d56cu: goto label_45d56c;
        case 0x45d570u: goto label_45d570;
        case 0x45d574u: goto label_45d574;
        case 0x45d578u: goto label_45d578;
        case 0x45d57cu: goto label_45d57c;
        case 0x45d580u: goto label_45d580;
        case 0x45d584u: goto label_45d584;
        case 0x45d588u: goto label_45d588;
        case 0x45d58cu: goto label_45d58c;
        case 0x45d590u: goto label_45d590;
        case 0x45d594u: goto label_45d594;
        case 0x45d598u: goto label_45d598;
        case 0x45d59cu: goto label_45d59c;
        case 0x45d5a0u: goto label_45d5a0;
        case 0x45d5a4u: goto label_45d5a4;
        case 0x45d5a8u: goto label_45d5a8;
        case 0x45d5acu: goto label_45d5ac;
        case 0x45d5b0u: goto label_45d5b0;
        case 0x45d5b4u: goto label_45d5b4;
        case 0x45d5b8u: goto label_45d5b8;
        case 0x45d5bcu: goto label_45d5bc;
        case 0x45d5c0u: goto label_45d5c0;
        case 0x45d5c4u: goto label_45d5c4;
        case 0x45d5c8u: goto label_45d5c8;
        case 0x45d5ccu: goto label_45d5cc;
        case 0x45d5d0u: goto label_45d5d0;
        case 0x45d5d4u: goto label_45d5d4;
        case 0x45d5d8u: goto label_45d5d8;
        case 0x45d5dcu: goto label_45d5dc;
        case 0x45d5e0u: goto label_45d5e0;
        case 0x45d5e4u: goto label_45d5e4;
        case 0x45d5e8u: goto label_45d5e8;
        case 0x45d5ecu: goto label_45d5ec;
        case 0x45d5f0u: goto label_45d5f0;
        case 0x45d5f4u: goto label_45d5f4;
        case 0x45d5f8u: goto label_45d5f8;
        case 0x45d5fcu: goto label_45d5fc;
        case 0x45d600u: goto label_45d600;
        case 0x45d604u: goto label_45d604;
        case 0x45d608u: goto label_45d608;
        case 0x45d60cu: goto label_45d60c;
        case 0x45d610u: goto label_45d610;
        case 0x45d614u: goto label_45d614;
        case 0x45d618u: goto label_45d618;
        case 0x45d61cu: goto label_45d61c;
        case 0x45d620u: goto label_45d620;
        case 0x45d624u: goto label_45d624;
        case 0x45d628u: goto label_45d628;
        case 0x45d62cu: goto label_45d62c;
        case 0x45d630u: goto label_45d630;
        case 0x45d634u: goto label_45d634;
        case 0x45d638u: goto label_45d638;
        case 0x45d63cu: goto label_45d63c;
        case 0x45d640u: goto label_45d640;
        case 0x45d644u: goto label_45d644;
        case 0x45d648u: goto label_45d648;
        case 0x45d64cu: goto label_45d64c;
        case 0x45d650u: goto label_45d650;
        case 0x45d654u: goto label_45d654;
        case 0x45d658u: goto label_45d658;
        case 0x45d65cu: goto label_45d65c;
        case 0x45d660u: goto label_45d660;
        case 0x45d664u: goto label_45d664;
        case 0x45d668u: goto label_45d668;
        case 0x45d66cu: goto label_45d66c;
        case 0x45d670u: goto label_45d670;
        case 0x45d674u: goto label_45d674;
        case 0x45d678u: goto label_45d678;
        case 0x45d67cu: goto label_45d67c;
        case 0x45d680u: goto label_45d680;
        case 0x45d684u: goto label_45d684;
        case 0x45d688u: goto label_45d688;
        case 0x45d68cu: goto label_45d68c;
        case 0x45d690u: goto label_45d690;
        case 0x45d694u: goto label_45d694;
        case 0x45d698u: goto label_45d698;
        case 0x45d69cu: goto label_45d69c;
        case 0x45d6a0u: goto label_45d6a0;
        case 0x45d6a4u: goto label_45d6a4;
        case 0x45d6a8u: goto label_45d6a8;
        case 0x45d6acu: goto label_45d6ac;
        default: break;
    }

    ctx->pc = 0x45d500u;

label_45d500:
    // 0x45d500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_45d504:
    // 0x45d504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45d508:
    // 0x45d508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45d508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_45d50c:
    // 0x45d50c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d510:
    // 0x45d510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d514:
    // 0x45d514: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d518:
    // 0x45d518: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d51c:
    // 0x45d51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d520:
    // 0x45d520: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d524:
    // 0x45d524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45d528:
    if (ctx->pc == 0x45D528u) {
        ctx->pc = 0x45D52Cu;
        goto label_45d52c;
    }
    ctx->pc = 0x45D524u;
    {
        const bool branch_taken_0x45d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d524) {
            ctx->pc = 0x45D538u;
            goto label_45d538;
        }
    }
    ctx->pc = 0x45D52Cu;
label_45d52c:
    // 0x45d52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45d52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d530:
    // 0x45d530: 0x10000059  b           . + 4 + (0x59 << 2)
label_45d534:
    if (ctx->pc == 0x45D534u) {
        ctx->pc = 0x45D538u;
        goto label_45d538;
    }
    ctx->pc = 0x45D530u;
    {
        const bool branch_taken_0x45d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d530) {
            ctx->pc = 0x45D698u;
            goto label_45d698;
        }
    }
    ctx->pc = 0x45D538u;
label_45d538:
    // 0x45d538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d53c:
    // 0x45d53c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d540:
    // 0x45d540: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d544:
    // 0x45d544: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d548:
    // 0x45d548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d54c:
    // 0x45d54c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d550:
    // 0x45d550: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x45d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_45d554:
    // 0x45d554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45d558:
    if (ctx->pc == 0x45D558u) {
        ctx->pc = 0x45D55Cu;
        goto label_45d55c;
    }
    ctx->pc = 0x45D554u;
    {
        const bool branch_taken_0x45d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d554) {
            ctx->pc = 0x45D568u;
            goto label_45d568;
        }
    }
    ctx->pc = 0x45D55Cu;
label_45d55c:
    // 0x45d55c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45d55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d560:
    // 0x45d560: 0x1000004d  b           . + 4 + (0x4D << 2)
label_45d564:
    if (ctx->pc == 0x45D564u) {
        ctx->pc = 0x45D568u;
        goto label_45d568;
    }
    ctx->pc = 0x45D560u;
    {
        const bool branch_taken_0x45d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d560) {
            ctx->pc = 0x45D698u;
            goto label_45d698;
        }
    }
    ctx->pc = 0x45D568u;
label_45d568:
    // 0x45d568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d56c:
    // 0x45d56c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d570:
    // 0x45d570: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d574:
    // 0x45d574: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d578:
    // 0x45d578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d57c:
    // 0x45d57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d580:
    // 0x45d580: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x45d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_45d584:
    // 0x45d584: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_45d588:
    if (ctx->pc == 0x45D588u) {
        ctx->pc = 0x45D58Cu;
        goto label_45d58c;
    }
    ctx->pc = 0x45D584u;
    {
        const bool branch_taken_0x45d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d584) {
            ctx->pc = 0x45D5F0u;
            goto label_45d5f0;
        }
    }
    ctx->pc = 0x45D58Cu;
label_45d58c:
    // 0x45d58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d590:
    // 0x45d590: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d594:
    // 0x45d594: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d598:
    // 0x45d598: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d59c:
    // 0x45d59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d5a0:
    // 0x45d5a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d5a4:
    // 0x45d5a4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x45d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_45d5a8:
    // 0x45d5a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d5ac:
    // 0x45d5ac: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x45d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_45d5b0:
    // 0x45d5b0: 0x40f809  jalr        $v0
label_45d5b4:
    if (ctx->pc == 0x45D5B4u) {
        ctx->pc = 0x45D5B8u;
        goto label_45d5b8;
    }
    ctx->pc = 0x45D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D5B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D5B0u, 0x45D5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D5B8u;
label_45d5b8:
    // 0x45d5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d5bc:
    // 0x45d5bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d5c0:
    // 0x45d5c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d5c4:
    // 0x45d5c4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d5c8:
    // 0x45d5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d5cc:
    // 0x45d5cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d5d0:
    // 0x45d5d0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x45d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_45d5d4:
    // 0x45d5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d5d8:
    // 0x45d5d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d5dc:
    // 0x45d5dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d5e0:
    // 0x45d5e0: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d5e4:
    // 0x45d5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d5e8:
    // 0x45d5e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d5ec:
    // 0x45d5ec: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x45d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_45d5f0:
    // 0x45d5f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d5f4:
    // 0x45d5f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d5f8:
    // 0x45d5f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d5fc:
    // 0x45d5fc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d600:
    // 0x45d600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d604:
    // 0x45d604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d608:
    // 0x45d608: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d60c:
    // 0x45d60c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_45d610:
    if (ctx->pc == 0x45D610u) {
        ctx->pc = 0x45D614u;
        goto label_45d614;
    }
    ctx->pc = 0x45D60Cu;
    {
        const bool branch_taken_0x45d60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d60c) {
            ctx->pc = 0x45D654u;
            goto label_45d654;
        }
    }
    ctx->pc = 0x45D614u;
label_45d614:
    // 0x45d614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d618:
    // 0x45d618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d61c:
    // 0x45d61c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d620:
    // 0x45d620: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d624:
    // 0x45d624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d628:
    // 0x45d628: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d62c:
    // 0x45d62c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45d630:
    // 0x45d630: 0xc0f0af2  jal         func_3C2BC8
label_45d634:
    if (ctx->pc == 0x45D634u) {
        ctx->pc = 0x45D638u;
        goto label_45d638;
    }
    ctx->pc = 0x45D630u;
    SET_GPR_U32(ctx, 31, 0x45D638u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x45D630u, 0x45D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45D638u;
label_45d638:
    // 0x45d638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d63c:
    // 0x45d63c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d640:
    // 0x45d640: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d644:
    // 0x45d644: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d648:
    // 0x45d648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d64c:
    // 0x45d64c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d650:
    // 0x45d650: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x45d650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_45d654:
    // 0x45d654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d658:
    // 0x45d658: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d65c:
    // 0x45d65c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d660:
    // 0x45d660: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d664:
    // 0x45d664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d668:
    // 0x45d668: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45d66c:
    // 0x45d66c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d670:
    // 0x45d670: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x45d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_45d674:
    // 0x45d674: 0x40f809  jalr        $v0
label_45d678:
    if (ctx->pc == 0x45D678u) {
        ctx->pc = 0x45D67Cu;
        goto label_45d67c;
    }
    ctx->pc = 0x45D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45D67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D674u, 0x45D67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45D67Cu;
label_45d67c:
    // 0x45d67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45d680:
    // 0x45d680: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45d680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d684:
    // 0x45d684: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45d688:
    // 0x45d688: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45d68c:
    // 0x45d68c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d690:
    // 0x45d690: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45d690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_45d694:
    // 0x45d694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45d698:
    // 0x45d698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45d69c:
    // 0x45d69c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45d69cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45d6a0:
    // 0x45d6a0: 0x3e00008  jr          $ra
label_45d6a4:
    if (ctx->pc == 0x45D6A4u) {
        ctx->pc = 0x45D6A8u;
        goto label_45d6a8;
    }
    ctx->pc = 0x45D6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45D6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45D6A8u;
label_45d6a8:
    // 0x45d6a8: 0x0  nop
    ctx->pc = 0x45d6a8u;
    // NOP
label_45d6ac:
    // 0x45d6ac: 0x0  nop
    ctx->pc = 0x45d6acu;
    // NOP
    ctx->pc = 0x45d6b0u;
}
