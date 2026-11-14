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

// Function: sub_002F7048
// Address: 0x2f7048 - 0x2f7250
void sub_002F7048_0x2f7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7048_0x2f7048");
#endif

    switch (ctx->pc) {
        case 0x2f7068u: goto label_2f7068;
        case 0x2f7074u: goto label_2f7074;
        case 0x2f70a0u: goto label_2f70a0;
        case 0x2f70b8u: goto label_2f70b8;
        case 0x2f70ccu: goto label_2f70cc;
        case 0x2f70dcu: goto label_2f70dc;
        case 0x2f70f0u: goto label_2f70f0;
        case 0x2f70f8u: goto label_2f70f8;
        case 0x2f7118u: goto label_2f7118;
        case 0x2f712cu: goto label_2f712c;
        case 0x2f7150u: goto label_2f7150;
        case 0x2f7158u: goto label_2f7158;
        case 0x2f71a0u: goto label_2f71a0;
        default: break;
    }

    ctx->pc = 0x2f7048u;

    // 0x2f7048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f704c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f7050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f705c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f705cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f7060: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x2F7060u;
    SET_GPR_U32(ctx, 31, 0x2F7068u);
    ctx->pc = 0x2F7064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7060u;
    // 0x2f7064: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6750u, 0x2F7060u, 0x2F7068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7068u;
label_2f7068:
    // 0x2f7068: 0x8e04ef2c  lw          $a0, -0x10D4($s0)
    ctx->pc = 0x2f7068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962988)));
    // 0x2f706c: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x2F706Cu;
    SET_GPR_U32(ctx, 31, 0x2F7074u);
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x2F706Cu, 0x2F7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7074u;
label_2f7074:
    // 0x2f7074: 0x8e03ef2c  lw          $v1, -0x10D4($s0)
    ctx->pc = 0x2f7074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962988)));
    // 0x2f7078: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F7078u;
    {
        const bool branch_taken_0x2f7078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7078u;
        // 0x2f707c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7078) {
            ctx->pc = 0x2F70A8u;
            goto label_2f70a8;
        }
    }
    ctx->pc = 0x2F7080u;
    // 0x2f7080: 0x8c43ef10  lw          $v1, -0x10F0($v0)
    ctx->pc = 0x2f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962960)));
    // 0x2f7084: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7084u;
    {
        const bool branch_taken_0x2f7084 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7084u;
        // 0x2f7088: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7084) {
            ctx->pc = 0x2F70CCu;
            goto label_2f70cc;
        }
    }
    ctx->pc = 0x2F708Cu;
    // 0x2f708c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f708cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7090: 0x8c46ef18  lw          $a2, -0x10E8($v0)
    ctx->pc = 0x2f7090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962968)));
    // 0x2f7094: 0x24849b48  addiu       $a0, $a0, -0x64B8
    ctx->pc = 0x2f7094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941512));
    // 0x2f7098: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7098u;
    SET_GPR_U32(ctx, 31, 0x2F70A0u);
    ctx->pc = 0x2F709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7098u;
    // 0x2f709c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7098u, 0x2F70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70A0u;
label_2f70a0:
    // 0x2f70a0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F70A0u;
    {
        const bool branch_taken_0x2f70a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70A0u;
        // 0x2f70a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70a0) {
            ctx->pc = 0x2F7188u;
            goto label_2f7188;
        }
    }
    ctx->pc = 0x2F70A8u;
label_2f70a8:
    // 0x2f70a8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f70ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f70acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f70b0: 0xc0bdbf6  jal         func_2F6FD8
    ctx->pc = 0x2F70B0u;
    SET_GPR_U32(ctx, 31, 0x2F70B8u);
    ctx->pc = 0x2F70B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70B0u;
    // 0x2f70b4: 0xac51ef18  sw          $s1, -0x10E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962968), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6FD8u, 0x2F70B0u, 0x2F70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70B8u;
label_2f70b8:
    // 0x2f70b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F70B8u;
    {
        const bool branch_taken_0x2f70b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70B8u;
        // 0x2f70bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70b8) {
            ctx->pc = 0x2F70D4u;
            goto label_2f70d4;
        }
    }
    ctx->pc = 0x2F70C0u;
    // 0x2f70c0: 0x8e04ef2c  lw          $a0, -0x10D4($s0)
    ctx->pc = 0x2f70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962988)));
    // 0x2f70c4: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F70C4u;
    SET_GPR_U32(ctx, 31, 0x2F70CCu);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F70C4u, 0x2F70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70CCu;
label_2f70cc:
    // 0x2f70cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F70CCu;
    {
        const bool branch_taken_0x2f70cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70CCu;
        // 0x2f70d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70cc) {
            ctx->pc = 0x2F7188u;
            goto label_2f7188;
        }
    }
    ctx->pc = 0x2F70D4u;
