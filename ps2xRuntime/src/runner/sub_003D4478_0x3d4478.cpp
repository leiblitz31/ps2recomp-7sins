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

// Function: sub_003D4478
// Address: 0x3d4478 - 0x3d46e0
void sub_003D4478_0x3d4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4478_0x3d4478");
#endif

    switch (ctx->pc) {
        case 0x3d4478u: goto label_3d4478;
        case 0x3d447cu: goto label_3d447c;
        case 0x3d4480u: goto label_3d4480;
        case 0x3d4484u: goto label_3d4484;
        case 0x3d4488u: goto label_3d4488;
        case 0x3d448cu: goto label_3d448c;
        case 0x3d4490u: goto label_3d4490;
        case 0x3d4494u: goto label_3d4494;
        case 0x3d4498u: goto label_3d4498;
        case 0x3d449cu: goto label_3d449c;
        case 0x3d44a0u: goto label_3d44a0;
        case 0x3d44a4u: goto label_3d44a4;
        case 0x3d44a8u: goto label_3d44a8;
        case 0x3d44acu: goto label_3d44ac;
        case 0x3d44b0u: goto label_3d44b0;
        case 0x3d44b4u: goto label_3d44b4;
        case 0x3d44b8u: goto label_3d44b8;
        case 0x3d44bcu: goto label_3d44bc;
        case 0x3d44c0u: goto label_3d44c0;
        case 0x3d44c4u: goto label_3d44c4;
        case 0x3d44c8u: goto label_3d44c8;
        case 0x3d44ccu: goto label_3d44cc;
        case 0x3d44d0u: goto label_3d44d0;
        case 0x3d44d4u: goto label_3d44d4;
        case 0x3d44d8u: goto label_3d44d8;
        case 0x3d44dcu: goto label_3d44dc;
        case 0x3d44e0u: goto label_3d44e0;
        case 0x3d44e4u: goto label_3d44e4;
        case 0x3d44e8u: goto label_3d44e8;
        case 0x3d44ecu: goto label_3d44ec;
        case 0x3d44f0u: goto label_3d44f0;
        case 0x3d44f4u: goto label_3d44f4;
        case 0x3d44f8u: goto label_3d44f8;
        case 0x3d44fcu: goto label_3d44fc;
        case 0x3d4500u: goto label_3d4500;
        case 0x3d4504u: goto label_3d4504;
        case 0x3d4508u: goto label_3d4508;
        case 0x3d450cu: goto label_3d450c;
        case 0x3d4510u: goto label_3d4510;
        case 0x3d4514u: goto label_3d4514;
        case 0x3d4518u: goto label_3d4518;
        case 0x3d451cu: goto label_3d451c;
        case 0x3d4520u: goto label_3d4520;
        case 0x3d4524u: goto label_3d4524;
        case 0x3d4528u: goto label_3d4528;
        case 0x3d452cu: goto label_3d452c;
        case 0x3d4530u: goto label_3d4530;
        case 0x3d4534u: goto label_3d4534;
        case 0x3d4538u: goto label_3d4538;
        case 0x3d453cu: goto label_3d453c;
        case 0x3d4540u: goto label_3d4540;
        case 0x3d4544u: goto label_3d4544;
        case 0x3d4548u: goto label_3d4548;
        case 0x3d454cu: goto label_3d454c;
        case 0x3d4550u: goto label_3d4550;
        case 0x3d4554u: goto label_3d4554;
        case 0x3d4558u: goto label_3d4558;
        case 0x3d455cu: goto label_3d455c;
        case 0x3d4560u: goto label_3d4560;
        case 0x3d4564u: goto label_3d4564;
        case 0x3d4568u: goto label_3d4568;
        case 0x3d456cu: goto label_3d456c;
        case 0x3d4570u: goto label_3d4570;
        case 0x3d4574u: goto label_3d4574;
        case 0x3d4578u: goto label_3d4578;
        case 0x3d457cu: goto label_3d457c;
        case 0x3d4580u: goto label_3d4580;
        case 0x3d4584u: goto label_3d4584;
        case 0x3d4588u: goto label_3d4588;
        case 0x3d458cu: goto label_3d458c;
        case 0x3d4590u: goto label_3d4590;
        case 0x3d4594u: goto label_3d4594;
        case 0x3d4598u: goto label_3d4598;
        case 0x3d459cu: goto label_3d459c;
        case 0x3d45a0u: goto label_3d45a0;
        case 0x3d45a4u: goto label_3d45a4;
        case 0x3d45a8u: goto label_3d45a8;
        case 0x3d45acu: goto label_3d45ac;
        case 0x3d45b0u: goto label_3d45b0;
        case 0x3d45b4u: goto label_3d45b4;
        case 0x3d45b8u: goto label_3d45b8;
        case 0x3d45bcu: goto label_3d45bc;
        case 0x3d45c0u: goto label_3d45c0;
        case 0x3d45c4u: goto label_3d45c4;
        case 0x3d45c8u: goto label_3d45c8;
        case 0x3d45ccu: goto label_3d45cc;
        case 0x3d45d0u: goto label_3d45d0;
        case 0x3d45d4u: goto label_3d45d4;
        case 0x3d45d8u: goto label_3d45d8;
        case 0x3d45dcu: goto label_3d45dc;
        case 0x3d45e0u: goto label_3d45e0;
        case 0x3d45e4u: goto label_3d45e4;
        case 0x3d45e8u: goto label_3d45e8;
        case 0x3d45ecu: goto label_3d45ec;
        case 0x3d45f0u: goto label_3d45f0;
        case 0x3d45f4u: goto label_3d45f4;
        case 0x3d45f8u: goto label_3d45f8;
        case 0x3d45fcu: goto label_3d45fc;
        case 0x3d4600u: goto label_3d4600;
        case 0x3d4604u: goto label_3d4604;
        case 0x3d4608u: goto label_3d4608;
        case 0x3d460cu: goto label_3d460c;
        case 0x3d4610u: goto label_3d4610;
        case 0x3d4614u: goto label_3d4614;
        case 0x3d4618u: goto label_3d4618;
        case 0x3d461cu: goto label_3d461c;
        case 0x3d4620u: goto label_3d4620;
        case 0x3d4624u: goto label_3d4624;
        case 0x3d4628u: goto label_3d4628;
        case 0x3d462cu: goto label_3d462c;
        case 0x3d4630u: goto label_3d4630;
        case 0x3d4634u: goto label_3d4634;
        case 0x3d4638u: goto label_3d4638;
        case 0x3d463cu: goto label_3d463c;
        case 0x3d4640u: goto label_3d4640;
        case 0x3d4644u: goto label_3d4644;
        case 0x3d4648u: goto label_3d4648;
        case 0x3d464cu: goto label_3d464c;
        case 0x3d4650u: goto label_3d4650;
        case 0x3d4654u: goto label_3d4654;
        case 0x3d4658u: goto label_3d4658;
        case 0x3d465cu: goto label_3d465c;
        case 0x3d4660u: goto label_3d4660;
        case 0x3d4664u: goto label_3d4664;
        case 0x3d4668u: goto label_3d4668;
        case 0x3d466cu: goto label_3d466c;
        case 0x3d4670u: goto label_3d4670;
        case 0x3d4674u: goto label_3d4674;
        case 0x3d4678u: goto label_3d4678;
        case 0x3d467cu: goto label_3d467c;
        case 0x3d4680u: goto label_3d4680;
        case 0x3d4684u: goto label_3d4684;
        case 0x3d4688u: goto label_3d4688;
        case 0x3d468cu: goto label_3d468c;
        case 0x3d4690u: goto label_3d4690;
        case 0x3d4694u: goto label_3d4694;
        case 0x3d4698u: goto label_3d4698;
        case 0x3d469cu: goto label_3d469c;
        case 0x3d46a0u: goto label_3d46a0;
        case 0x3d46a4u: goto label_3d46a4;
        case 0x3d46a8u: goto label_3d46a8;
        case 0x3d46acu: goto label_3d46ac;
        case 0x3d46b0u: goto label_3d46b0;
        case 0x3d46b4u: goto label_3d46b4;
        case 0x3d46b8u: goto label_3d46b8;
        case 0x3d46bcu: goto label_3d46bc;
        case 0x3d46c0u: goto label_3d46c0;
        case 0x3d46c4u: goto label_3d46c4;
        case 0x3d46c8u: goto label_3d46c8;
        case 0x3d46ccu: goto label_3d46cc;
        case 0x3d46d0u: goto label_3d46d0;
        case 0x3d46d4u: goto label_3d46d4;
        case 0x3d46d8u: goto label_3d46d8;
        case 0x3d46dcu: goto label_3d46dc;
        default: break;
    }

    ctx->pc = 0x3d4478u;

