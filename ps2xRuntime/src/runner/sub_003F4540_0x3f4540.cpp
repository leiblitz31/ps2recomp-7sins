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

// Function: sub_003F4540
// Address: 0x3f4540 - 0x3f4a40
void sub_003F4540_0x3f4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4540_0x3f4540");
#endif

    switch (ctx->pc) {
        case 0x3f458cu: goto label_3f458c;
        case 0x3f45b4u: goto label_3f45b4;
        case 0x3f45c8u: goto label_3f45c8;
        case 0x3f45e0u: goto label_3f45e0;
        case 0x3f45f0u: goto label_3f45f0;
        case 0x3f4614u: goto label_3f4614;
        case 0x3f4624u: goto label_3f4624;
        case 0x3f462cu: goto label_3f462c;
        case 0x3f4670u: goto label_3f4670;
        case 0x3f46a4u: goto label_3f46a4;
        case 0x3f46b8u: goto label_3f46b8;
        case 0x3f46d0u: goto label_3f46d0;
        case 0x3f46e0u: goto label_3f46e0;
        case 0x3f4704u: goto label_3f4704;
        case 0x3f4714u: goto label_3f4714;
        case 0x3f471cu: goto label_3f471c;
        case 0x3f4760u: goto label_3f4760;
        case 0x3f4774u: goto label_3f4774;
        case 0x3f4784u: goto label_3f4784;
        case 0x3f47a0u: goto label_3f47a0;
        case 0x3f47bcu: goto label_3f47bc;
        case 0x3f47d0u: goto label_3f47d0;
        case 0x3f47e8u: goto label_3f47e8;
        case 0x3f47f8u: goto label_3f47f8;
        case 0x3f481cu: goto label_3f481c;
        case 0x3f482cu: goto label_3f482c;
        case 0x3f4834u: goto label_3f4834;
        case 0x3f487cu: goto label_3f487c;
        case 0x3f4890u: goto label_3f4890;
        case 0x3f48a4u: goto label_3f48a4;
        case 0x3f48c8u: goto label_3f48c8;
        case 0x3f4900u: goto label_3f4900;
        case 0x3f4910u: goto label_3f4910;
        case 0x3f4934u: goto label_3f4934;
        case 0x3f4954u: goto label_3f4954;
        case 0x3f497cu: goto label_3f497c;
        case 0x3f498cu: goto label_3f498c;
        case 0x3f49e0u: goto label_3f49e0;
        case 0x3f49f0u: goto label_3f49f0;
        case 0x3f4a08u: goto label_3f4a08;
        case 0x3f4a14u: goto label_3f4a14;
        default: break;
    }

    ctx->pc = 0x3f4540u;

    // 0x3f4540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3f4544: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3f4544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3f4548: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3f4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3f454c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f454cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4550: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3f4550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3f4554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f4554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4558: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3f4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3f455c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3f455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3f4560: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f4560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3f4564: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3f4564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3f4568: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3f4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3f456c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f4570: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f4570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f4574: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f4574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f4578: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4578u;
    {
        const bool branch_taken_0x3f4578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4578u;
        // 0x3f457c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4578) {
            ctx->pc = 0x3F4594u;
            goto label_3f4594;
        }
    }
    ctx->pc = 0x3F4580u;
    // 0x3f4580: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4584: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F4584u;
    SET_GPR_U32(ctx, 31, 0x3F458Cu);
    ctx->pc = 0x3F4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4584u;
    // 0x3f4588: 0x24a5ef68  addiu       $a1, $a1, -0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F4584u, 0x3F458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F458Cu;
label_3f458c:
    // 0x3f458c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3F458Cu;
    {
        const bool branch_taken_0x3f458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F458Cu;
        // 0x3f4590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f458c) {
            ctx->pc = 0x3F477Cu;
            goto label_3f477c;
        }
    }
    ctx->pc = 0x3F4594u;
