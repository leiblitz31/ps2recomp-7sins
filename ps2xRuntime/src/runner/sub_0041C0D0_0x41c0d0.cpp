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

// Function: sub_0041C0D0
// Address: 0x41c0d0 - 0x41c170
void sub_0041C0D0_0x41c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C0D0_0x41c0d0");
#endif

    switch (ctx->pc) {
        case 0x41c0d0u: goto label_41c0d0;
        case 0x41c0d4u: goto label_41c0d4;
        case 0x41c0d8u: goto label_41c0d8;
        case 0x41c0dcu: goto label_41c0dc;
        case 0x41c0e0u: goto label_41c0e0;
        case 0x41c0e4u: goto label_41c0e4;
        case 0x41c0e8u: goto label_41c0e8;
        case 0x41c0ecu: goto label_41c0ec;
        case 0x41c0f0u: goto label_41c0f0;
        case 0x41c0f4u: goto label_41c0f4;
        case 0x41c0f8u: goto label_41c0f8;
        case 0x41c0fcu: goto label_41c0fc;
        case 0x41c100u: goto label_41c100;
        case 0x41c104u: goto label_41c104;
        case 0x41c108u: goto label_41c108;
        case 0x41c10cu: goto label_41c10c;
        case 0x41c110u: goto label_41c110;
        case 0x41c114u: goto label_41c114;
        case 0x41c118u: goto label_41c118;
        case 0x41c11cu: goto label_41c11c;
        case 0x41c120u: goto label_41c120;
        case 0x41c124u: goto label_41c124;
        case 0x41c128u: goto label_41c128;
        case 0x41c12cu: goto label_41c12c;
        case 0x41c130u: goto label_41c130;
        case 0x41c134u: goto label_41c134;
        case 0x41c138u: goto label_41c138;
        case 0x41c13cu: goto label_41c13c;
        case 0x41c140u: goto label_41c140;
        case 0x41c144u: goto label_41c144;
        case 0x41c148u: goto label_41c148;
        case 0x41c14cu: goto label_41c14c;
        case 0x41c150u: goto label_41c150;
        case 0x41c154u: goto label_41c154;
        case 0x41c158u: goto label_41c158;
        case 0x41c15cu: goto label_41c15c;
        case 0x41c160u: goto label_41c160;
        case 0x41c164u: goto label_41c164;
        case 0x41c168u: goto label_41c168;
        case 0x41c16cu: goto label_41c16c;
        default: break;
    }

    ctx->pc = 0x41c0d0u;

label_41c0d0:
    // 0x41c0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41c0d4:
    // 0x41c0d4: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c0d8:
    // 0x41c0d8: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x41c0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_41c0dc:
    // 0x41c0dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41c0e0:
    // 0x41c0e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41c0e4:
    // 0x41c0e4: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x41c0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_41c0e8:
    // 0x41c0e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41c0ec:
    // 0x41c0ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x41c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_41c0f0:
    // 0x41c0f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x41c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_41c0f4:
    // 0x41c0f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41c0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c0f8:
    // 0x41c0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c0fc:
    // 0x41c0fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41c0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41c100:
    // 0x41c100: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41c100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41c104:
    // 0x41c104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x41c104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41c108:
    // 0x41c108: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x41c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_41c10c:
    // 0x41c10c: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41c10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41c110:
    // 0x41c110: 0x40f809  jalr        $v0
label_41c114:
    if (ctx->pc == 0x41C114u) {
        ctx->pc = 0x41C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C110u;
        // 0x41c114: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C118u;
        goto label_41c118;
    }
    ctx->pc = 0x41C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C118u);
        ctx->pc = 0x41C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C110u;
        // 0x41c114: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C110u, 0x41C118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C118u;
label_41c118:
    // 0x41c118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41c118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c11c:
    // 0x41c11c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_41c120:
    if (ctx->pc == 0x41C120u) {
        ctx->pc = 0x41C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C11Cu;
        // 0x41c120: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C124u;
        goto label_41c124;
    }
    ctx->pc = 0x41C11Cu;
    {
        const bool branch_taken_0x41c11c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C11Cu;
        // 0x41c120: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c11c) {
            ctx->pc = 0x41C150u;
            goto label_41c150;
        }
    }
    ctx->pc = 0x41C124u;
label_41c124:
    // 0x41c124: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x41c124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_41c128:
    // 0x41c128: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x41c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_41c12c:
    // 0x41c12c: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x41c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
label_41c130:
    // 0x41c130: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x41c130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_41c134:
    // 0x41c134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c138:
    // 0x41c138: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x41c138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_41c13c:
    // 0x41c13c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x41c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_41c140:
    // 0x41c140: 0xc104c80  jal         func_413200
label_41c144:
    if (ctx->pc == 0x41C144u) {
        ctx->pc = 0x41C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C140u;
        // 0x41c144: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C148u;
        goto label_41c148;
    }
    ctx->pc = 0x41C140u;
    SET_GPR_U32(ctx, 31, 0x41C148u);
    ctx->pc = 0x41C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C140u;
    // 0x41c144: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x41C140u, 0x41C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C148u;
label_41c148:
    // 0x41c148: 0x10000002  b           . + 4 + (0x2 << 2)
label_41c14c:
    if (ctx->pc == 0x41C14Cu) {
        ctx->pc = 0x41C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C148u;
        // 0x41c14c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C150u;
        goto label_41c150;
    }
    ctx->pc = 0x41C148u;
    {
        const bool branch_taken_0x41c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C148u;
        // 0x41c14c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c148) {
            ctx->pc = 0x41C154u;
            goto label_41c154;
        }
    }
    ctx->pc = 0x41C150u;
label_41c150:
    // 0x41c150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41c150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c154:
    // 0x41c154: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41c154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41c158:
    // 0x41c158: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41c158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c15c:
    // 0x41c15c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41c15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c160:
    // 0x41c160: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x41c160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c164:
    // 0x41c164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c168:
    // 0x41c168: 0x3e00008  jr          $ra
label_41c16c:
    if (ctx->pc == 0x41C16Cu) {
        ctx->pc = 0x41C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C168u;
        // 0x41c16c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C170u;
        goto label_fallthrough_0x41c168;
    }
    ctx->pc = 0x41C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C168u;
        // 0x41c16c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c168:
    ctx->pc = 0x41C170u;
}