label_3d4478:
    // 0x3d4478: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d447c:
    // 0x3d447c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4480:
    // 0x3d4480: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3d4480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3d4484:
    // 0x3d4484: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3d4484u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4488:
    // 0x3d4488: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3d4488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3d448c:
    // 0x3d448c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d4490:
    // 0x3d4490: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d4494:
    // 0x3d4494: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3d4494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3d4498:
    // 0x3d4498: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d449c:
    // 0x3d449c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3d449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3d44a0:
    // 0x3d44a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d44a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d44a4:
    // 0x3d44a4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3d44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3d44a8:
    // 0x3d44a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3d44ac:
    // 0x3d44ac: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3d44acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3d44b0:
    // 0x3d44b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d44b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d44b4:
    // 0x3d44b4: 0xc0f4df6  jal         func_3D37D8
label_3d44b8:
    if (ctx->pc == 0x3D44B8u) {
        ctx->pc = 0x3D44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44B4u;
        // 0x3d44b8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44BCu;
        goto label_3d44bc;
    }
    ctx->pc = 0x3D44B4u;
    SET_GPR_U32(ctx, 31, 0x3D44BCu);
    ctx->pc = 0x3D44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44B4u;
    // 0x3d44b8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D44B4u, 0x3D44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44BCu;
