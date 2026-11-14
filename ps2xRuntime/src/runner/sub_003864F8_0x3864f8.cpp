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

// Function: sub_003864F8
// Address: 0x3864f8 - 0x386680
void sub_003864F8_0x3864f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003864F8_0x3864f8");
#endif

    switch (ctx->pc) {
        case 0x386598u: goto label_386598;
        case 0x3865b4u: goto label_3865b4;
        case 0x386634u: goto label_386634;
        case 0x386654u: goto label_386654;
        default: break;
    }

    ctx->pc = 0x3864f8u;

label_3864f8:
    // 0x3864f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3864f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3864fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3864fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x386500: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x386500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x386504: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x386504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x386508: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x386508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38650c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x386510: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x386510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386514: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x386514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x386518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38651c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x38651cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x386520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x386520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x386524: 0x441001f  bgez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x386524u;
    {
        const bool branch_taken_0x386524 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386524u;
        // 0x386528: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386524) {
            ctx->pc = 0x3865A4u;
            goto label_3865a4;
        }
    }
    ctx->pc = 0x38652Cu;
    // 0x38652c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x38652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x386530: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x386530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x386534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x386534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x386538: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x386538u;
    {
        const bool branch_taken_0x386538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386538u;
        // 0x38653c: 0x2410002c  addiu       $s0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386538) {
            ctx->pc = 0x38658Cu;
            goto label_38658c;
        }
    }
    ctx->pc = 0x386540u;
    // 0x386540: 0x94a40082  lhu         $a0, 0x82($a1)
    ctx->pc = 0x386540u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x386544: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x386544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x386548: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x386548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x38654c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x38654cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x386550: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x386550u;
    {
        const bool branch_taken_0x386550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386550u;
        // 0x386554: 0x2450002c  addiu       $s0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386550) {
            ctx->pc = 0x386560u;
            goto label_386560;
        }
    }
    ctx->pc = 0x386558u;
    // 0x386558: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x386558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38655c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38655cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_386560:
    // 0x386560: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x386560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x386564: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386564u;
    {
        const bool branch_taken_0x386564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386564u;
        // 0x386568: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386564) {
            ctx->pc = 0x386570u;
            goto label_386570;
        }
    }
    ctx->pc = 0x38656Cu;
    // 0x38656c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38656cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_386570:
    // 0x386570: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x386570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x386574: 0x94a30084  lhu         $v1, 0x84($a1)
    ctx->pc = 0x386574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x386578: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x386578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x38657c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x38657cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x386580: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x386580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x386584: 0xd08021  addu        $s0, $a2, $s0
    ctx->pc = 0x386584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x386588: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38658c:
    // 0x38658c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38658cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x386590: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x386590u;
    SET_GPR_U32(ctx, 31, 0x386598u);
    ctx->pc = 0x386594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386590u;
    // 0x386594: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x386590u, 0x386598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386598u;
label_386598:
    // 0x386598: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x386598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38659c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38659Cu;
    {
        const bool branch_taken_0x38659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38659Cu;
        // 0x3865a0: 0x24510048  addiu       $s1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38659c) {
            ctx->pc = 0x3865B8u;
            goto label_3865b8;
        }
    }
    ctx->pc = 0x3865A4u;
label_3865a4:
    // 0x3865a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3865a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3865a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865ac: 0xc0e193e  jal         func_3864F8
    ctx->pc = 0x3865ACu;
    SET_GPR_U32(ctx, 31, 0x3865B4u);
    ctx->pc = 0x3865B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3865ACu;
    // 0x3865b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864F8u;
    goto label_3864f8;
    ctx->pc = 0x3865B4u;
label_3865b4:
    // 0x3865b4: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x3865b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3865b8:
    // 0x3865b8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3865b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3865bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3865bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3865c0: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3865C0u;
    {
        const bool branch_taken_0x3865c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3865C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865C0u;
        // 0x3865c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865c0) {
            ctx->pc = 0x386648u;
            goto label_386648;
        }
    }
    ctx->pc = 0x3865C8u;
    // 0x3865c8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3865cc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3865ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3865d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3865d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3865d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3865D4u;
    {
        const bool branch_taken_0x3865d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865D4u;
        // 0x3865d8: 0x2410002c  addiu       $s0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865d4) {
            ctx->pc = 0x386628u;
            goto label_386628;
        }
    }
    ctx->pc = 0x3865DCu;
    // 0x3865dc: 0x94a40082  lhu         $a0, 0x82($a1)
    ctx->pc = 0x3865dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x3865e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3865e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3865e4: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x3865e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3865e8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3865e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3865ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3865ECu;
    {
        const bool branch_taken_0x3865ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865ECu;
        // 0x3865f0: 0x2450002c  addiu       $s0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865ec) {
            ctx->pc = 0x3865FCu;
            goto label_3865fc;
        }
    }
    ctx->pc = 0x3865F4u;
    // 0x3865f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3865f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3865f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3865fc:
    // 0x3865fc: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x3865fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x386600: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386600u;
    {
        const bool branch_taken_0x386600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386600u;
        // 0x386604: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386600) {
            ctx->pc = 0x38660Cu;
            goto label_38660c;
        }
    }
    ctx->pc = 0x386608u;
    // 0x386608: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x386608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38660c:
    // 0x38660c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x38660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x386610: 0x94a30084  lhu         $v1, 0x84($a1)
    ctx->pc = 0x386610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x386614: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x386614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x386618: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x386618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x38661c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38661cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x386620: 0xd08021  addu        $s0, $a2, $s0
    ctx->pc = 0x386620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x386624: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x386624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_386628:
    // 0x386628: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x386628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38662c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38662Cu;
    SET_GPR_U32(ctx, 31, 0x386634u);
    ctx->pc = 0x386630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38662Cu;
    // 0x386630: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38662Cu, 0x386634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386634u;
label_386634:
    // 0x386634: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x386634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x386638: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x386638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x38663c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386640: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x386640u;
    {
        const bool branch_taken_0x386640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386640u;
        // 0x386644: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386640) {
            ctx->pc = 0x38665Cu;
            goto label_38665c;
        }
    }
    ctx->pc = 0x386648u;
label_386648:
    // 0x386648: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x386648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38664c: 0xc0e193e  jal         func_3864F8
    ctx->pc = 0x38664Cu;
    SET_GPR_U32(ctx, 31, 0x386654u);
    ctx->pc = 0x386650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38664Cu;
    // 0x386650: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864F8u;
    goto label_3864f8;
    ctx->pc = 0x386654u;
label_386654:
    // 0x386654: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x386654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x386658: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x386658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38665c:
    // 0x38665c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38665cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386660: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x386660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x386664: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x386664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x386668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38666c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38666cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386670: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x386670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386678: 0x3e00008  jr          $ra
    ctx->pc = 0x386678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386678u;
        // 0x38667c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386680u;
}
