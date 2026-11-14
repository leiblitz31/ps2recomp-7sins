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

// Function: sub_0039FBB0
// Address: 0x39fbb0 - 0x39fcd0
void sub_0039FBB0_0x39fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FBB0_0x39fbb0");
#endif

    switch (ctx->pc) {
        case 0x39fbb0u: goto label_39fbb0;
        case 0x39fbb4u: goto label_39fbb4;
        case 0x39fbb8u: goto label_39fbb8;
        case 0x39fbbcu: goto label_39fbbc;
        case 0x39fbc0u: goto label_39fbc0;
        case 0x39fbc4u: goto label_39fbc4;
        case 0x39fbc8u: goto label_39fbc8;
        case 0x39fbccu: goto label_39fbcc;
        case 0x39fbd0u: goto label_39fbd0;
        case 0x39fbd4u: goto label_39fbd4;
        case 0x39fbd8u: goto label_39fbd8;
        case 0x39fbdcu: goto label_39fbdc;
        case 0x39fbe0u: goto label_39fbe0;
        case 0x39fbe4u: goto label_39fbe4;
        case 0x39fbe8u: goto label_39fbe8;
        case 0x39fbecu: goto label_39fbec;
        case 0x39fbf0u: goto label_39fbf0;
        case 0x39fbf4u: goto label_39fbf4;
        case 0x39fbf8u: goto label_39fbf8;
        case 0x39fbfcu: goto label_39fbfc;
        case 0x39fc00u: goto label_39fc00;
        case 0x39fc04u: goto label_39fc04;
        case 0x39fc08u: goto label_39fc08;
        case 0x39fc0cu: goto label_39fc0c;
        case 0x39fc10u: goto label_39fc10;
        case 0x39fc14u: goto label_39fc14;
        case 0x39fc18u: goto label_39fc18;
        case 0x39fc1cu: goto label_39fc1c;
        case 0x39fc20u: goto label_39fc20;
        case 0x39fc24u: goto label_39fc24;
        case 0x39fc28u: goto label_39fc28;
        case 0x39fc2cu: goto label_39fc2c;
        case 0x39fc30u: goto label_39fc30;
        case 0x39fc34u: goto label_39fc34;
        case 0x39fc38u: goto label_39fc38;
        case 0x39fc3cu: goto label_39fc3c;
        case 0x39fc40u: goto label_39fc40;
        case 0x39fc44u: goto label_39fc44;
        case 0x39fc48u: goto label_39fc48;
        case 0x39fc4cu: goto label_39fc4c;
        case 0x39fc50u: goto label_39fc50;
        case 0x39fc54u: goto label_39fc54;
        case 0x39fc58u: goto label_39fc58;
        case 0x39fc5cu: goto label_39fc5c;
        case 0x39fc60u: goto label_39fc60;
        case 0x39fc64u: goto label_39fc64;
        case 0x39fc68u: goto label_39fc68;
        case 0x39fc6cu: goto label_39fc6c;
        case 0x39fc70u: goto label_39fc70;
        case 0x39fc74u: goto label_39fc74;
        case 0x39fc78u: goto label_39fc78;
        case 0x39fc7cu: goto label_39fc7c;
        case 0x39fc80u: goto label_39fc80;
        case 0x39fc84u: goto label_39fc84;
        case 0x39fc88u: goto label_39fc88;
        case 0x39fc8cu: goto label_39fc8c;
        case 0x39fc90u: goto label_39fc90;
        case 0x39fc94u: goto label_39fc94;
        case 0x39fc98u: goto label_39fc98;
        case 0x39fc9cu: goto label_39fc9c;
        case 0x39fca0u: goto label_39fca0;
        case 0x39fca4u: goto label_39fca4;
        case 0x39fca8u: goto label_39fca8;
        case 0x39fcacu: goto label_39fcac;
        case 0x39fcb0u: goto label_39fcb0;
        case 0x39fcb4u: goto label_39fcb4;
        case 0x39fcb8u: goto label_39fcb8;
        case 0x39fcbcu: goto label_39fcbc;
        case 0x39fcc0u: goto label_39fcc0;
        case 0x39fcc4u: goto label_39fcc4;
        case 0x39fcc8u: goto label_39fcc8;
        case 0x39fcccu: goto label_39fccc;
        default: break;
    }

    ctx->pc = 0x39fbb0u;

