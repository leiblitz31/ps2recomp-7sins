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

// Function: sub_00349950
// Address: 0x349950 - 0x349a88
void sub_00349950_0x349950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349950_0x349950");
#endif

    switch (ctx->pc) {
        case 0x349950u: goto label_349950;
        case 0x349954u: goto label_349954;
        case 0x349958u: goto label_349958;
        case 0x34995cu: goto label_34995c;
        case 0x349960u: goto label_349960;
        case 0x349964u: goto label_349964;
        case 0x349968u: goto label_349968;
        case 0x34996cu: goto label_34996c;
        case 0x349970u: goto label_349970;
        case 0x349974u: goto label_349974;
        case 0x349978u: goto label_349978;
        case 0x34997cu: goto label_34997c;
        case 0x349980u: goto label_349980;
        case 0x349984u: goto label_349984;
        case 0x349988u: goto label_349988;
        case 0x34998cu: goto label_34998c;
        case 0x349990u: goto label_349990;
        case 0x349994u: goto label_349994;
        case 0x349998u: goto label_349998;
        case 0x34999cu: goto label_34999c;
        case 0x3499a0u: goto label_3499a0;
        case 0x3499a4u: goto label_3499a4;
        case 0x3499a8u: goto label_3499a8;
        case 0x3499acu: goto label_3499ac;
        case 0x3499b0u: goto label_3499b0;
        case 0x3499b4u: goto label_3499b4;
        case 0x3499b8u: goto label_3499b8;
        case 0x3499bcu: goto label_3499bc;
        case 0x3499c0u: goto label_3499c0;
        case 0x3499c4u: goto label_3499c4;
        case 0x3499c8u: goto label_3499c8;
        case 0x3499ccu: goto label_3499cc;
        case 0x3499d0u: goto label_3499d0;
        case 0x3499d4u: goto label_3499d4;
        case 0x3499d8u: goto label_3499d8;
        case 0x3499dcu: goto label_3499dc;
        case 0x3499e0u: goto label_3499e0;
        case 0x3499e4u: goto label_3499e4;
        case 0x3499e8u: goto label_3499e8;
        case 0x3499ecu: goto label_3499ec;
        case 0x3499f0u: goto label_3499f0;
        case 0x3499f4u: goto label_3499f4;
        case 0x3499f8u: goto label_3499f8;
        case 0x3499fcu: goto label_3499fc;
        case 0x349a00u: goto label_349a00;
        case 0x349a04u: goto label_349a04;
        case 0x349a08u: goto label_349a08;
        case 0x349a0cu: goto label_349a0c;
        case 0x349a10u: goto label_349a10;
        case 0x349a14u: goto label_349a14;
        case 0x349a18u: goto label_349a18;
        case 0x349a1cu: goto label_349a1c;
        case 0x349a20u: goto label_349a20;
        case 0x349a24u: goto label_349a24;
        case 0x349a28u: goto label_349a28;
        case 0x349a2cu: goto label_349a2c;
        case 0x349a30u: goto label_349a30;
        case 0x349a34u: goto label_349a34;
        case 0x349a38u: goto label_349a38;
        case 0x349a3cu: goto label_349a3c;
        case 0x349a40u: goto label_349a40;
        case 0x349a44u: goto label_349a44;
        case 0x349a48u: goto label_349a48;
        case 0x349a4cu: goto label_349a4c;
        case 0x349a50u: goto label_349a50;
        case 0x349a54u: goto label_349a54;
        case 0x349a58u: goto label_349a58;
        case 0x349a5cu: goto label_349a5c;
        case 0x349a60u: goto label_349a60;
        case 0x349a64u: goto label_349a64;
        case 0x349a68u: goto label_349a68;
        case 0x349a6cu: goto label_349a6c;
        case 0x349a70u: goto label_349a70;
        case 0x349a74u: goto label_349a74;
        case 0x349a78u: goto label_349a78;
        case 0x349a7cu: goto label_349a7c;
        case 0x349a80u: goto label_349a80;
        case 0x349a84u: goto label_349a84;
        default: break;
    }

    ctx->pc = 0x349950u;