label_3f4594:
    // 0x3f4594: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f4594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f4598: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F4598u;
    {
        const bool branch_taken_0x3f4598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4598u;
        // 0x3f459c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4598) {
            ctx->pc = 0x3F4658u;
            goto label_3f4658;
        }
    }
    ctx->pc = 0x3F45A0u;
    // 0x3f45a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f45a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f45a4: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f45a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f45a8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f45a8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f45ac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F45ACu;
    SET_GPR_U32(ctx, 31, 0x3F45B4u);
    ctx->pc = 0x3F45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F45ACu;
    // 0x3f45b0: 0x24a5ef88  addiu       $a1, $a1, -0x1078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F45ACu, 0x3F45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F45B4u;
label_3f45b4:
    // 0x3f45b4: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f45b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f45b8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f45b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f45bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F45BCu;
    {
        const bool branch_taken_0x3f45bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f45bc) {
            ctx->pc = 0x3F45FCu;
            goto label_3f45fc;
        }
    }
    ctx->pc = 0x3F45C4u;
    // 0x3f45c4: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f45c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f45c8:
    // 0x3f45c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f45c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f45cc: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f45ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f45d0: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f45d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f45d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f45d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f45d8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F45D8u;
    SET_GPR_U32(ctx, 31, 0x3F45E0u);
    ctx->pc = 0x3F45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F45D8u;
    // 0x3f45dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F45D8u, 0x3F45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F45E0u;
label_3f45e0:
    // 0x3f45e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f45e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f45e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f45e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f45e8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F45E8u;
    SET_GPR_U32(ctx, 31, 0x3F45F0u);
    ctx->pc = 0x3F45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F45E8u;
    // 0x3f45ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F45E8u, 0x3F45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F45F0u;
label_3f45f0:
    // 0x3f45f0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f45f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f45f4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F45F4u;
    {
        const bool branch_taken_0x3f45f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f45f4) {
            ctx->pc = 0x3F45F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F45F4u;
            // 0x3f45f8: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F45C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f45c8;
        }
    }
    ctx->pc = 0x3F45FCu;
label_3f45fc:
    // 0x3f45fc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F45FCu;
    {
        const bool branch_taken_0x3f45fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F45FCu;
        // 0x3f4600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f45fc) {
            ctx->pc = 0x3F4624u;
            goto label_3f4624;
        }
    }
    ctx->pc = 0x3F4604u;
    // 0x3f4604: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f4604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f4608: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f460c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F460Cu;
    SET_GPR_U32(ctx, 31, 0x3F4614u);
    ctx->pc = 0x3F4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F460Cu;
    // 0x3f4610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F460Cu, 0x3F4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4614u;
label_3f4614:
    // 0x3f4614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4618: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f461c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F461Cu;
    SET_GPR_U32(ctx, 31, 0x3F4624u);
    ctx->pc = 0x3F4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F461Cu;
    // 0x3f4620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F461Cu, 0x3F4624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4624u;
label_3f4624:
    // 0x3f4624: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F4624u;
    SET_GPR_U32(ctx, 31, 0x3F462Cu);
    ctx->pc = 0x3F4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4624u;
    // 0x3f4628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F4624u, 0x3F462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F462Cu;
label_3f462c:
    // 0x3f462c: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x3F462Cu;
    {
        const bool branch_taken_0x3f462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F462Cu;
        // 0x3f4630: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f462c) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F4634u;
    // 0x3f4634: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f4634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f4638: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f463c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F463Cu;
    {
        const bool branch_taken_0x3f463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F463Cu;
        // 0x3f4640: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f463c) {
            ctx->pc = 0x3F4734u;
            goto label_3f4734;
        }
    }
    ctx->pc = 0x3F4644u;
    // 0x3f4644: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4648: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3F4648u;
    {
        const bool branch_taken_0x3f4648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4648u;
        // 0x3f464c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4648) {
            ctx->pc = 0x3F4754u;
            goto label_3f4754;
        }
    }
    ctx->pc = 0x3F4650u;
    // 0x3f4650: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3F4650u;
    {
        const bool branch_taken_0x3f4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4650u;
        // 0x3f4654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4650) {
            ctx->pc = 0x3F476Cu;
            goto label_3f476c;
        }
    }
    ctx->pc = 0x3F4658u;