label_39fbb0:
    // 0x39fbb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_39fbb4:
    // 0x39fbb4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x39fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_39fbb8:
    // 0x39fbb8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x39fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_39fbbc:
    // 0x39fbbc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39fbbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fbc0:
    // 0x39fbc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x39fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_39fbc4:
    // 0x39fbc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39fbc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39fbc8:
    // 0x39fbc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x39fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_39fbcc:
    // 0x39fbcc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x39fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_39fbd0:
    // 0x39fbd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x39fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_39fbd4:
    // 0x39fbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39fbd8:
    // 0x39fbd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39fbdc:
    // 0x39fbdc: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x39fbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39fbe0:
    // 0x39fbe0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_39fbe4:
    if (ctx->pc == 0x39FBE4u) {
        ctx->pc = 0x39FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBE0u;
        // 0x39fbe4: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBE8u;
        goto label_39fbe8;
    }
    ctx->pc = 0x39FBE0u;
    {
        const bool branch_taken_0x39fbe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBE0u;
        // 0x39fbe4: 0x3c160062  lui         $s6, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbe0) {
            ctx->pc = 0x39FC68u;
            goto label_39fc68;
        }
    }
    ctx->pc = 0x39FBE8u;
label_39fbe8:
    // 0x39fbe8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39fbec:
    // 0x39fbec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39fbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39fbf0:
    // 0x39fbf0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_39fbf4:
    if (ctx->pc == 0x39FBF4u) {
        ctx->pc = 0x39FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBF0u;
        // 0x39fbf4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBF8u;
        goto label_39fbf8;
    }
    ctx->pc = 0x39FBF0u;
    {
        const bool branch_taken_0x39fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBF0u;
        // 0x39fbf4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbf0) {
            ctx->pc = 0x39FC54u;
            goto label_39fc54;
        }
    }
    ctx->pc = 0x39FBF8u;
label_39fbf8:
    // 0x39fbf8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x39fbf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39fbfc:
    // 0x39fbfc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39fc00:
    // 0x39fc00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x39fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_39fc04:
    // 0x39fc04: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x39fc04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39fc08:
    // 0x39fc08: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x39fc08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39fc0c:
    // 0x39fc0c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_39fc10:
    if (ctx->pc == 0x39FC10u) {
        ctx->pc = 0x39FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC0Cu;
        // 0x39fc10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC14u;
        goto label_39fc14;
    }
    ctx->pc = 0x39FC0Cu;
    {
        const bool branch_taken_0x39fc0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC0Cu;
        // 0x39fc10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc0c) {
            ctx->pc = 0x39FC48u;
            goto label_39fc48;
        }
    }
    ctx->pc = 0x39FC14u;
label_39fc14:
    // 0x39fc14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fc18:
    // 0x39fc18: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39fc1c:
    if (ctx->pc == 0x39FC1Cu) {
        ctx->pc = 0x39FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC18u;
        // 0x39fc1c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC20u;
        goto label_39fc20;
    }
    ctx->pc = 0x39FC18u;
    {
        const bool branch_taken_0x39fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fc18) {
            ctx->pc = 0x39FC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FC18u;
            // 0x39fc1c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FC44u;
            goto label_39fc44;
        }
    }
    ctx->pc = 0x39FC20u;
label_39fc20:
    // 0x39fc20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39fc24:
    // 0x39fc24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_39fc28:
    if (ctx->pc == 0x39FC28u) {
        ctx->pc = 0x39FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC24u;
        // 0x39fc28: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC2Cu;
        goto label_39fc2c;
    }
    ctx->pc = 0x39FC24u;
    {
        const bool branch_taken_0x39fc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fc24) {
            ctx->pc = 0x39FC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FC24u;
            // 0x39fc28: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FC44u;
            goto label_39fc44;
        }
    }
    ctx->pc = 0x39FC2Cu;
label_39fc2c:
    // 0x39fc2c: 0xc0e7ee0  jal         func_39FB80
label_39fc30:
    if (ctx->pc == 0x39FC30u) {
        ctx->pc = 0x39FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC2Cu;
        // 0x39fc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC34u;
        goto label_39fc34;
    }
    ctx->pc = 0x39FC2Cu;
    SET_GPR_U32(ctx, 31, 0x39FC34u);
    ctx->pc = 0x39FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC2Cu;
    // 0x39fc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FC2Cu, 0x39FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC34u;
label_39fc34:
    // 0x39fc34: 0xc104702  jal         func_411C08
label_39fc38:
    if (ctx->pc == 0x39FC38u) {
        ctx->pc = 0x39FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC34u;
        // 0x39fc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC3Cu;
        goto label_39fc3c;
    }
    ctx->pc = 0x39FC34u;
    SET_GPR_U32(ctx, 31, 0x39FC3Cu);
    ctx->pc = 0x39FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC34u;
    // 0x39fc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x39FC34u, 0x39FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC3Cu;
