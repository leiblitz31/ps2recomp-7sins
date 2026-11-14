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

// Function: sub_00323900
// Address: 0x323900 - 0x323aa0
void sub_00323900_0x323900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323900_0x323900");
#endif

    switch (ctx->pc) {
        case 0x32396cu: goto label_32396c;
        case 0x32398cu: goto label_32398c;
        case 0x323998u: goto label_323998;
        case 0x3239a0u: goto label_3239a0;
        case 0x3239b0u: goto label_3239b0;
        case 0x3239d8u: goto label_3239d8;
        case 0x3239e0u: goto label_3239e0;
        case 0x3239f4u: goto label_3239f4;
        case 0x323a5cu: goto label_323a5c;
        case 0x323a74u: goto label_323a74;
        case 0x323a7cu: goto label_323a7c;
        case 0x323a88u: goto label_323a88;
        default: break;
    }

    ctx->pc = 0x323900u;

    // 0x323900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x323900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x323904: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x323904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x323908: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x323908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x32390c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32390cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323910: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x323910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x323914: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x323914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323918: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x323918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32391c: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x32391cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
    // 0x323920: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x323920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x323924: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x323924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x323928: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x323928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32392c: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x32392Cu;
    {
        const bool branch_taken_0x32392c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x323930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32392Cu;
        // 0x323930: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32392c) {
            ctx->pc = 0x3239F4u;
            goto label_3239f4;
        }
    }
    ctx->pc = 0x323934u;
    // 0x323934: 0x26c2b1e0  addiu       $v0, $s6, -0x4E20
    ctx->pc = 0x323934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947296));
    // 0x323938: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x323938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32393c: 0x32a30004  andi        $v1, $s5, 0x4
    ctx->pc = 0x32393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x323940: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x323940u;
    {
        const bool branch_taken_0x323940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323940u;
        // 0x323944: 0x8c420054  lw          $v0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323940) {
            ctx->pc = 0x323958u;
            goto label_323958;
        }
    }
    ctx->pc = 0x323948u;
    // 0x323948: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x323948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32394c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x32394cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x323950: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x323950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323954: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x323954u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_323958:
    // 0x323958: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x323958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x32395c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323960: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x323960u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x323964: 0xc103642  jal         func_40D908
    ctx->pc = 0x323964u;
    SET_GPR_U32(ctx, 31, 0x32396Cu);
    ctx->pc = 0x323968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323964u;
    // 0x323968: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x323964u, 0x32396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32396Cu;
label_32396c:
    // 0x32396c: 0x321400ff  andi        $s4, $s0, 0xFF
    ctx->pc = 0x32396cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x323970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323974: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x323974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x323978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32397c: 0x24a54528  addiu       $a1, $a1, 0x4528
    ctx->pc = 0x32397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
    // 0x323980: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x323980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323984: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x323984u;
    SET_GPR_U32(ctx, 31, 0x32398Cu);
    ctx->pc = 0x323988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323984u;
    // 0x323988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x323984u, 0x32398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32398Cu;
label_32398c:
    // 0x32398c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32398Cu;
    {
        const bool branch_taken_0x32398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32398Cu;
        // 0x323990: 0x3673ff00  ori         $s3, $s3, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32398c) {
            ctx->pc = 0x3239D8u;
            goto label_3239d8;
        }
    }
    ctx->pc = 0x323994u;
    // 0x323994: 0x0  nop
    ctx->pc = 0x323994u;
    // NOP
label_323998:
    // 0x323998: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x323998u;
    SET_GPR_U32(ctx, 31, 0x3239A0u);
    ctx->pc = 0x32399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323998u;
    // 0x32399c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x323998u, 0x3239A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239A0u;
label_3239a0:
    // 0x3239a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3239a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3239a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239a8: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3239A8u;
    SET_GPR_U32(ctx, 31, 0x3239B0u);
    ctx->pc = 0x3239ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239A8u;
    // 0x3239ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3239A8u, 0x3239B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239B0u;
label_3239b0:
    // 0x3239b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3239b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3239b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3239b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3239b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3239bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3239bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239c0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x3239c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3239c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3239c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3239c8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x3239c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x3239cc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3239ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3239d0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3239D0u;
    SET_GPR_U32(ctx, 31, 0x3239D8u);
    ctx->pc = 0x3239D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239D0u;
    // 0x3239d4: 0xacc20050  sw          $v0, 0x50($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3239D0u, 0x3239D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239D8u;
label_3239d8:
    // 0x3239d8: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3239D8u;
    SET_GPR_U32(ctx, 31, 0x3239E0u);
    ctx->pc = 0x3239DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239D8u;
    // 0x3239dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3239D8u, 0x3239E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239E0u;
label_3239e0:
    // 0x3239e0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3239e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3239e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3239E4u;
    {
        const bool branch_taken_0x3239e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3239E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239E4u;
        // 0x3239e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239e4) {
            ctx->pc = 0x323998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323998;
        }
    }
    ctx->pc = 0x3239ECu;
    // 0x3239ec: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3239ECu;
    SET_GPR_U32(ctx, 31, 0x3239F4u);
    ctx->pc = 0x3239F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239ECu;
    // 0x3239f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3239ECu, 0x3239F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239F4u;
label_3239f4:
    // 0x3239f4: 0x26c3b1e0  addiu       $v1, $s6, -0x4E20
    ctx->pc = 0x3239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947296));
    // 0x3239f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3239f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3239fc: 0xac750028  sw          $s5, 0x28($v1)
    ctx->pc = 0x3239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 21));
    // 0x323a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323a04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x323a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323a08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x323a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323a0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x323a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323a10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x323a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323a14: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x323a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323a18: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x323a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a20: 0x3e00008  jr          $ra
    ctx->pc = 0x323A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A20u;
        // 0x323a24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A28u;
    // 0x323a28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x323a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x323A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A2Cu;
        // 0x323a30: 0x8c62b208  lw          $v0, -0x4DF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A34u;
    // 0x323a34: 0x0  nop
    ctx->pc = 0x323a34u;
    // NOP
    // 0x323a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323a3c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x323a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x323a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323a44: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x323a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    // 0x323a48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323a54: 0xc103642  jal         func_40D908
    ctx->pc = 0x323A54u;
    SET_GPR_U32(ctx, 31, 0x323A5Cu);
    ctx->pc = 0x323A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A54u;
    // 0x323a58: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x323A54u, 0x323A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A5Cu;
label_323a5c:
    // 0x323a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a60: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x323a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x323a64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a68: 0x24a54528  addiu       $a1, $a1, 0x4528
    ctx->pc = 0x323a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
    // 0x323a6c: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x323A6Cu;
    SET_GPR_U32(ctx, 31, 0x323A74u);
    ctx->pc = 0x323A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A6Cu;
    // 0x323a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x323A6Cu, 0x323A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A74u;
label_323a74:
    // 0x323a74: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x323A74u;
    SET_GPR_U32(ctx, 31, 0x323A7Cu);
    ctx->pc = 0x323A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A74u;
    // 0x323a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x323A74u, 0x323A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A7Cu;
label_323a7c:
    // 0x323a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a80: 0xc103684  jal         func_40DA10
    ctx->pc = 0x323A80u;
    SET_GPR_U32(ctx, 31, 0x323A88u);
    ctx->pc = 0x323A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A80u;
    // 0x323a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x323A80u, 0x323A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A88u;
label_323a88:
    // 0x323a88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a98: 0x3e00008  jr          $ra
    ctx->pc = 0x323A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A98u;
        // 0x323a9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AA0u;
}