label_3f4658:
    // 0x3f4658: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f4658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f465c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F465Cu;
    {
        const bool branch_taken_0x3f465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F465Cu;
        // 0x3f4660: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f465c) {
            ctx->pc = 0x3F4678u;
            goto label_3f4678;
        }
    }
    ctx->pc = 0x3F4664u;
    // 0x3f4664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4668: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4668u;
    SET_GPR_U32(ctx, 31, 0x3F4670u);
    ctx->pc = 0x3F466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4668u;
    // 0x3f466c: 0x24a5efa0  addiu       $a1, $a1, -0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4668u, 0x3F4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4670u;
label_3f4670:
    // 0x3f4670: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3F4670u;
    {
        const bool branch_taken_0x3f4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4670u;
        // 0x3f4674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4670) {
            ctx->pc = 0x3F477Cu;
            goto label_3f477c;
        }
    }
    ctx->pc = 0x3F4678u;
label_3f4678:
    // 0x3f4678: 0x12e00040  beqz        $s7, . + 4 + (0x40 << 2)
    ctx->pc = 0x3F4678u;
    {
        const bool branch_taken_0x3f4678 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4678u;
        // 0x3f467c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4678) {
            ctx->pc = 0x3F477Cu;
            goto label_3f477c;
        }
    }
    ctx->pc = 0x3F4680u;
    // 0x3f4680: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3f4680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3f4684: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3f4684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3f4688: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F4688u;
    {
        const bool branch_taken_0x3f4688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4688u;
        // 0x3f468c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4688) {
            ctx->pc = 0x3F477Cu;
            goto label_3f477c;
        }
    }
    ctx->pc = 0x3F4690u;
    // 0x3f4690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4694: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f4694u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f4698: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f4698u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f469c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F469Cu;
    SET_GPR_U32(ctx, 31, 0x3F46A4u);
    ctx->pc = 0x3F46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F469Cu;
    // 0x3f46a0: 0x24a5efb8  addiu       $a1, $a1, -0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F469Cu, 0x3F46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F46A4u;
label_3f46a4:
    // 0x3f46a4: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f46a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f46a8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f46a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f46ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F46ACu;
    {
        const bool branch_taken_0x3f46ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f46ac) {
            ctx->pc = 0x3F46ECu;
            goto label_3f46ec;
        }
    }
    ctx->pc = 0x3F46B4u;
    // 0x3f46b4: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f46b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f46b8:
    // 0x3f46b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f46b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f46bc: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f46bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f46c0: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f46c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f46c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f46c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f46c8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F46C8u;
    SET_GPR_U32(ctx, 31, 0x3F46D0u);
    ctx->pc = 0x3F46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F46C8u;
    // 0x3f46cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F46C8u, 0x3F46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F46D0u;
label_3f46d0:
    // 0x3f46d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f46d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f46d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f46d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f46d8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F46D8u;
    SET_GPR_U32(ctx, 31, 0x3F46E0u);
    ctx->pc = 0x3F46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F46D8u;
    // 0x3f46dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F46D8u, 0x3F46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F46E0u;
label_3f46e0:
    // 0x3f46e0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f46e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f46e4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F46E4u;
    {
        const bool branch_taken_0x3f46e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f46e4) {
            ctx->pc = 0x3F46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F46E4u;
            // 0x3f46e8: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F46B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f46b8;
        }
    }
    ctx->pc = 0x3F46ECu;
label_3f46ec:
    // 0x3f46ec: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F46ECu;
    {
        const bool branch_taken_0x3f46ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46ECu;
        // 0x3f46f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f46ec) {
            ctx->pc = 0x3F4714u;
            goto label_3f4714;
        }
    }
    ctx->pc = 0x3F46F4u;
    // 0x3f46f4: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f46f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f46f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f46f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f46fc: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F46FCu;
    SET_GPR_U32(ctx, 31, 0x3F4704u);
    ctx->pc = 0x3F4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F46FCu;
    // 0x3f4700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F46FCu, 0x3F4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4704u;
label_3f4704:
    // 0x3f4704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4708: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f470c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F470Cu;
    SET_GPR_U32(ctx, 31, 0x3F4714u);
    ctx->pc = 0x3F4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F470Cu;
    // 0x3f4710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F470Cu, 0x3F4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4714u;
