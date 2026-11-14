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

// Function: sub_002EB8D0
// Address: 0x2eb8d0 - 0x2eb990
void sub_002EB8D0_0x2eb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB8D0_0x2eb8d0");
#endif

    switch (ctx->pc) {
        case 0x2eb8d0u: goto label_2eb8d0;
        case 0x2eb8d4u: goto label_2eb8d4;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8dcu: goto label_2eb8dc;
        case 0x2eb8e0u: goto label_2eb8e0;
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8ecu: goto label_2eb8ec;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb8f4u: goto label_2eb8f4;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        case 0x2eb90cu: goto label_2eb90c;
        case 0x2eb910u: goto label_2eb910;
        case 0x2eb914u: goto label_2eb914;
        case 0x2eb918u: goto label_2eb918;
        case 0x2eb91cu: goto label_2eb91c;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb928u: goto label_2eb928;
        case 0x2eb92cu: goto label_2eb92c;
        case 0x2eb930u: goto label_2eb930;
        case 0x2eb934u: goto label_2eb934;
        case 0x2eb938u: goto label_2eb938;
        case 0x2eb93cu: goto label_2eb93c;
        case 0x2eb940u: goto label_2eb940;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb948u: goto label_2eb948;
        case 0x2eb94cu: goto label_2eb94c;
        case 0x2eb950u: goto label_2eb950;
        case 0x2eb954u: goto label_2eb954;
        case 0x2eb958u: goto label_2eb958;
        case 0x2eb95cu: goto label_2eb95c;
        case 0x2eb960u: goto label_2eb960;
        case 0x2eb964u: goto label_2eb964;
        case 0x2eb968u: goto label_2eb968;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb974u: goto label_2eb974;
        case 0x2eb978u: goto label_2eb978;
        case 0x2eb97cu: goto label_2eb97c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb984u: goto label_2eb984;
        case 0x2eb988u: goto label_2eb988;
        case 0x2eb98cu: goto label_2eb98c;
        default: break;
    }

    ctx->pc = 0x2eb8d0u;

label_2eb8d0:
    // 0x2eb8d0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2eb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_2eb8d4:
    // 0x2eb8d4: 0x3e00008  jr          $ra
label_2eb8d8:
    if (ctx->pc == 0x2EB8D8u) {
        ctx->pc = 0x2EB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D4u;
        // 0x2eb8d8: 0x8c62ea90  lw          $v0, -0x1570($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8DCu;
        goto label_2eb8dc;
    }
    ctx->pc = 0x2EB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D4u;
        // 0x2eb8d8: 0x8c62ea90  lw          $v0, -0x1570($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB8DCu;
label_2eb8dc:
    // 0x2eb8dc: 0x0  nop
    ctx->pc = 0x2eb8dcu;
    // NOP
label_2eb8e0:
    // 0x2eb8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eb8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2eb8e4:
    // 0x2eb8e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eb8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2eb8e8:
    // 0x2eb8e8: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x2eb8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
label_2eb8ec:
    // 0x2eb8ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eb8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2eb8f0:
    // 0x2eb8f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eb8f4:
    // 0x2eb8f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2eb8f8:
    // 0x2eb8f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eb8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2eb8fc:
    // 0x2eb8fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2eb8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2eb900:
    // 0x2eb900: 0x8e82ea90  lw          $v0, -0x1570($s4)
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961808)));
label_2eb904:
    // 0x2eb904: 0x8c520148  lw          $s2, 0x148($v0)
    ctx->pc = 0x2eb904u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_2eb908:
    // 0x2eb908: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2eb90c:
    if (ctx->pc == 0x2EB90Cu) {
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB910u;
        goto label_2eb910;
    }
    ctx->pc = 0x2EB908u;
    {
        const bool branch_taken_0x2eb908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb908) {
            ctx->pc = 0x2EB950u;
            goto label_2eb950;
        }
    }
    ctx->pc = 0x2EB910u;
label_2eb910:
    // 0x2eb910: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2eb910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2eb914:
    // 0x2eb914: 0x0  nop
    ctx->pc = 0x2eb914u;
    // NOP
label_2eb918:
    // 0x2eb918: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2eb918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2eb91c:
    // 0x2eb91c: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