label_2f70d4:
    // 0x2f70d4: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F70D4u;
    SET_GPR_U32(ctx, 31, 0x2F70DCu);
    ctx->pc = 0x2F70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70D4u;
    // 0x2f70d8: 0x3c12004f  lui         $s2, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F70D4u, 0x2F70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70DCu;
label_2f70dc:
    // 0x2f70dc: 0x8e42ef54  lw          $v0, -0x10AC($s2)
    ctx->pc = 0x2f70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963028)));
    // 0x2f70e0: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F70E0u;
    {
        const bool branch_taken_0x2f70e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70E0u;
        // 0x2f70e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70e0) {
            ctx->pc = 0x2F7188u;
            goto label_2f7188;
        }
    }
    ctx->pc = 0x2F70E8u;
    // 0x2f70e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F70E8u;
    {
        const bool branch_taken_0x2f70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70E8u;
        // 0x2f70ec: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70e8) {
            ctx->pc = 0x2F7114u;
            goto label_2f7114;
        }
    }
    ctx->pc = 0x2F70F0u;
label_2f70f0:
    // 0x2f70f0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2f70f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f70f8:
    // 0x2f70f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f70fc: 0x0  nop
    ctx->pc = 0x2f70fcu;
    // NOP
    // 0x2f7100: 0x0  nop
    ctx->pc = 0x2f7100u;
    // NOP
    // 0x2f7104: 0x0  nop
    ctx->pc = 0x2f7104u;
    // NOP
    // 0x2f7108: 0x0  nop
    ctx->pc = 0x2f7108u;
    // NOP
    // 0x2f710c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F710Cu;
    {
        const bool branch_taken_0x2f710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f710c) {
            ctx->pc = 0x2F70F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f70f8;
        }
    }
    ctx->pc = 0x2F7114u;
label_2f7114:
    // 0x2f7114: 0x26300a80  addiu       $s0, $s1, 0xA80
    ctx->pc = 0x2f7114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
label_2f7118:
    // 0x2f7118: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7120: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x2f7120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x2f7124: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7124u;
    SET_GPR_U32(ctx, 31, 0x2F712Cu);
    ctx->pc = 0x2F7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7124u;
    // 0x2f7128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7124u, 0x2F712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F712Cu;
label_2f712c:
    // 0x2f712c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F712Cu;
    {
        const bool branch_taken_0x2f712c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f712c) {
            ctx->pc = 0x2F7130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F712Cu;
            // 0x2f7130: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F717Cu;
            goto label_2f717c;
        }
    }
    ctx->pc = 0x2F7134u;
    // 0x2f7134: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f7138: 0x8c43ef10  lw          $v1, -0x10F0($v0)
    ctx->pc = 0x2f7138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEF10u));
    // 0x2f713c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F713Cu;
    {
        const bool branch_taken_0x2f713c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F713Cu;
        // 0x2f7140: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f713c) {
            ctx->pc = 0x2F7154u;
            goto label_2f7154;
        }
    }
    ctx->pc = 0x2F7144u;
    // 0x2f7144: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7148: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7148u;
    SET_GPR_U32(ctx, 31, 0x2F7150u);
    ctx->pc = 0x2F714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7148u;
    // 0x2f714c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7148u, 0x2F7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7150u;
label_2f7150:
    // 0x2f7150: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f7150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2f7154:
    // 0x2f7154: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7158:
    // 0x2f7158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f715c: 0x0  nop
    ctx->pc = 0x2f715cu;
    // NOP
    // 0x2f7160: 0x0  nop
    ctx->pc = 0x2f7160u;
    // NOP
    // 0x2f7164: 0x0  nop
    ctx->pc = 0x2f7164u;
    // NOP
    // 0x2f7168: 0x0  nop
    ctx->pc = 0x2f7168u;
    // NOP
    // 0x2f716c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F716Cu;
    {
        const bool branch_taken_0x2f716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f716c) {
            ctx->pc = 0x2F7158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7158;
        }
    }
    ctx->pc = 0x2F7174u;
    // 0x2f7174: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F7174u;
    {
        const bool branch_taken_0x2f7174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7174u;
        // 0x2f7178: 0x26300a80  addiu       $s0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7174) {
            ctx->pc = 0x2F7118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7118;
        }
    }
    ctx->pc = 0x2F717Cu;
label_2f717c:
    // 0x2f717c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F717Cu;
    {
        const bool branch_taken_0x2f717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F717Cu;
        // 0x2f7180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f717c) {
            ctx->pc = 0x2F70F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f70f0;
        }
    }
    ctx->pc = 0x2F7184u;
    // 0x2f7184: 0xae40ef54  sw          $zero, -0x10AC($s2)
    ctx->pc = 0x2f7184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963028), GPR_U32(ctx, 0));