label_3d44bc:
    // 0x3d44bc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d44c0:
    // 0x3d44c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3d44c4:
    if (ctx->pc == 0x3D44C4u) {
        ctx->pc = 0x3D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44C0u;
        // 0x3d44c4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44C8u;
        goto label_3d44c8;
    }
    ctx->pc = 0x3D44C0u;
    {
        const bool branch_taken_0x3d44c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44C0u;
        // 0x3d44c4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44c0) {
            ctx->pc = 0x3D453Cu;
            goto label_3d453c;
        }
    }
    ctx->pc = 0x3D44C8u;
label_3d44c8:
    // 0x3d44c8: 0x26b3b1e0  addiu       $s3, $s5, -0x4E20
    ctx->pc = 0x3d44c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947296));
label_3d44cc:
    // 0x3d44cc: 0x0  nop
    ctx->pc = 0x3d44ccu;
    // NOP
label_3d44d0:
    // 0x3d44d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d44d4:
    // 0x3d44d4: 0xc1036da  jal         func_40DB68
label_3d44d8:
    if (ctx->pc == 0x3D44D8u) {
        ctx->pc = 0x3D44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44D4u;
        // 0x3d44d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44DCu;
        goto label_3d44dc;
    }
    ctx->pc = 0x3D44D4u;
    SET_GPR_U32(ctx, 31, 0x3D44DCu);
    ctx->pc = 0x3D44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44D4u;
    // 0x3d44d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D44D4u, 0x3D44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44DCu;
label_3d44dc:
    // 0x3d44dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d44dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d44e0:
    // 0x3d44e0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d44e4:
    // 0x3d44e4: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x3d44e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d44e8:
    // 0x3d44e8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3d44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d44ec:
    // 0x3d44ec: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3d44f0:
    if (ctx->pc == 0x3D44F0u) {
        ctx->pc = 0x3D44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44ECu;
        // 0x3d44f0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44F4u;
        goto label_3d44f4;
    }
    ctx->pc = 0x3D44ECu;
    {
        const bool branch_taken_0x3d44ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d44ec) {
            ctx->pc = 0x3D44F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D44ECu;
            // 0x3d44f0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4514u;
            goto label_3d4514;
        }
    }
    ctx->pc = 0x3D44F4u;
label_3d44f4:
    // 0x3d44f4: 0xc10822c  jal         func_4208B0
