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

// Function: sub_0038CB90
// Address: 0x38cb90 - 0x38ccc0
void sub_0038CB90_0x38cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CB90_0x38cb90");
#endif

    switch (ctx->pc) {
        case 0x38cbd4u: goto label_38cbd4;
        case 0x38cbf0u: goto label_38cbf0;
        case 0x38cc14u: goto label_38cc14;
        case 0x38cc2cu: goto label_38cc2c;
        case 0x38cc40u: goto label_38cc40;
        case 0x38cc4cu: goto label_38cc4c;
        case 0x38cc6cu: goto label_38cc6c;
        case 0x38cc84u: goto label_38cc84;
        case 0x38cc94u: goto label_38cc94;
        default: break;
    }

    ctx->pc = 0x38cb90u;

    // 0x38cb90: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x38cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x38cb94: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB94u;
        // 0x38cb98: 0x8c62ade0  lw          $v0, -0x5220($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB9Cu;
    // 0x38cb9c: 0x0  nop
    ctx->pc = 0x38cb9cu;
    // NOP
    // 0x38cba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38cba4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x38cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x38cba8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x38cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x38cbac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38cbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38cbb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbb4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x38cbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x38cbb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x38cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x38cbbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x38cbc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x38cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x38cbc4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x38cbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x38cbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38cbcc: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x38CBCCu;
    SET_GPR_U32(ctx, 31, 0x38CBD4u);
    ctx->pc = 0x38CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBCCu;
    // 0x38cbd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38CBCCu, 0x38CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBD4u;
label_38cbd4:
    // 0x38cbd4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x38CBD4u;
    {
        const bool branch_taken_0x38cbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBD4u;
        // 0x38cbd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbd4) {
            ctx->pc = 0x38CC98u;
            goto label_38cc98;
        }
    }
    ctx->pc = 0x38CBDCu;
    // 0x38cbdc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x38cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x38cbe0: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x38CBE0u;
    {
        const bool branch_taken_0x38cbe0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE0u;
        // 0x38cbe4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbe0) {
            ctx->pc = 0x38CC7Cu;
            goto label_38cc7c;
        }
    }
    ctx->pc = 0x38CBE8u;
    // 0x38cbe8: 0x2416001c  addiu       $s6, $zero, 0x1C
    ctx->pc = 0x38cbe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38cbec: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x38cbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38cbf0:
    // 0x38cbf0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x38cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x38cbf4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x38cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x38cbf8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38cbf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbfc: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x38cbfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38cc00: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x38cc00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38cc04: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x38cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x38cc08: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x38cc08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x38cc0c: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x38CC0Cu;
    SET_GPR_U32(ctx, 31, 0x38CC14u);
    ctx->pc = 0x38CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC0Cu;
    // 0x38cc10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x38CC0Cu, 0x38CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC14u;
label_38cc14:
    // 0x38cc14: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38CC14u;
    {
        const bool branch_taken_0x38cc14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC14u;
        // 0x38cc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc14) {
            ctx->pc = 0x38CC5Cu;
            goto label_38cc5c;
        }
    }
    ctx->pc = 0x38CC1Cu;
    // 0x38cc1c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x38cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x38cc20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38cc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc24: 0xc104d94  jal         func_413650
    ctx->pc = 0x38CC24u;
    SET_GPR_U32(ctx, 31, 0x38CC2Cu);
    ctx->pc = 0x38CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC24u;
    // 0x38cc28: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413650u, 0x38CC24u, 0x38CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC2Cu;
label_38cc2c:
    // 0x38cc2c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x38cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x38cc30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38cc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38CC34u;
    {
        const bool branch_taken_0x38cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC34u;
        // 0x38cc38: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc34) {
            ctx->pc = 0x38CC5Cu;
            goto label_38cc5c;
        }
    }
    ctx->pc = 0x38CC3Cu;
    // 0x38cc3c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x38cc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38cc40:
    // 0x38cc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc44: 0xc104da4  jal         func_413690
    ctx->pc = 0x38CC44u;
    SET_GPR_U32(ctx, 31, 0x38CC4Cu);
    ctx->pc = 0x38CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC44u;
    // 0x38cc48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x38CC44u, 0x38CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC4Cu;
label_38cc4c:
    // 0x38cc4c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x38cc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x38cc50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38cc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38CC54u;
    {
        const bool branch_taken_0x38cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC54u;
        // 0x38cc58: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc54) {
            ctx->pc = 0x38CC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cc40;
        }
    }
    ctx->pc = 0x38CC5Cu;
label_38cc5c:
    // 0x38cc5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc60: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x38cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc64: 0xc0e2ab0  jal         func_38AAC0
    ctx->pc = 0x38CC64u;
    SET_GPR_U32(ctx, 31, 0x38CC6Cu);
    ctx->pc = 0x38CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC64u;
    // 0x38cc68: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x38CC64u, 0x38CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC6Cu;
label_38cc6c:
    // 0x38cc6c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x38cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x38cc70: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x38cc70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38cc74: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x38CC74u;
    {
        const bool branch_taken_0x38cc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC74u;
        // 0x38cc78: 0x2161818  mult        $v1, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc74) {
            ctx->pc = 0x38CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cbf0;
        }
    }
    ctx->pc = 0x38CC7Cu;
label_38cc7c:
    // 0x38cc7c: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x38CC7Cu;
    SET_GPR_U32(ctx, 31, 0x38CC84u);
    ctx->pc = 0x38CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC7Cu;
    // 0x38cc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x38CC7Cu, 0x38CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC84u;
label_38cc84:
    // 0x38cc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38CC84u;
    {
        const bool branch_taken_0x38cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC84u;
        // 0x38cc88: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc84) {
            ctx->pc = 0x38CC98u;
            goto label_38cc98;
        }
    }
    ctx->pc = 0x38CC8Cu;
    // 0x38cc8c: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x38CC8Cu;
    SET_GPR_U32(ctx, 31, 0x38CC94u);
    ctx->pc = 0x38CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC8Cu;
    // 0x38cc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38CC8Cu, 0x38CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC94u;
label_38cc94:
    // 0x38cc94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38cc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cc98:
    // 0x38cc98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x38cc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38cc9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x38cc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38cca0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x38cca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38cca4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38cca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cca8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x38cca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ccac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x38ccacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ccb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x38ccb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ccb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ccb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x38CCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCB8u;
        // 0x38ccbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CCC0u;
}