label_3f4714:
    // 0x3f4714: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F4714u;
    SET_GPR_U32(ctx, 31, 0x3F471Cu);
    ctx->pc = 0x3F4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4714u;
    // 0x3f4718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F4714u, 0x3F471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F471Cu;
label_3f471c:
    // 0x3f471c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x3F471Cu;
    {
        const bool branch_taken_0x3f471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F471Cu;
        // 0x3f4720: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f471c) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F4724u;
    // 0x3f4724: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f4724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f4728: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f472c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F472Cu;
    {
        const bool branch_taken_0x3f472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F472Cu;
        // 0x3f4730: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f472c) {
            ctx->pc = 0x3F4748u;
            goto label_3f4748;
        }
    }
    ctx->pc = 0x3F4734u;
label_3f4734:
    // 0x3f4734: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f4734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f4738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4738u;
    {
        const bool branch_taken_0x3f4738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4738u;
        // 0x3f473c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4738) {
            ctx->pc = 0x3F4754u;
            goto label_3f4754;
        }
    }
    ctx->pc = 0x3F4740u;
    // 0x3f4740: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F4740u;
    {
        const bool branch_taken_0x3f4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4740u;
        // 0x3f4744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4740) {
            ctx->pc = 0x3F476Cu;
            goto label_3f476c;
        }
    }
    ctx->pc = 0x3F4748u;
label_3f4748:
    // 0x3f4748: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f474c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F474Cu;
    {
        const bool branch_taken_0x3f474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F474Cu;
        // 0x3f4750: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f474c) {
            ctx->pc = 0x3F4768u;
            goto label_3f4768;
        }
    }
    ctx->pc = 0x3F4754u;
label_3f4754:
    // 0x3f4754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4758: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4758u;
    SET_GPR_U32(ctx, 31, 0x3F4760u);
    ctx->pc = 0x3F475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4758u;
    // 0x3f475c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4758u, 0x3F4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4760u;
label_3f4760:
    // 0x3f4760: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x3F4760u;
    {
        const bool branch_taken_0x3f4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4760u;
        // 0x3f4764: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4760) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F4768u;
label_3f4768:
    // 0x3f4768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f476c:
    // 0x3f476c: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F476Cu;
    SET_GPR_U32(ctx, 31, 0x3F4774u);
    ctx->pc = 0x3F4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F476Cu;
    // 0x3f4770: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F476Cu, 0x3F4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4774u;
label_3f4774:
    // 0x3f4774: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x3F4774u;
    {
        const bool branch_taken_0x3f4774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4774u;
        // 0x3f4778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4774) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F477Cu;
label_3f477c:
    // 0x3f477c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F477Cu;
    SET_GPR_U32(ctx, 31, 0x3F4784u);
    ctx->pc = 0x3F4780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F477Cu;
    // 0x3f4780: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F477Cu, 0x3F4784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4784u;
label_3f4784:
    // 0x3f4784: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x3f4784u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f4788: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3f4788u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3f478c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f478cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4794: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4798: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4798u;
    SET_GPR_U32(ctx, 31, 0x3F47A0u);
    ctx->pc = 0x3F479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4798u;
    // 0x3f479c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4798u, 0x3F47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47A0u;
label_3f47a0:
    // 0x3f47a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f47a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47a8: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x3f47a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f47ac: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f47acu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f47b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f47b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47b4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F47B4u;
    SET_GPR_U32(ctx, 31, 0x3F47BCu);
    ctx->pc = 0x3F47B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47B4u;
    // 0x3f47b8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F47B4u, 0x3F47BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47BCu;
label_3f47bc:
    // 0x3f47bc: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f47bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f47c0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f47c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f47c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F47C4u;
    {
        const bool branch_taken_0x3f47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f47c4) {
            ctx->pc = 0x3F4804u;
            goto label_3f4804;
        }
    }
    ctx->pc = 0x3F47CCu;
    // 0x3f47cc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f47ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f47d0:
    // 0x3f47d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f47d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47d4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f47d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f47d8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f47d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f47dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f47dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47e0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F47E0u;
    SET_GPR_U32(ctx, 31, 0x3F47E8u);
    ctx->pc = 0x3F47E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47E0u;
    // 0x3f47e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F47E0u, 0x3F47E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47E8u;
label_3f47e8:
    // 0x3f47e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f47e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f47ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47f0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F47F0u;
    SET_GPR_U32(ctx, 31, 0x3F47F8u);
    ctx->pc = 0x3F47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47F0u;
    // 0x3f47f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F47F0u, 0x3F47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47F8u;
label_3f47f8:
    // 0x3f47f8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f47f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f47fc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F47FCu;
    {
        const bool branch_taken_0x3f47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f47fc) {
            ctx->pc = 0x3F4800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F47FCu;
            // 0x3f4800: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F47D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f47d0;
        }
    }
    ctx->pc = 0x3F4804u;
