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

// Function: sub_0038F8E8
// Address: 0x38f8e8 - 0x38f9b0
void sub_0038F8E8_0x38f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F8E8_0x38f8e8");
#endif

    switch (ctx->pc) {
        case 0x38f918u: goto label_38f918;
        case 0x38f930u: goto label_38f930;
        case 0x38f978u: goto label_38f978;
        default: break;
    }

    ctx->pc = 0x38f8e8u;

    // 0x38f8e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38f8ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38f8ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f8f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38f8f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38f8f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f8fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38f900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f904: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38f904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38f908: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x38f908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38f90c: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x38F90Cu;
    {
        const bool branch_taken_0x38f90c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F90Cu;
        // 0x38f910: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f90c) {
            ctx->pc = 0x38F994u;
            goto label_38f994;
        }
    }
    ctx->pc = 0x38F914u;
    // 0x38f914: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x38f914u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_38f918:
    // 0x38f918: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x38f918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f91c: 0x25320001  addiu       $s2, $t1, 0x1
    ctx->pc = 0x38f91cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x38f920: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x38f920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f924: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x38f924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f928: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38f928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f92c: 0x0  nop
    ctx->pc = 0x38f92cu;
    // NOP
label_38f930:
    // 0x38f930: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38f930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38f934: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x38f938: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F938u;
    {
        const bool branch_taken_0x38f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F938u;
        // 0x38f93c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f938) {
            ctx->pc = 0x38F95Cu;
            goto label_38f95c;
        }
    }
    ctx->pc = 0x38F940u;
    // 0x38f940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38f944: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x38f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x38f948: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x38f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x38f94c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38f950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38f954: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x38F954u;
    {
        const bool branch_taken_0x38f954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x38F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F954u;
        // 0x38f958: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f954) {
            ctx->pc = 0x38F930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f930;
        }
    }
    ctx->pc = 0x38F95Cu;
label_38f95c:
    // 0x38f95c: 0x5030009  bgezl       $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38F95Cu;
    {
        const bool branch_taken_0x38f95c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x38f95c) {
            ctx->pc = 0x38F960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F95Cu;
            // 0x38f960: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F984u;
            goto label_38f984;
        }
    }
    ctx->pc = 0x38F964u;
    // 0x38f964: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38f968: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x38f968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x38f96c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38f970: 0xc0e3a3a  jal         func_38E8E8
    ctx->pc = 0x38F970u;
    SET_GPR_U32(ctx, 31, 0x38F978u);
    ctx->pc = 0x38F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F970u;
    // 0x38f974: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E8E8u, 0x38F970u, 0x38F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F978u;
label_38f978:
    // 0x38f978: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x38f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x38f97c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x38f97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38f980: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f984:
    // 0x38f984: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38f984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f988: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x38f988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38f98c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x38F98Cu;
    {
        const bool branch_taken_0x38f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F98Cu;
        // 0x38f990: 0x95080  sll         $t2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f98c) {
            ctx->pc = 0x38F918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f918;
        }
    }
    ctx->pc = 0x38F994u;
label_38f994:
    // 0x38f994: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38f994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f998: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38f998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f99c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38f99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f9a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38f9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9A8u;
        // 0x38f9ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F9B0u;
}
