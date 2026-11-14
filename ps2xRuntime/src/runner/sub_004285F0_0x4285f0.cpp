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

// Function: sub_004285F0
// Address: 0x4285f0 - 0x428788
void sub_004285F0_0x4285f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004285F0_0x4285f0");
#endif

    switch (ctx->pc) {
        case 0x428614u: goto label_428614;
        case 0x428690u: goto label_428690;
        case 0x4286e4u: goto label_4286e4;
        case 0x428700u: goto label_428700;
        case 0x428714u: goto label_428714;
        case 0x428718u: goto label_428718;
        case 0x42876cu: goto label_42876c;
        default: break;
    }

    ctx->pc = 0x4285f0u;

    // 0x4285f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4285f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4285f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4285f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4285f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4285f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4285fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4285fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428600: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x428600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x428604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x428604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x428608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x428608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42860c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x42860Cu;
    SET_GPR_U32(ctx, 31, 0x428614u);
    ctx->pc = 0x428610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42860Cu;
    // 0x428610: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42860Cu, 0x428614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428614u;
label_428614:
    // 0x428614: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x428614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x428618: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x428618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x42861c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x42861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x428620: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x428620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x428624: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x428624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x428628: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x428628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42862c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x42862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428630: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x428630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x428634: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x428634u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428638: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x428638u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x42863c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x42863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x428640: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x428640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x428644: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x428644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428648: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x428648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42864c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x42864cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x428650: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x428650u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428654: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x428654u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x428658: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x428658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x42865c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x42865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x428660: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x428660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428664: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x428664u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428668: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x428668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x42866c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x42866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x428670: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x428670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x428674: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x428674u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428678: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x428678u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x42867c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x42867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x428680: 0x70632389  pcpyld      $a0, $v1, $v1
    ctx->pc = 0x428680u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x428684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x428684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428688: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x428688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42868c: 0x0  nop
    ctx->pc = 0x42868cu;
    // NOP
label_428690:
    // 0x428690: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x428690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x428694: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x428694u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x428698: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x428698u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x42869c: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x42869cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x4286a0: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x4286a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x4286a4: 0x7c640050  sq          $a0, 0x50($v1)
    ctx->pc = 0x4286a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 4));
    // 0x4286a8: 0x7c640060  sq          $a0, 0x60($v1)
    ctx->pc = 0x4286a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 4));
    // 0x4286ac: 0x7c640070  sq          $a0, 0x70($v1)
    ctx->pc = 0x4286acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 4));
    // 0x4286b0: 0x7c640080  sq          $a0, 0x80($v1)
    ctx->pc = 0x4286b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), GPR_VEC(ctx, 4));
    // 0x4286b4: 0x7c640090  sq          $a0, 0x90($v1)
    ctx->pc = 0x4286b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 4));
    // 0x4286b8: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x4286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x4286bc: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x4286bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x4286c0: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x4286c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x4286c4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4286C4u;
    {
        const bool branch_taken_0x4286c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4286C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4286C4u;
        // 0x4286c8: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4286c4) {
            ctx->pc = 0x428690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428690;
        }
    }
    ctx->pc = 0x4286CCu;
    // 0x4286cc: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x4286ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x4286d0: 0x9382bea0  lbu         $v0, -0x4160($gp)
    ctx->pc = 0x4286d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950560)));
    // 0x4286d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4286D4u;
    {
        const bool branch_taken_0x4286d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4286D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4286D4u;
        // 0x4286d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4286d4) {
            ctx->pc = 0x4286E8u;
            goto label_4286e8;
        }
    }
    ctx->pc = 0x4286DCu;
    // 0x4286dc: 0xc10a024  jal         func_428090
    ctx->pc = 0x4286DCu;
    SET_GPR_U32(ctx, 31, 0x4286E4u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x4286DCu, 0x4286E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4286E4u;
label_4286e4:
    // 0x4286e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4286e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4286e8:
    // 0x4286e8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4286e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4286ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4286ECu;
    {
        const bool branch_taken_0x4286ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4286F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4286ECu;
        // 0x4286f0: 0xa382bea0  sb          $v0, -0x4160($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294950560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4286ec) {
            ctx->pc = 0x428708u;
            goto label_428708;
        }
    }
    ctx->pc = 0x4286F4u;
    // 0x4286f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4286f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4286f8: 0xc10a0aa  jal         func_4282A8
    ctx->pc = 0x4286F8u;
    SET_GPR_U32(ctx, 31, 0x428700u);
    ctx->pc = 0x4286FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4286F8u;
    // 0x4286fc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4282A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4282A8u, 0x4286F8u, 0x428700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428700u;
label_428700:
    // 0x428700: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x428700u;
    {
        const bool branch_taken_0x428700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428700u;
        // 0x428704: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428700) {
            ctx->pc = 0x428718u;
            goto label_428718;
        }
    }
    ctx->pc = 0x428708u;
label_428708:
    // 0x428708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x428708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42870c: 0xc10a0aa  jal         func_4282A8
    ctx->pc = 0x42870Cu;
    SET_GPR_U32(ctx, 31, 0x428714u);
    ctx->pc = 0x428710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42870Cu;
    // 0x428710: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4282A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4282A8u, 0x42870Cu, 0x428714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428714u;
label_428714:
    // 0x428714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x428714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_428718:
    // 0x428718: 0x42000039  di
    ctx->pc = 0x428718u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x42871c: 0x40f  sync.p
    ctx->pc = 0x42871cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428720: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x428720u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x428724: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x428724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x428728: 0x0  nop
    ctx->pc = 0x428728u;
    // NOP
    // 0x42872c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42872Cu;
    {
        const bool branch_taken_0x42872c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42872c) {
            ctx->pc = 0x428718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428718;
        }
    }
    ctx->pc = 0x428734u;
    // 0x428734: 0x9383be2e  lbu         $v1, -0x41D2($gp)
    ctx->pc = 0x428734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
    // 0x428738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x428738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x42873c: 0xa383be2e  sb          $v1, -0x41D2($gp)
    ctx->pc = 0x42873cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950446), (uint8_t)GPR_U32(ctx, 3));
    // 0x428740: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x428740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x428744: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x428744u;
    {
        const bool branch_taken_0x428744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x428744) {
            ctx->pc = 0x42876Cu;
            goto label_42876c;
        }
    }
    ctx->pc = 0x42874Cu;
    // 0x42874c: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x42874cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x428750: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x428750u;
    {
        const bool branch_taken_0x428750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x428750) {
            ctx->pc = 0x42876Cu;
            goto label_42876c;
        }
    }
    ctx->pc = 0x428758u;
    // 0x428758: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x428758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x42875c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42875Cu;
    {
        const bool branch_taken_0x42875c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42875c) {
            ctx->pc = 0x42876Cu;
            goto label_42876c;
        }
    }
    ctx->pc = 0x428764u;
    // 0x428764: 0xc109d0e  jal         func_427438
    ctx->pc = 0x428764u;
    SET_GPR_U32(ctx, 31, 0x42876Cu);
    ctx->pc = 0x428768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428764u;
    // 0x428768: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427438u, 0x428764u, 0x42876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42876Cu;
label_42876c:
    // 0x42876c: 0x42000038  ei
    ctx->pc = 0x42876cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x428770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x428770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x428774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x428778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42877c: 0x3e00008  jr          $ra
    ctx->pc = 0x42877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42877Cu;
        // 0x428780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x428784u;
    // 0x428784: 0x0  nop
    ctx->pc = 0x428784u;
    // NOP
    ctx->pc = 0x428788u;
}