label_3f4804:
    // 0x3f4804: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4804u;
    {
        const bool branch_taken_0x3f4804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4804u;
        // 0x3f4808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4804) {
            ctx->pc = 0x3F482Cu;
            goto label_3f482c;
        }
    }
    ctx->pc = 0x3F480Cu;
    // 0x3f480c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f480cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f4810: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4814: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4814u;
    SET_GPR_U32(ctx, 31, 0x3F481Cu);
    ctx->pc = 0x3F4818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4814u;
    // 0x3f4818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4814u, 0x3F481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F481Cu;
label_3f481c:
    // 0x3f481c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4820: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4824: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4824u;
    SET_GPR_U32(ctx, 31, 0x3F482Cu);
    ctx->pc = 0x3F4828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4824u;
    // 0x3f4828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4824u, 0x3F482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F482Cu;
label_3f482c:
    // 0x3f482c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F482Cu;
    SET_GPR_U32(ctx, 31, 0x3F4834u);
    ctx->pc = 0x3F4830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F482Cu;
    // 0x3f4830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F482Cu, 0x3F4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4834u;
label_3f4834:
    // 0x3f4834: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F4834u;
    {
        const bool branch_taken_0x3f4834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4834u;
        // 0x3f4838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4834) {
            ctx->pc = 0x3F4894u;
            goto label_3f4894;
        }
    }
    ctx->pc = 0x3F483Cu;
    // 0x3f483c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f483cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f4840: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f4844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4844u;
    {
        const bool branch_taken_0x3f4844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4844u;
        // 0x3f4848: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4844) {
            ctx->pc = 0x3F4860u;
            goto label_3f4860;
        }
    }
    ctx->pc = 0x3F484Cu;
    // 0x3f484c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f4850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4850u;
    {
        const bool branch_taken_0x3f4850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4850u;
        // 0x3f4854: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4850) {
            ctx->pc = 0x3F486Cu;
            goto label_3f486c;
        }
    }
    ctx->pc = 0x3F4858u;
    // 0x3f4858: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F4858u;
    {
        const bool branch_taken_0x3f4858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4858u;
        // 0x3f485c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4858) {
            ctx->pc = 0x3F4888u;
            goto label_3f4888;
        }
    }
    ctx->pc = 0x3F4860u;
label_3f4860:
    // 0x3f4860: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4864u;
    {
        const bool branch_taken_0x3f4864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4864u;
        // 0x3f4868: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4864) {
            ctx->pc = 0x3F4884u;
            goto label_3f4884;
        }
    }
    ctx->pc = 0x3F486Cu;
label_3f486c:
    // 0x3f486c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f486cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4874: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4874u;
    SET_GPR_U32(ctx, 31, 0x3F487Cu);
    ctx->pc = 0x3F4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4874u;
    // 0x3f4878: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4874u, 0x3F487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F487Cu;
label_3f487c:
    // 0x3f487c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F487Cu;
    {
        const bool branch_taken_0x3f487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F487Cu;
        // 0x3f4880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f487c) {
            ctx->pc = 0x3F4894u;
            goto label_3f4894;
        }
    }
    ctx->pc = 0x3F4884u;
label_3f4884:
    // 0x3f4884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4888:
    // 0x3f4888: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F4888u;
    SET_GPR_U32(ctx, 31, 0x3F4890u);
    ctx->pc = 0x3F488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4888u;
    // 0x3f488c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F4888u, 0x3F4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4890u;