label_3d44f8:
    if (ctx->pc == 0x3D44F8u) {
        ctx->pc = 0x3D44FCu;
        goto label_3d44fc;
    }
    ctx->pc = 0x3D44F4u;
    SET_GPR_U32(ctx, 31, 0x3D44FCu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D44F4u, 0x3D44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44FCu;
label_3d44fc:
    // 0x3d44fc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3d44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3d4500:
    // 0x3d4500: 0xc0f46de  jal         func_3D1B78
label_3d4504:
    if (ctx->pc == 0x3D4504u) {
        ctx->pc = 0x3D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4500u;
        // 0x3d4504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4508u;
        goto label_3d4508;
    }
    ctx->pc = 0x3D4500u;
    SET_GPR_U32(ctx, 31, 0x3D4508u);
    ctx->pc = 0x3D4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4500u;
    // 0x3d4504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1B78u, 0x3D4500u, 0x3D4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4508u;
label_3d4508:
    // 0x3d4508: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3d4508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_3d450c:
    // 0x3d450c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3d450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3d4510:
    // 0x3d4510: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3d4510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3d4514:
    // 0x3d4514: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3d4518:
    if (ctx->pc == 0x3D4518u) {
        ctx->pc = 0x3D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4514u;
        // 0x3d4518: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D451Cu;
        goto label_3d451c;
    }
    ctx->pc = 0x3D4514u;
    {
        const bool branch_taken_0x3d4514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4514u;
        // 0x3d4518: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4514) {
            ctx->pc = 0x3D4528u;
            goto label_3d4528;
        }
    }
    ctx->pc = 0x3D451Cu;
label_3d451c:
    // 0x3d451c: 0xc0c8e22  jal         func_323888
label_3d4520:
    if (ctx->pc == 0x3D4520u) {
        ctx->pc = 0x3D4524u;
        goto label_3d4524;
    }
    ctx->pc = 0x3D451Cu;
    SET_GPR_U32(ctx, 31, 0x3D4524u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D451Cu, 0x3D4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4524u;
label_3d4524:
    // 0x3d4524: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d4528:
    // 0x3d4528: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d4528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d452c:
    // 0x3d452c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3d452cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d4530:
    // 0x3d4530: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_3d4534:
    if (ctx->pc == 0x3D4534u) {
        ctx->pc = 0x3D4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4530u;
        // 0x3d4534: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4538u;
        goto label_3d4538;
    }
    ctx->pc = 0x3D4530u;
    {
        const bool branch_taken_0x3d4530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4530u;
        // 0x3d4534: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4530) {
            ctx->pc = 0x3D44D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d44d0;
        }
    }
    ctx->pc = 0x3D4538u;
label_3d4538:
    // 0x3d4538: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d453c:
    // 0x3d453c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3d4540:
    if (ctx->pc == 0x3D4540u) {
        ctx->pc = 0x3D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D453Cu;
        // 0x3d4540: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4544u;
        goto label_3d4544;
    }
    ctx->pc = 0x3D453Cu;
    {
        const bool branch_taken_0x3d453c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D453Cu;
        // 0x3d4540: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d453c) {
            ctx->pc = 0x3D462Cu;
            goto label_3d462c;
        }
    }
    ctx->pc = 0x3D4544u;
label_3d4544:
    // 0x3d4544: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d4548:
    // 0x3d4548: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x3d4548u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d454c:
    // 0x3d454c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d4550:
    // 0x3d4550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d4550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4554:
    // 0x3d4554: 0xc1036da  jal         func_40DB68
label_3d4558:
    if (ctx->pc == 0x3D4558u) {
        ctx->pc = 0x3D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4554u;
        // 0x3d4558: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D455Cu;
        goto label_3d455c;
    }
    ctx->pc = 0x3D4554u;
    SET_GPR_U32(ctx, 31, 0x3D455Cu);
    ctx->pc = 0x3D4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4554u;
    // 0x3d4558: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D4554u, 0x3D455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D455Cu;
label_3d455c:
    // 0x3d455c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d455cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4560:
    // 0x3d4560: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3d4560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3d4564:
    // 0x3d4564: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d4564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3d4568:
    // 0x3d4568: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3d456c:
    if (ctx->pc == 0x3D456Cu) {
        ctx->pc = 0x3D456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4568u;
        // 0x3d456c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4570u;
        goto label_3d4570;
    }
    ctx->pc = 0x3D4568u;
    {
        const bool branch_taken_0x3d4568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4568u;
        // 0x3d456c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4568) {
            ctx->pc = 0x3D461Cu;
            goto label_3d461c;
        }
    }
    ctx->pc = 0x3D4570u;