label_349950:
    // 0x349950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x349950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_349954:
    // 0x349954: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_349958:
    // 0x349958: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x349958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_34995c:
    // 0x34995c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x34995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_349960:
    // 0x349960: 0x2450c2c8  addiu       $s0, $v0, -0x3D38
    ctx->pc = 0x349960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_349964:
    // 0x349964: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x349964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_349968:
    // 0x349968: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34996c:
    // 0x34996c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x34996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_349970:
    // 0x349970: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x349970u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349974:
    // 0x349974: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x349974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_349978:
    // 0x349978: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x349978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_34997c:
    // 0x34997c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x34997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_349980:
    // 0x349980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349984:
    // 0x349984: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x349984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_349988:
    // 0x349988: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_34998c:
    // 0x34998c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_349990:
    // 0x349990: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_349994:
    if (ctx->pc == 0x349994u) {
        ctx->pc = 0x349994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349990u;
        // 0x349994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349998u;
        goto label_349998;
    }
    ctx->pc = 0x349990u;
    {
        const bool branch_taken_0x349990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349990u;
        // 0x349994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349990) {
            ctx->pc = 0x349A3Cu;
            goto label_349a3c;
        }
    }
    ctx->pc = 0x349998u;
label_349998:
    // 0x349998: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x349998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_34999c:
    // 0x34999c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3499a0:
    // 0x3499a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3499a4:
    if (ctx->pc == 0x3499A4u) {
        ctx->pc = 0x3499A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499A0u;
        // 0x3499a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3499A8u;
        goto label_3499a8;
    }
    ctx->pc = 0x3499A0u;
    {
        const bool branch_taken_0x3499a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3499a0) {
            ctx->pc = 0x3499A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3499A0u;
            // 0x3499a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3499B4u;
            goto label_3499b4;
        }
    }
    ctx->pc = 0x3499A8u;
label_3499a8:
    // 0x3499a8: 0xc0e1fec  jal         func_387FB0
label_3499ac:
    if (ctx->pc == 0x3499ACu) {
        ctx->pc = 0x3499ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499A8u;
        // 0x3499ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3499B0u;
        goto label_3499b0;
    }
    ctx->pc = 0x3499A8u;
    SET_GPR_U32(ctx, 31, 0x3499B0u);
    ctx->pc = 0x3499ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499A8u;
    // 0x3499ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387FB0u, 0x3499A8u, 0x3499B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499B0u;
label_3499b0:
    // 0x3499b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3499b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3499b4:
    // 0x3499b4: 0x2654001c  addiu       $s4, $s2, 0x1C
    ctx->pc = 0x3499b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_3499b8:
    // 0x3499b8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x3499b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_3499bc:
    // 0x3499bc: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3499bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3499c0:
    // 0x3499c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3499c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3499c4:
    // 0x3499c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3499c8:
    // 0x3499c8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3499cc:
    if (ctx->pc == 0x3499CCu) {
        ctx->pc = 0x3499CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499C8u;
        // 0x3499cc: 0x24751a38  addiu       $s5, $v1, 0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3499D0u;
        goto label_3499d0;
    }
    ctx->pc = 0x3499C8u;
    {
        const bool branch_taken_0x3499c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3499CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499C8u;
        // 0x3499cc: 0x24751a38  addiu       $s5, $v1, 0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499c8) {
            ctx->pc = 0x349A04u;
            goto label_349a04;
        }
    }
    ctx->pc = 0x3499D0u;
label_3499d0:
    // 0x3499d0: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x3499d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3499d4:
    // 0x3499d4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3499d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3499d8:
    // 0x3499d8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3499d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3499dc:
    // 0x3499dc: 0x0  nop
    ctx->pc = 0x3499dcu;
    // NOP
label_3499e0:
    // 0x3499e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3499e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3499e4:
    // 0x3499e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3499e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3499e8:
    // 0x3499e8: 0x2a0f809  jalr        $s5
label_3499ec:
    if (ctx->pc == 0x3499ECu) {
        ctx->pc = 0x3499ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499E8u;
        // 0x3499ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3499F0u;
        goto label_3499f0;
    }
    ctx->pc = 0x3499E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3499F0u);
        ctx->pc = 0x3499ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499E8u;
        // 0x3499ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3499E8u, 0x3499F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3499F0u;