label_39fc3c:
    // 0x39fc3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_39fc40:
    if (ctx->pc == 0x39FC40u) {
        ctx->pc = 0x39FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC3Cu;
        // 0x39fc40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC44u;
        goto label_39fc44;
    }
    ctx->pc = 0x39FC3Cu;
    {
        const bool branch_taken_0x39fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC3Cu;
        // 0x39fc40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc3c) {
            ctx->pc = 0x39FC48u;
            goto label_39fc48;
        }
    }
    ctx->pc = 0x39FC44u;
label_39fc44:
    // 0x39fc44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39fc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fc48:
    // 0x39fc48: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x39fc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_39fc4c:
    // 0x39fc4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_39fc50:
    if (ctx->pc == 0x39FC50u) {
        ctx->pc = 0x39FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC4Cu;
        // 0x39fc50: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC54u;
        goto label_39fc54;
    }
    ctx->pc = 0x39FC4Cu;
    {
        const bool branch_taken_0x39fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC4Cu;
        // 0x39fc50: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc4c) {
            ctx->pc = 0x39FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fc08;
        }
    }
    ctx->pc = 0x39FC54u;
label_39fc54:
    // 0x39fc54: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x39fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_39fc58:
    // 0x39fc58: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39fc5c:
    // 0x39fc5c: 0x40f809  jalr        $v0
label_39fc60:
    if (ctx->pc == 0x39FC60u) {
        ctx->pc = 0x39FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC5Cu;
        // 0x39fc60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC64u;
        goto label_39fc64;
    }
    ctx->pc = 0x39FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FC64u);
        ctx->pc = 0x39FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC5Cu;
        // 0x39fc60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC5Cu, 0x39FC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FC64u;
label_39fc64:
    // 0x39fc64: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x39fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_39fc68:
    // 0x39fc68: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x39fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_39fc6c:
    // 0x39fc6c: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x39fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_39fc70:
    // 0x39fc70: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x39fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_39fc74:
    // 0x39fc74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x39fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_39fc78:
    // 0x39fc78: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39fc7c:
    // 0x39fc7c: 0x40f809  jalr        $v0
label_39fc80:
    if (ctx->pc == 0x39FC80u) {
        ctx->pc = 0x39FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC7Cu;
        // 0x39fc80: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC84u;
        goto label_39fc84;
    }
    ctx->pc = 0x39FC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FC84u);
        ctx->pc = 0x39FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC7Cu;
        // 0x39fc80: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FC7Cu, 0x39FC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FC84u;
label_39fc84:
    // 0x39fc84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39fc88:
    if (ctx->pc == 0x39FC88u) {
        ctx->pc = 0x39FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC84u;
        // 0x39fc88: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC8Cu;
        goto label_39fc8c;
    }
    ctx->pc = 0x39FC84u;
    {
        const bool branch_taken_0x39fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC84u;
        // 0x39fc88: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc84) {
            ctx->pc = 0x39FCA0u;
            goto label_39fca0;
        }
    }
    ctx->pc = 0x39FC8Cu;
label_39fc8c:
    // 0x39fc8c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x39fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_39fc90:
    // 0x39fc90: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x39fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_39fc94:
    // 0x39fc94: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x39fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_39fc98:
    // 0x39fc98: 0xc0bb7e6  jal         func_2EDF98
label_39fc9c:
    if (ctx->pc == 0x39FC9Cu) {
        ctx->pc = 0x39FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC98u;
        // 0x39fc9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCA0u;
        goto label_39fca0;
    }
    ctx->pc = 0x39FC98u;
    SET_GPR_U32(ctx, 31, 0x39FCA0u);
    ctx->pc = 0x39FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC98u;
    // 0x39fc9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x39FC98u, 0x39FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCA0u;
label_39fca0:
    // 0x39fca0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39fca4:
    // 0x39fca4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x39fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39fca8:
    // 0x39fca8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x39fca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39fcac:
    // 0x39fcac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x39fcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39fcb0:
    // 0x39fcb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39fcb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39fcb4:
    // 0x39fcb4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x39fcb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39fcb8:
    // 0x39fcb8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x39fcb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39fcbc:
    // 0x39fcbc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x39fcbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fcc0:
    // 0x39fcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39fcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39fcc4:
    // 0x39fcc4: 0x3e00008  jr          $ra
label_39fcc8:
    if (ctx->pc == 0x39FCC8u) {
        ctx->pc = 0x39FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCC4u;
        // 0x39fcc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCCCu;
        goto label_39fccc;
    }
    ctx->pc = 0x39FCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCC4u;
        // 0x39fcc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FCCCu;
label_39fccc:
    // 0x39fccc: 0x0  nop
    ctx->pc = 0x39fcccu;
    // NOP
    ctx->pc = 0x39fcd0u;
}
