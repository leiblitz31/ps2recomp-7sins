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

// Function: sub_002EE200
// Address: 0x2ee200 - 0x2ee308
void sub_002EE200_0x2ee200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE200_0x2ee200");
#endif

    switch (ctx->pc) {
        case 0x2ee238u: goto label_2ee238;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2c0u: goto label_2ee2c0;
        case 0x2ee2d0u: goto label_2ee2d0;
        default: break;
    }

    ctx->pc = 0x2ee200u;

    // 0x2ee200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee204: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ee204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee20c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ee20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee210: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ee210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ee214: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ee214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee218: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ee218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ee21c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ee21cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee224: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x2ee224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ee228: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ee228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ee22c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ee22cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee230: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ee230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ee234: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2ee234u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ee238:
    // 0x2ee238: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ee238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee23c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ee23cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ee240: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x2ee240u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ee244: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ee244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ee248: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ee248u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ee24c: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x2ee24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ee250: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x2ee250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ee254: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2ee254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ee258: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x2ee258u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ee25c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ee25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ee260: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ee260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ee264: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2ee264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ee268: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x2ee268u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ee26c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ee26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee270: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2ee270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2ee274: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EE274u;
    {
        const bool branch_taken_0x2ee274 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE274u;
        // 0x2ee278: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee274) {
            ctx->pc = 0x2EE238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee238;
        }
    }
    ctx->pc = 0x2EE27Cu;
    // 0x2ee27c: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EE27Cu;
    {
        const bool branch_taken_0x2ee27c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE27Cu;
        // 0x2ee280: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee27c) {
            ctx->pc = 0x2EE2E8u;
            goto label_2ee2e8;
        }
    }
    ctx->pc = 0x2EE284u;
    // 0x2ee284: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ee284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ee288: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ee288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee28c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE28Cu;
    {
        const bool branch_taken_0x2ee28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE28Cu;
        // 0x2ee290: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee28c) {
            ctx->pc = 0x2EE2D4u;
            goto label_2ee2d4;
        }
    }
    ctx->pc = 0x2EE294u;
    // 0x2ee294: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ee298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee29c: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EE29Cu;
    SET_GPR_U32(ctx, 31, 0x2EE2A4u);
    ctx->pc = 0x2EE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE29Cu;
    // 0x2ee2a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EE29Cu, 0x2EE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2A4u;
label_2ee2a4:
    // 0x2ee2a4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2ee2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ee2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2ac: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2ee2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2ee2b0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ee2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ee2b4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2ee2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ee2b8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x2EE2B8u;
    SET_GPR_U32(ctx, 31, 0x2EE2C0u);
    ctx->pc = 0x2EE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2B8u;
    // 0x2ee2bc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2EE2B8u, 0x2EE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2C0u;
label_2ee2c0:
    // 0x2ee2c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ee2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2c8: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EE2C8u;
    SET_GPR_U32(ctx, 31, 0x2EE2D0u);
    ctx->pc = 0x2EE2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2C8u;
    // 0x2ee2cc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EE2C8u, 0x2EE2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2D0u;
label_2ee2d0:
    // 0x2ee2d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ee2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2ee2d4:
    // 0x2ee2d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ee2d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ee2dc: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x2ee2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x2ee2e0: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x2ee2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x2ee2e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2e8:
    // 0x2ee2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee2f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee2f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee2f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ee2f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ee2f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ee2f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee2fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ee2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ee300: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE300u;
        // 0x2ee304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE308u;
}