label_3f4890:
    // 0x3f4890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4894:
    // 0x3f4894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4894u;
    {
        const bool branch_taken_0x3f4894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4894u;
        // 0x3f4898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4894) {
            ctx->pc = 0x3F48ACu;
            goto label_3f48ac;
        }
    }
    ctx->pc = 0x3F489Cu;
    // 0x3f489c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F489Cu;
    SET_GPR_U32(ctx, 31, 0x3F48A4u);
    ctx->pc = 0x3F48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F489Cu;
    // 0x3f48a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F489Cu, 0x3F48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F48A4u;
label_3f48a4:
    // 0x3f48a4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3F48A4u;
    {
        const bool branch_taken_0x3f48a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48A4u;
        // 0x3f48a8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48a4) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F48ACu;
label_3f48ac:
    // 0x3f48ac: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x3f48acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x3f48b0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3f48b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f48b4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f48b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f48b8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x3f48b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f48bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F48BCu;
    {
        const bool branch_taken_0x3f48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48BCu;
        // 0x3f48c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48bc) {
            ctx->pc = 0x3F48E4u;
            goto label_3f48e4;
        }
    }
    ctx->pc = 0x3F48C4u;
    // 0x3f48c4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x3f48c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f48c8:
    // 0x3f48c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f48cc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f48ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f48d0: 0x0  nop
    ctx->pc = 0x3f48d0u;
    // NOP
    // 0x3f48d4: 0x0  nop
    ctx->pc = 0x3f48d4u;
    // NOP
    // 0x3f48d8: 0x0  nop
    ctx->pc = 0x3f48d8u;
    // NOP
    // 0x3f48dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F48DCu;
    {
        const bool branch_taken_0x3f48dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48DCu;
        // 0x3f48e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48dc) {
            ctx->pc = 0x3F48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f48c8;
        }
    }
    ctx->pc = 0x3F48E4u;
label_3f48e4:
    // 0x3f48e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f48e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f48e8: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x3f48e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f48ec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3F48ECu;
    {
        const bool branch_taken_0x3f48ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f48ec) {
            ctx->pc = 0x3F48F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F48ECu;
            // 0x3f48f0: 0x92110000  lbu         $s1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4918u;
            goto label_3f4918;
        }
    }
    ctx->pc = 0x3F48F4u;
    // 0x3f48f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f48f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f48f8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F48F8u;
    SET_GPR_U32(ctx, 31, 0x3F4900u);
    ctx->pc = 0x3F48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F48F8u;
    // 0x3f48fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F48F8u, 0x3F4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4900u;
label_3f4900:
    // 0x3f4900: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4908: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4908u;
    SET_GPR_U32(ctx, 31, 0x3F4910u);
    ctx->pc = 0x3F490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4908u;
    // 0x3f490c: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4908u, 0x3F4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4910u;
label_3f4910:
    // 0x3f4910: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3F4910u;
    {
        const bool branch_taken_0x3f4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4910u;
        // 0x3f4914: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4910) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F4918u;
label_3f4918:
    // 0x3f4918: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4918u;
    {
        const bool branch_taken_0x3f4918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4918u;
        // 0x3f491c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4918) {
            ctx->pc = 0x3F4934u;
            goto label_3f4934;
        }
    }
    ctx->pc = 0x3F4920u;
    // 0x3f4920: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4928: 0x24a5efe8  addiu       $a1, $a1, -0x1018
    ctx->pc = 0x3f4928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    // 0x3f492c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F492Cu;
    SET_GPR_U32(ctx, 31, 0x3F4934u);
    ctx->pc = 0x3F4930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F492Cu;
    // 0x3f4930: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F492Cu, 0x3F4934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4934u;
label_3f4934:
    // 0x3f4934: 0x2158023  subu        $s0, $s0, $s5
    ctx->pc = 0x3f4934u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3f4938: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f4938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f493c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3f493cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4940: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f4940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f494c: 0xc0fc88c  jal         func_3F2230
    ctx->pc = 0x3F494Cu;
    SET_GPR_U32(ctx, 31, 0x3F4954u);
    ctx->pc = 0x3F4950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F494Cu;
    // 0x3f4950: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2230u, 0x3F494Cu, 0x3F4954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4954u;