label_3d4570:
    // 0x3d4570: 0x26b1b1e0  addiu       $s1, $s5, -0x4E20
    ctx->pc = 0x3d4570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947296));
label_3d4574:
    // 0x3d4574: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d4574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d4578:
    // 0x3d4578: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x3d4578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d457c:
    // 0x3d457c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3d457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d4580:
    // 0x3d4580: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3d4584:
    if (ctx->pc == 0x3D4584u) {
        ctx->pc = 0x3D4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4580u;
        // 0x3d4584: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4588u;
        goto label_3d4588;
    }
    ctx->pc = 0x3D4580u;
    {
        const bool branch_taken_0x3d4580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4580) {
            ctx->pc = 0x3D4584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4580u;
            // 0x3d4584: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D45A0u;
            goto label_3d45a0;
        }
    }
    ctx->pc = 0x3D4588u;
label_3d4588:
    // 0x3d4588: 0xc10822c  jal         func_4208B0
label_3d458c:
    if (ctx->pc == 0x3D458Cu) {
        ctx->pc = 0x3D4590u;
        goto label_3d4590;
    }
    ctx->pc = 0x3D4588u;
    SET_GPR_U32(ctx, 31, 0x3D4590u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D4588u, 0x3D4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4590u;
label_3d4590:
    // 0x3d4590: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3d4590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3d4594:
    // 0x3d4594: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3d4594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3d4598:
    // 0x3d4598: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3d4598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_3d459c:
    // 0x3d459c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x3d459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3d45a0:
    // 0x3d45a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3d45a4:
    if (ctx->pc == 0x3D45A4u) {
        ctx->pc = 0x3D45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45A0u;
        // 0x3d45a4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45A8u;
        goto label_3d45a8;
    }
    ctx->pc = 0x3D45A0u;
    {
        const bool branch_taken_0x3d45a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d45a0) {
            ctx->pc = 0x3D45A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D45A0u;
            // 0x3d45a4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D45B4u;
            goto label_3d45b4;
        }
    }
    ctx->pc = 0x3D45A8u;
label_3d45a8:
    // 0x3d45a8: 0xc0c8e22  jal         func_323888
label_3d45ac:
    if (ctx->pc == 0x3D45ACu) {
        ctx->pc = 0x3D45B0u;
        goto label_3d45b0;
    }
    ctx->pc = 0x3D45A8u;
    SET_GPR_U32(ctx, 31, 0x3D45B0u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D45A8u, 0x3D45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45B0u;
label_3d45b0:
    // 0x3d45b0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d45b4:
    // 0x3d45b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3d45b8:
    // 0x3d45b8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3d45b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d45bc:
    // 0x3d45bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d45c0:
    // 0x3d45c0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_3d45c4:
    if (ctx->pc == 0x3D45C4u) {
        ctx->pc = 0x3D45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45C0u;
        // 0x3d45c4: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45C8u;
        goto label_3d45c8;
    }
    ctx->pc = 0x3D45C0u;
    {
        const bool branch_taken_0x3d45c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d45c0) {
            ctx->pc = 0x3D45C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D45C0u;
            // 0x3d45c4: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4618u;
            goto label_3d4618;
        }
    }
    ctx->pc = 0x3D45C8u;
label_3d45c8:
    // 0x3d45c8: 0xc0f46a0  jal         func_3D1A80
label_3d45cc:
    if (ctx->pc == 0x3D45CCu) {
        ctx->pc = 0x3D45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45C8u;
        // 0x3d45cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45D0u;
        goto label_3d45d0;
    }
    ctx->pc = 0x3D45C8u;
    SET_GPR_U32(ctx, 31, 0x3D45D0u);
    ctx->pc = 0x3D45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45C8u;
    // 0x3d45cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1A80u, 0x3D45C8u, 0x3D45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45D0u;