label_3499f0:
    // 0x3499f0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_3499f4:
    if (ctx->pc == 0x3499F4u) {
        ctx->pc = 0x3499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499F0u;
        // 0x3499f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3499F8u;
        goto label_3499f8;
    }
    ctx->pc = 0x3499F0u;
    {
        const bool branch_taken_0x3499f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499F0u;
        // 0x3499f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499f0) {
            ctx->pc = 0x349A08u;
            goto label_349a08;
        }
    }
    ctx->pc = 0x3499F8u;
label_3499f8:
    // 0x3499f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3499f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3499fc:
    // 0x3499fc: 0x5613fff8  bnel        $s0, $s3, . + 4 + (-0x8 << 2)
label_349a00:
    if (ctx->pc == 0x349A00u) {
        ctx->pc = 0x349A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499FCu;
        // 0x349a00: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349A04u;
        goto label_349a04;
    }
    ctx->pc = 0x3499FCu;
    {
        const bool branch_taken_0x3499fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x3499fc) {
            ctx->pc = 0x349A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3499FCu;
            // 0x349a00: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3499E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3499e0;
        }
    }
    ctx->pc = 0x349A04u;
label_349a04:
    // 0x349a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_349a08:
    // 0x349a08: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x349a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_349a0c:
    // 0x349a0c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x349a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_349a10:
    // 0x349a10: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x349a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_349a14:
    // 0x349a14: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x349a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_349a18:
    // 0x349a18: 0x6a85000f  ldl         $a1, 0xF($s4)
    ctx->pc = 0x349a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_349a1c:
    // 0x349a1c: 0x6e850008  ldr         $a1, 0x8($s4)
    ctx->pc = 0x349a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_349a20:
    // 0x349a20: 0xb062000b  sdl         $v0, 0xB($v1)
    ctx->pc = 0x349a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_349a24:
    // 0x349a24: 0xb4620004  sdr         $v0, 0x4($v1)
    ctx->pc = 0x349a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_349a28:
    // 0x349a28: 0xb0650013  sdl         $a1, 0x13($v1)
    ctx->pc = 0x349a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_349a2c:
    // 0x349a2c: 0xb465000c  sdr         $a1, 0xC($v1)
    ctx->pc = 0x349a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_349a30:
    // 0x349a30: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x349a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_349a34:
    // 0x349a34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x349a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_349a38:
    // 0x349a38: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x349a38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_349a3c:
    // 0x349a3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x349a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_349a40:
    // 0x349a40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x349a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349a44:
    // 0x349a44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x349a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_349a48:
    // 0x349a48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x349a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_349a4c:
    // 0x349a4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x349a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_349a50:
    // 0x349a50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x349a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_349a54:
    // 0x349a54: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x349a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_349a58:
    // 0x349a58: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x349a58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349a5c:
    // 0x349a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349a60:
    // 0x349a60: 0x3e00008  jr          $ra
label_349a64:
    if (ctx->pc == 0x349A64u) {
        ctx->pc = 0x349A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A60u;
        // 0x349a64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349A68u;
        goto label_349a68;
    }
    ctx->pc = 0x349A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A60u;
        // 0x349a64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A68u;
label_349a68:
    // 0x349a68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_349a6c:
    // 0x349a6c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x349a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_349a70:
    // 0x349a70: 0x8c43c2cc  lw          $v1, -0x3D34($v0)
    ctx->pc = 0x349a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951628)));
label_349a74:
    // 0x349a74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x349a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349a78:
    // 0x349a78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x349a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_349a7c:
    // 0x349a7c: 0x3e00008  jr          $ra
label_349a80:
    if (ctx->pc == 0x349A80u) {
        ctx->pc = 0x349A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A7Cu;
        // 0x349a80: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349A84u;
        goto label_349a84;
    }
    ctx->pc = 0x349A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A7Cu;
        // 0x349a80: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A84u;
label_349a84:
    // 0x349a84: 0x0  nop
    ctx->pc = 0x349a84u;
    // NOP
    ctx->pc = 0x349a88u;
}