label_3f4954:
    // 0x3f4954: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3f4954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4958: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f4958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f495c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3f495cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3f4960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f4964: 0x3483e  dsrl32      $t1, $v1, 0
    ctx->pc = 0x3f4964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3f4968: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x3f4968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3f496c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F496Cu;
    {
        const bool branch_taken_0x3f496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F496Cu;
        // 0x3f4970: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f496c) {
            ctx->pc = 0x3F4994u;
            goto label_3f4994;
        }
    }
    ctx->pc = 0x3F4974u;
    // 0x3f4974: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4974u;
    SET_GPR_U32(ctx, 31, 0x3F497Cu);
    ctx->pc = 0x3F4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4974u;
    // 0x3f4978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4974u, 0x3F497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F497Cu;
label_3f497c:
    // 0x3f497c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f497cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4984: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4984u;
    SET_GPR_U32(ctx, 31, 0x3F498Cu);
    ctx->pc = 0x3F4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4984u;
    // 0x3f4988: 0x24a5f018  addiu       $a1, $a1, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4984u, 0x3F498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F498Cu;
label_3f498c:
    // 0x3f498c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F498Cu;
    {
        const bool branch_taken_0x3f498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F498Cu;
        // 0x3f4990: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f498c) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F4994u;
label_3f4994:
    // 0x3f4994: 0x2b04021  addu        $t0, $s5, $s0
    ctx->pc = 0x3f4994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x3f4998: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3f4998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f499c: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x3f499cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3f49a0: 0x81040002  lb          $a0, 0x2($t0)
    ctx->pc = 0x3f49a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3f49a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3f49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3f49a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3f49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3f49ac: 0x81050003  lb          $a1, 0x3($t0)
    ctx->pc = 0x3f49acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3f49b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f49b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f49b4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3f49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3f49b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f49b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3f49bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3f49bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3f49c0: 0x49182b  sltu        $v1, $v0, $t1
    ctx->pc = 0x3f49c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3f49c4: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x3f49c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x3f49c8: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x3f49c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f49cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3F49CCu;
    {
        const bool branch_taken_0x3f49cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f49cc) {
            ctx->pc = 0x3F49D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F49CCu;
            // 0x3f49d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F49F8u;
            goto label_3f49f8;
        }
    }
    ctx->pc = 0x3F49D4u;
    // 0x3f49d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f49d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f49d8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F49D8u;
    SET_GPR_U32(ctx, 31, 0x3F49E0u);
    ctx->pc = 0x3F49DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F49D8u;
    // 0x3f49dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F49D8u, 0x3F49E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F49E0u;
label_3f49e0:
    // 0x3f49e0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f49e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f49e8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F49E8u;
    SET_GPR_U32(ctx, 31, 0x3F49F0u);
    ctx->pc = 0x3F49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F49E8u;
    // 0x3f49ec: 0x24a5f048  addiu       $a1, $a1, -0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F49E8u, 0x3F49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F49F0u;
label_3f49f0:
    // 0x3f49f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F49F0u;
    {
        const bool branch_taken_0x3f49f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F49F0u;
        // 0x3f49f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f49f0) {
            ctx->pc = 0x3F4A18u;
            goto label_3f4a18;
        }
    }
    ctx->pc = 0x3F49F8u;
label_3f49f8:
    // 0x3f49f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f49fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f49fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4a00: 0xc0fedf6  jal         func_3FB7D8
    ctx->pc = 0x3F4A00u;
    SET_GPR_U32(ctx, 31, 0x3F4A08u);
    ctx->pc = 0x3F4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4A00u;
    // 0x3f4a04: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB7D8u, 0x3F4A00u, 0x3F4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4A08u;
label_3f4a08:
    // 0x3f4a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4a0c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F4A0Cu;
    SET_GPR_U32(ctx, 31, 0x3F4A14u);
    ctx->pc = 0x3F4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4A0Cu;
    // 0x3f4a10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F4A0Cu, 0x3F4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4A14u;
label_3f4a14:
    // 0x3f4a14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3f4a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f4a18:
    // 0x3f4a18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3f4a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f4a1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3f4a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f4a20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3f4a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f4a24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f4a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4a28: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3f4a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f4a2c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3f4a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f4a30: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3f4a30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4a38: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A38u;
        // 0x3f4a3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4A40u;
}