label_3d45d0:
    // 0x3d45d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d45d4:
    // 0x3d45d4: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_3d45d8:
    if (ctx->pc == 0x3D45D8u) {
        ctx->pc = 0x3D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45D4u;
        // 0x3d45d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45DCu;
        goto label_3d45dc;
    }
    ctx->pc = 0x3D45D4u;
    {
        const bool branch_taken_0x3d45d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45D4u;
        // 0x3d45d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d45d4) {
            ctx->pc = 0x3D4604u;
            goto label_3d4604;
        }
    }
    ctx->pc = 0x3D45DCu;
label_3d45dc:
    // 0x3d45dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d45e0:
    // 0x3d45e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d45e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d45e4:
    // 0x3d45e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3d45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3d45e8:
    // 0x3d45e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d45ec:
    // 0x3d45ec: 0xc103684  jal         func_40DA10
label_3d45f0:
    if (ctx->pc == 0x3D45F0u) {
        ctx->pc = 0x3D45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45ECu;
        // 0x3d45f0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45F4u;
        goto label_3d45f4;
    }
    ctx->pc = 0x3D45ECu;
    SET_GPR_U32(ctx, 31, 0x3D45F4u);
    ctx->pc = 0x3D45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45ECu;
    // 0x3d45f0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D45ECu, 0x3D45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45F4u;
label_3d45f4:
    // 0x3d45f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d45f8:
    // 0x3d45f8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3d45f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d45fc:
    // 0x3d45fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3d4600:
    if (ctx->pc == 0x3D4600u) {
        ctx->pc = 0x3D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45FCu;
        // 0x3d4600: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4604u;
        goto label_3d4604;
    }
    ctx->pc = 0x3D45FCu;
    {
        const bool branch_taken_0x3d45fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d45fc) {
            ctx->pc = 0x3D4600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D45FCu;
            // 0x3d4600: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D45E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d45e0;
        }
    }
    ctx->pc = 0x3D4604u;
label_3d4604:
    // 0x3d4604: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x3d4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_3d4608:
    // 0x3d4608: 0x40f809  jalr        $v0
label_3d460c:
    if (ctx->pc == 0x3D460Cu) {
        ctx->pc = 0x3D460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4608u;
        // 0x3d460c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4610u;
        goto label_3d4610;
    }
    ctx->pc = 0x3D4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4610u);
        ctx->pc = 0x3D460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4608u;
        // 0x3d460c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4608u, 0x3D4610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4610u;
label_3d4610:
    // 0x3d4610: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d4610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3d4614:
    // 0x3d4614: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3d4614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3d4618:
    // 0x3d4618: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d461c:
    // 0x3d461c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3d461cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d4620:
    // 0x3d4620: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3d4620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d4624:
    // 0x3d4624: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_3d4628:
    if (ctx->pc == 0x3D4628u) {
        ctx->pc = 0x3D4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4624u;
        // 0x3d4628: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D462Cu;
        goto label_3d462c;
    }
    ctx->pc = 0x3D4624u;
    {
        const bool branch_taken_0x3d4624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4624u;
        // 0x3d4628: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4624) {
            ctx->pc = 0x3D4550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4550;
        }
    }
    ctx->pc = 0x3D462Cu;
label_3d462c:
    // 0x3d462c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d4630:
    // 0x3d4630: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d4634:
    if (ctx->pc == 0x3D4634u) {
        ctx->pc = 0x3D4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4630u;
        // 0x3d4634: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4638u;
        goto label_3d4638;
    }
    ctx->pc = 0x3D4630u;
    {
        const bool branch_taken_0x3d4630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4630) {
            ctx->pc = 0x3D4634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4630u;
            // 0x3d4634: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4648u;
            goto label_3d4648;
        }
    }
    ctx->pc = 0x3D4638u;
label_3d4638:
    // 0x3d4638: 0xc103684  jal         func_40DA10
label_3d463c:
    if (ctx->pc == 0x3D463Cu) {
        ctx->pc = 0x3D4640u;
        goto label_3d4640;
    }
    ctx->pc = 0x3D4638u;
    SET_GPR_U32(ctx, 31, 0x3D4640u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D4638u, 0x3D4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4640u;
label_3d4640:
    // 0x3d4640: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d4640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3d4644:
    // 0x3d4644: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4648:
    // 0x3d4648: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3d464c:
    if (ctx->pc == 0x3D464Cu) {
        ctx->pc = 0x3D464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4648u;
        // 0x3d464c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4650u;
        goto label_3d4650;
    }
    ctx->pc = 0x3D4648u;
    {
        const bool branch_taken_0x3d4648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4648u;
        // 0x3d464c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4648) {
            ctx->pc = 0x3D465Cu;
            goto label_3d465c;
        }
    }
    ctx->pc = 0x3D4650u;