label_2eb920:
    if (ctx->pc == 0x2EB920u) {
        ctx->pc = 0x2EB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB91Cu;
        // 0x2eb920: 0x26430008  addiu       $v1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB924u;
        goto label_2eb924;
    }
    ctx->pc = 0x2EB91Cu;
    {
        const bool branch_taken_0x2eb91c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2EB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB91Cu;
        // 0x2eb920: 0x26430008  addiu       $v1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb91c) {
            ctx->pc = 0x2EB944u;
            goto label_2eb944;
        }
    }
    ctx->pc = 0x2EB924u;
label_2eb924:
    // 0x2eb924: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2eb924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2eb928:
    // 0x2eb928: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2eb928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2eb92c:
    // 0x2eb92c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb930:
    // 0x2eb930: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2eb930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_2eb934:
    // 0x2eb934: 0x40f809  jalr        $v0
label_2eb938:
    if (ctx->pc == 0x2EB938u) {
        ctx->pc = 0x2EB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB934u;
        // 0x2eb938: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB93Cu;
        goto label_2eb93c;
    }
    ctx->pc = 0x2EB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB93Cu);
        ctx->pc = 0x2EB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB934u;
        // 0x2eb938: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB934u, 0x2EB93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB93Cu;
label_2eb93c:
    // 0x2eb93c: 0x603fffc  bgezl       $s0, . + 4 + (-0x4 << 2)
label_2eb940:
    if (ctx->pc == 0x2EB940u) {
        ctx->pc = 0x2EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB93Cu;
        // 0x2eb940: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB944u;
        goto label_2eb944;
    }
    ctx->pc = 0x2EB93Cu;
    {
        const bool branch_taken_0x2eb93c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2eb93c) {
            ctx->pc = 0x2EB940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB93Cu;
            // 0x2eb940: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb930;
        }
    }
    ctx->pc = 0x2EB944u;
label_2eb944:
    // 0x2eb944: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x2eb944u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eb948:
    // 0x2eb948: 0x5640fff3  bnel        $s2, $zero, . + 4 + (-0xD << 2)
label_2eb94c:
    if (ctx->pc == 0x2EB94Cu) {
        ctx->pc = 0x2EB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB948u;
        // 0x2eb94c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB950u;
        goto label_2eb950;
    }
    ctx->pc = 0x2EB948u;
    {
        const bool branch_taken_0x2eb948 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb948) {
            ctx->pc = 0x2EB94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB948u;
            // 0x2eb94c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb918;
        }
    }
    ctx->pc = 0x2EB950u;
label_2eb950:
    // 0x2eb950: 0x8e84ea90  lw          $a0, -0x1570($s4)
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961808)));
label_2eb954:
    // 0x2eb954: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2eb958:
    // 0x2eb958: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2eb95c:
    if (ctx->pc == 0x2EB95Cu) {
        ctx->pc = 0x2EB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB958u;
        // 0x2eb95c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB960u;
        goto label_2eb960;
    }
    ctx->pc = 0x2EB958u;
    {
        const bool branch_taken_0x2eb958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb958) {
            ctx->pc = 0x2EB95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB958u;
            // 0x2eb95c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB96Cu;
            goto label_2eb96c;
        }
    }
    ctx->pc = 0x2EB960u;
label_2eb960:
    // 0x2eb960: 0x40f809  jalr        $v0
label_2eb964:
    if (ctx->pc == 0x2EB964u) {
        ctx->pc = 0x2EB968u;
        goto label_2eb968;
    }
    ctx->pc = 0x2EB960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB968u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB960u, 0x2EB968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB968u;
label_2eb968:
    // 0x2eb968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb96c:
    // 0x2eb96c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eb96cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2eb970:
    // 0x2eb970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eb974:
    // 0x2eb974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eb978:
    // 0x2eb978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eb97c:
    // 0x2eb97c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eb97cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2eb980:
    // 0x2eb980: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2eb980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2eb984:
    // 0x2eb984: 0x8040086  j           func_100218
label_2eb988:
    if (ctx->pc == 0x2EB988u) {
        ctx->pc = 0x2EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB984u;
        // 0x2eb988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB98Cu;
        goto label_2eb98c;
    }
    ctx->pc = 0x2EB984u;
    ctx->pc = 0x2EB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB984u;
    // 0x2eb988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    sub_00100218_0x100218(rdram, ctx, runtime); return;
    ctx->pc = 0x2EB98Cu;
label_2eb98c:
    // 0x2eb98c: 0x0  nop
    ctx->pc = 0x2eb98cu;
    // NOP
    ctx->pc = 0x2eb990u;
}
