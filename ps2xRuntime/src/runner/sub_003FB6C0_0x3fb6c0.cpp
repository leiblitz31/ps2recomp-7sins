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

// Function: sub_003FB6C0
// Address: 0x3fb6c0 - 0x3fb770
void sub_003FB6C0_0x3fb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB6C0_0x3fb6c0");
#endif

    switch (ctx->pc) {
        case 0x3fb6fcu: goto label_3fb6fc;
        case 0x3fb70cu: goto label_3fb70c;
        case 0x3fb724u: goto label_3fb724;
        default: break;
    }

    ctx->pc = 0x3fb6c0u;

    // 0x3fb6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3fb6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3fb6c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3fb6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3fb6c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3fb6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3fb6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fb6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3fb6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb6d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3fb6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3fb6dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3fb6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fb6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fb6e4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3FB6E4u;
    {
        const bool branch_taken_0x3fb6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB6E4u;
        // 0x3fb6e8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb6e4) {
            ctx->pc = 0x3FB754u;
            goto label_3fb754;
        }
    }
    ctx->pc = 0x3FB6ECu;
    // 0x3fb6ec: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FB6ECu;
    {
        const bool branch_taken_0x3fb6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB6ECu;
        // 0x3fb6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb6ec) {
            ctx->pc = 0x3FB754u;
            goto label_3fb754;
        }
    }
    ctx->pc = 0x3FB6F4u;
    // 0x3fb6f4: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FB6F4u;
    SET_GPR_U32(ctx, 31, 0x3FB6FCu);
    ctx->pc = 0x3FB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB6F4u;
    // 0x3fb6f8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FB6F4u, 0x3FB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB6FCu;
label_3fb6fc:
    // 0x3fb6fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3fb6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fb700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb704: 0xc0f85aa  jal         func_3E16A8
    ctx->pc = 0x3FB704u;
    SET_GPR_U32(ctx, 31, 0x3FB70Cu);
    ctx->pc = 0x3FB708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB704u;
    // 0x3fb708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E16A8u, 0x3FB704u, 0x3FB70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB70Cu;
label_3fb70c:
    // 0x3fb70c: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x3fb70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3fb710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fb714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb718: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3fb718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3fb71c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB71Cu;
    SET_GPR_U32(ctx, 31, 0x3FB724u);
    ctx->pc = 0x3FB720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB71Cu;
    // 0x3fb720: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB71Cu, 0x3FB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB724u;
label_3fb724:
    // 0x3fb724: 0xde0300f0  ld          $v1, 0xF0($s0)
    ctx->pc = 0x3fb724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3fb728: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3fb728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3fb72c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fb72cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fb730: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3fb730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fb734: 0x8e2601f8  lw          $a2, 0x1F8($s1)
    ctx->pc = 0x3fb734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3fb738: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3fb738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3fb73c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fb73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3fb740: 0xa63201fc  sh          $s2, 0x1FC($s1)
    ctx->pc = 0x3fb740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 508), (uint16_t)GPR_U32(ctx, 18));
    // 0x3fb744: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3fb744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x3fb748: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x3fb748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x3fb74c: 0xa6120024  sh          $s2, 0x24($s0)
    ctx->pc = 0x3fb74cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x3fb750: 0xfe0300f0  sd          $v1, 0xF0($s0)
    ctx->pc = 0x3fb750u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
label_3fb754:
    // 0x3fb754: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3fb754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb758: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3fb758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb75c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fb75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb760: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3fb760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb768: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB768u;
        // 0x3fb76c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB770u;
}