label_3d4650:
    // 0x3d4650: 0xc103684  jal         func_40DA10
label_3d4654:
    if (ctx->pc == 0x3D4654u) {
        ctx->pc = 0x3D4658u;
        goto label_3d4658;
    }
    ctx->pc = 0x3D4650u;
    SET_GPR_U32(ctx, 31, 0x3D4658u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D4650u, 0x3D4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4658u;
label_3d4658:
    // 0x3d4658: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d4658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3d465c:
    // 0x3d465c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3d4660:
    // 0x3d4660: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3d4660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3d4664:
    // 0x3d4664: 0x2450b298  addiu       $s0, $v0, -0x4D68
    ctx->pc = 0x3d4664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3d4668:
    // 0x3d4668: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3d4668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3d466c:
    // 0x3d466c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3d466cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3d4670:
    // 0x3d4670: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3d4674:
    if (ctx->pc == 0x3D4674u) {
        ctx->pc = 0x3D4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4670u;
        // 0x3d4674: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4678u;
        goto label_3d4678;
    }
    ctx->pc = 0x3D4670u;
    {
        const bool branch_taken_0x3d4670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4670u;
        // 0x3d4674: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4670) {
            ctx->pc = 0x3D4688u;
            goto label_3d4688;
        }
    }
    ctx->pc = 0x3D4678u;
label_3d4678:
    // 0x3d4678: 0xc1036d0  jal         func_40DB40
label_3d467c:
    if (ctx->pc == 0x3D467Cu) {
        ctx->pc = 0x3D4680u;
        goto label_3d4680;
    }
    ctx->pc = 0x3D4678u;
    SET_GPR_U32(ctx, 31, 0x3D4680u);
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3D4678u, 0x3D4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4680u;
label_3d4680:
    // 0x3d4680: 0xc103684  jal         func_40DA10
label_3d4684:
    if (ctx->pc == 0x3D4684u) {
        ctx->pc = 0x3D4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4680u;
        // 0x3d4684: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4688u;
        goto label_3d4688;
    }
    ctx->pc = 0x3D4680u;
    SET_GPR_U32(ctx, 31, 0x3D4688u);
    ctx->pc = 0x3D4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4680u;
    // 0x3d4684: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D4680u, 0x3D4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4688u;
label_3d4688:
    // 0x3d4688: 0x26a2b1e0  addiu       $v0, $s5, -0x4E20
    ctx->pc = 0x3d4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947296));
label_3d468c:
    // 0x3d468c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3d468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3d4690:
    // 0x3d4690: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3d4690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d4694:
    // 0x3d4694: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d4698:
    // 0x3d4698: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x3d4698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_3d469c:
    // 0x3d469c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3d469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3d46a0:
    // 0x3d46a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d46a4:
    // 0x3d46a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3d46a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d46a8:
    // 0x3d46a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d46ac:
    // 0x3d46ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3d46acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d46b0:
    // 0x3d46b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d46b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d46b4:
    // 0x3d46b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3d46b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d46b8:
    // 0x3d46b8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3d46b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d46bc:
    // 0x3d46bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d46bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d46c0:
    // 0x3d46c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d46c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d46c4:
    // 0x3d46c4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3d46c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d46c8:
    // 0x3d46c8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3d46c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d46cc:
    // 0x3d46cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d46ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d46d0:
    // 0x3d46d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3d46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3d46d4:
    // 0x3d46d4: 0x3e00008  jr          $ra
label_3d46d8:
    if (ctx->pc == 0x3D46D8u) {
        ctx->pc = 0x3D46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46D4u;
        // 0x3d46d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46DCu;
        goto label_3d46dc;
    }
    ctx->pc = 0x3D46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46D4u;
        // 0x3d46d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D46D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D46DCu;
label_3d46dc:
    // 0x3d46dc: 0x0  nop
    ctx->pc = 0x3d46dcu;
    // NOP
    ctx->pc = 0x3d46e0u;
}