label_2f7188:
    // 0x2f7188: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f7188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f718c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f718cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7190: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7198: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7198u;
        // 0x2f719c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F71A0u;
label_2f71a0:
    // 0x2f71a0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x2f71a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2f71a4: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F71A4u;
    {
        const bool branch_taken_0x2f71a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71A4u;
        // 0x2f71a8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71a4) {
            ctx->pc = 0x2F7240u;
            goto label_2f7240;
        }
    }
    ctx->pc = 0x2F71ACu;
    // 0x2f71ac: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x2f71acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x2f71b0: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F71B0u;
    {
        const bool branch_taken_0x2f71b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71B0u;
        // 0x2f71b4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71b0) {
            ctx->pc = 0x2F7238u;
            goto label_2f7238;
        }
    }
    ctx->pc = 0x2F71B8u;
    // 0x2f71b8: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x2f71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2f71bc: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F71BCu;
    {
        const bool branch_taken_0x2f71bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71BCu;
        // 0x2f71c0: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71bc) {
            ctx->pc = 0x2F7230u;
            goto label_2f7230;
        }
    }
    ctx->pc = 0x2F71C4u;
    // 0x2f71c4: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x2f71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2f71c8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F71C8u;
    {
        const bool branch_taken_0x2f71c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71C8u;
        // 0x2f71cc: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71c8) {
            ctx->pc = 0x2F7228u;
            goto label_2f7228;
        }
    }
    ctx->pc = 0x2F71D0u;
    // 0x2f71d0: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x2f71d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x2f71d4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F71D4u;
    {
        const bool branch_taken_0x2f71d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71D4u;
        // 0x2f71d8: 0x34028013  ori         $v0, $zero, 0x8013 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71d4) {
            ctx->pc = 0x2F7218u;
            goto label_2f7218;
        }
    }
    ctx->pc = 0x2F71DCu;
    // 0x2f71dc: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F71DCu;
    {
        const bool branch_taken_0x2f71dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71DCu;
        // 0x2f71e0: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71dc) {
            ctx->pc = 0x2F7210u;
            goto label_2f7210;
        }
    }
    ctx->pc = 0x2F71E4u;
    // 0x2f71e4: 0x34028012  ori         $v0, $zero, 0x8012
    ctx->pc = 0x2f71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x2f71e8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F71E8u;
    {
        const bool branch_taken_0x2f71e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71E8u;
        // 0x2f71ec: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71e8) {
            ctx->pc = 0x2F7208u;
            goto label_2f7208;
        }
    }
    ctx->pc = 0x2F71F0u;
    // 0x2f71f0: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x2f71f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x2f71f4: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F71F4u;
    {
        const bool branch_taken_0x2f71f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f71f4) {
            ctx->pc = 0x2F71F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F71F4u;
            // 0x2f71f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F71FCu;
    // 0x2f71fc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f7200: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F7200u;
    {
        const bool branch_taken_0x2f7200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7200u;
        // 0x2f7204: 0x24420a80  addiu       $v0, $v0, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7200) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7208u;
label_2f7208:
    // 0x2f7208: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F7208u;
    {
        const bool branch_taken_0x2f7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7208u;
        // 0x2f720c: 0x24420540  addiu       $v0, $v0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7208) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7210u;
label_2f7210:
    // 0x2f7210: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F7210u;
    {
        const bool branch_taken_0x2f7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7210u;
        // 0x2f7214: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7210) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7218u;
label_2f7218:
    // 0x2f7218: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f721c: 0x8c42ef2c  lw          $v0, -0x10D4($v0)
    ctx->pc = 0x2f721cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF2Cu));
    // 0x2f7220: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7220u;
    {
        const bool branch_taken_0x2f7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7220u;
        // 0x2f7224: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7220) {
            ctx->pc = 0x2F7248u;
            goto label_2f7248;
        }
    }
    ctx->pc = 0x2F7228u;
label_2f7228:
    // 0x2f7228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7228u;
    {
        const bool branch_taken_0x2f7228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7228u;
        // 0x2f722c: 0x244200d0  addiu       $v0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7228) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7230u;
label_2f7230:
    // 0x2f7230: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7230u;
    {
        const bool branch_taken_0x2f7230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7230u;
        // 0x2f7234: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7230) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7238u;
label_2f7238:
    // 0x2f7238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7238u;
    {
        const bool branch_taken_0x2f7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7238u;
        // 0x2f723c: 0x2442ef80  addiu       $v0, $v0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7238) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7240u;
label_2f7240:
    // 0x2f7240: 0x8c42ef28  lw          $v0, -0x10D8($v0)
    ctx->pc = 0x2f7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962984)));
label_2f7244:
    // 0x2f7244: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2f7244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2f7248:
    // 0x2f7248: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7248u;
        // 0x2f724c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7250u;
}
