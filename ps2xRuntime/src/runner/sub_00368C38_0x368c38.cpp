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

// Function: sub_00368C38
// Address: 0x368c38 - 0x369bd8
void sub_00368C38_0x368c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368C38_0x368c38");
#endif

    switch (ctx->pc) {
        case 0x368c88u: goto label_368c88;
        case 0x368cb4u: goto label_368cb4;
        case 0x368d00u: goto label_368d00;
        case 0x368d28u: goto label_368d28;
        case 0x368d48u: goto label_368d48;
        case 0x368dd8u: goto label_368dd8;
        case 0x368df4u: goto label_368df4;
        case 0x368e34u: goto label_368e34;
        case 0x368e58u: goto label_368e58;
        case 0x368eb0u: goto label_368eb0;
        case 0x368ed8u: goto label_368ed8;
        case 0x368f00u: goto label_368f00;
        case 0x368f6cu: goto label_368f6c;
        case 0x368fdcu: goto label_368fdc;
        case 0x369050u: goto label_369050;
        case 0x3690b4u: goto label_3690b4;
        case 0x369118u: goto label_369118;
        case 0x36917cu: goto label_36917c;
        case 0x36920cu: goto label_36920c;
        case 0x369244u: goto label_369244;
        case 0x369268u: goto label_369268;
        case 0x3692f0u: goto label_3692f0;
        case 0x369340u: goto label_369340;
        case 0x369368u: goto label_369368;
        case 0x3693f0u: goto label_3693f0;
        case 0x369418u: goto label_369418;
        case 0x36946cu: goto label_36946c;
        case 0x3694d8u: goto label_3694d8;
        case 0x369540u: goto label_369540;
        case 0x3695b0u: goto label_3695b0;
        case 0x369614u: goto label_369614;
        case 0x369678u: goto label_369678;
        case 0x3696dcu: goto label_3696dc;
        case 0x369780u: goto label_369780;
        case 0x3697c8u: goto label_3697c8;
        case 0x3697f0u: goto label_3697f0;
        case 0x369864u: goto label_369864;
        case 0x3698c4u: goto label_3698c4;
        case 0x369930u: goto label_369930;
        case 0x369998u: goto label_369998;
        case 0x369a08u: goto label_369a08;
        case 0x369a6cu: goto label_369a6c;
        case 0x369ad0u: goto label_369ad0;
        case 0x369b34u: goto label_369b34;
        default: break;
    }

    ctx->pc = 0x368c38u;

    // 0x368c38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x368c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x368c3c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x368c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x368c40: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x368c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x368c44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x368c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c48: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x368c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x368c4c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x368c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x368c50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x368c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x368c54: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x368c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x368c58: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x368c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x368c5c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x368c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x368c60: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x368c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x368c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368c68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x368c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x368c6c: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x368c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x368c70: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x368c70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x368c74: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x368c74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x368c78: 0x14a602f9  bne         $a1, $a2, . + 4 + (0x2F9 << 2)
    ctx->pc = 0x368C78u;
    {
        const bool branch_taken_0x368c78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x368C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C78u;
        // 0x368c7c: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c78) {
            ctx->pc = 0x369860u;
            goto label_369860;
        }
    }
    ctx->pc = 0x368C80u;
    // 0x368c80: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x368C80u;
    SET_GPR_U32(ctx, 31, 0x368C88u);
    ctx->pc = 0x368C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C80u;
    // 0x368c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x368C80u, 0x368C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C88u;
label_368c88:
    // 0x368c88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x368c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x368c8c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x368c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x368c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x368c90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x368c94: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x368c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x368c98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x368C98u;
    {
        const bool branch_taken_0x368c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C98u;
        // 0x368c9c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c98) {
            ctx->pc = 0x368CD0u;
            goto label_368cd0;
        }
    }
    ctx->pc = 0x368CA0u;
    // 0x368ca0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x368ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x368ca4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x368ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x368ca8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x368ca8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x368cac: 0xf  sync
    ctx->pc = 0x368cacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368cb0: 0x40f  sync.p
    ctx->pc = 0x368cb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368cb4:
    // 0x368cb4: 0x0  nop
    ctx->pc = 0x368cb4u;
    // NOP
    // 0x368cb8: 0x0  nop
    ctx->pc = 0x368cb8u;
    // NOP
    // 0x368cbc: 0x0  nop
    ctx->pc = 0x368cbcu;
    // NOP
    // 0x368cc0: 0x0  nop
    ctx->pc = 0x368cc0u;
    // NOP
    // 0x368cc4: 0x0  nop
    ctx->pc = 0x368cc4u;
    // NOP
    // 0x368cc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x368CC8u;
    {
        const bool branch_taken_0x368cc8 = (false);
        if (branch_taken_0x368cc8) {
            ctx->pc = 0x368CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368cb4;
        }
    }
    ctx->pc = 0x368CD0u;
label_368cd0:
    // 0x368cd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x368cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x368cd4: 0x2a44007f  slti        $a0, $s2, 0x7F
    ctx->pc = 0x368cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x368cd8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x368cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x368cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x368cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368ce0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368ce4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x368CE4u;
    {
        const bool branch_taken_0x368ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368CE4u;
        // 0x368ce8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ce4) {
            ctx->pc = 0x368D44u;
            goto label_368d44;
        }
    }
    ctx->pc = 0x368CECu;
    // 0x368cec: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x368cf0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x368cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x368cf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x368cf4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x368cf8: 0xf  sync
    ctx->pc = 0x368cf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368cfc: 0x40f  sync.p
    ctx->pc = 0x368cfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368d00:
    // 0x368d00: 0x0  nop
    ctx->pc = 0x368d00u;
    // NOP
    // 0x368d04: 0x0  nop
    ctx->pc = 0x368d04u;
    // NOP
    // 0x368d08: 0x0  nop
    ctx->pc = 0x368d08u;
    // NOP
    // 0x368d0c: 0x0  nop
    ctx->pc = 0x368d0cu;
    // NOP
    // 0x368d10: 0x0  nop
    ctx->pc = 0x368d10u;
    // NOP
    // 0x368d14: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x368D14u;
    {
        const bool branch_taken_0x368d14 = (false);
        if (branch_taken_0x368d14) {
            ctx->pc = 0x368D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368d00;
        }
    }
    ctx->pc = 0x368D1Cu;
    // 0x368d1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x368d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x368d20: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x368d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x368d24: 0x0  nop
    ctx->pc = 0x368d24u;
    // NOP
label_368d28:
    // 0x368d28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x368d28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x368d2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368d30: 0x0  nop
    ctx->pc = 0x368d30u;
    // NOP
    // 0x368d34: 0x0  nop
    ctx->pc = 0x368d34u;
    // NOP
    // 0x368d38: 0x0  nop
    ctx->pc = 0x368d38u;
    // NOP
    // 0x368d3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368D3Cu;
    {
        const bool branch_taken_0x368d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368d3c) {
            ctx->pc = 0x368D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368d28;
        }
    }
    ctx->pc = 0x368D44u;
label_368d44:
    // 0x368d44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x368d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_368d48:
    // 0x368d48: 0x42000039  di
    ctx->pc = 0x368d48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368d4c: 0x40f  sync.p
    ctx->pc = 0x368d4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368d50: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x368d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x368d54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x368d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368d58: 0x0  nop
    ctx->pc = 0x368d58u;
    // NOP
    // 0x368d5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368D5Cu;
    {
        const bool branch_taken_0x368d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368d5c) {
            ctx->pc = 0x368D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368d48;
        }
    }
    ctx->pc = 0x368D64u;
    // 0x368d64: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x368d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x368d68: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x368d68u;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x368d6c: 0x4a0002ff  vnop
    ctx->pc = 0x368d6cu;
    // NOP operation, no action needed for VU0
    // 0x368d70: 0x4a0002ff  vnop
    ctx->pc = 0x368d70u;
    // NOP operation, no action needed for VU0
    // 0x368d74: 0x42000038  ei
    ctx->pc = 0x368d74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368d78: 0x14800151  bnez        $a0, . + 4 + (0x151 << 2)
    ctx->pc = 0x368D78u;
    {
        const bool branch_taken_0x368d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x368d78) {
            ctx->pc = 0x3692C0u;
            goto label_3692c0;
        }
    }
    ctx->pc = 0x368D80u;
    // 0x368d80: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x368d84: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x368d84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x368d88: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x368d88u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x368d8c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x368d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x368d90: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x368d90u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x368d94: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x368d94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x368d98: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x368d98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x368d9c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x368d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x368da0: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x368da0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x368da4: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x368da4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x368da8: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x368da8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x368dac: 0x356be020  ori         $t3, $t3, 0xE020
    ctx->pc = 0x368dacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57376);
    // 0x368db0: 0x240e0100  addiu       $t6, $zero, 0x100
    ctx->pc = 0x368db0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x368db4: 0x358cd400  ori         $t4, $t4, 0xD400
    ctx->pc = 0x368db4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)54272);
    // 0x368db8: 0x24180200  addiu       $t8, $zero, 0x200
    ctx->pc = 0x368db8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x368dbc: 0x35efe010  ori         $t7, $t7, 0xE010
    ctx->pc = 0x368dbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)57360);
    // 0x368dc0: 0x37ded480  ori         $fp, $fp, 0xD480
    ctx->pc = 0x368dc0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)54400);
    // 0x368dc4: 0x36f7d410  ori         $s7, $s7, 0xD410
    ctx->pc = 0x368dc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54288);
    // 0x368dc8: 0x36d6d420  ori         $s6, $s6, 0xD420
    ctx->pc = 0x368dc8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54304);
    // 0x368dcc: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x368dccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x368dd0: 0x3694d010  ori         $s4, $s4, 0xD010
    ctx->pc = 0x368dd0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53264);
    // 0x368dd4: 0x3673d020  ori         $s3, $s3, 0xD020
    ctx->pc = 0x368dd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53280);
label_368dd8:
    // 0x368dd8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x368dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 13), 0))); // MMIO: 0x1000d000
    // 0x368ddc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368de0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x368DE0u;
    {
        const bool branch_taken_0x368de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368de0) {
            ctx->pc = 0x368E10u;
            goto label_368e10;
        }
    }
    ctx->pc = 0x368DE8u;
    // 0x368de8: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x368de8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x368dec: 0xf  sync
    ctx->pc = 0x368decu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368df0: 0x40f  sync.p
    ctx->pc = 0x368df0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368df4:
    // 0x368df4: 0x0  nop
    ctx->pc = 0x368df4u;
    // NOP
    // 0x368df8: 0x0  nop
    ctx->pc = 0x368df8u;
    // NOP
    // 0x368dfc: 0x0  nop
    ctx->pc = 0x368dfcu;
    // NOP
    // 0x368e00: 0x0  nop
    ctx->pc = 0x368e00u;
    // NOP
    // 0x368e04: 0x0  nop
    ctx->pc = 0x368e04u;
    // NOP
    // 0x368e08: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x368E08u;
    {
        const bool branch_taken_0x368e08 = (false);
        if (branch_taken_0x368e08) {
            ctx->pc = 0x368DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368df4;
        }
    }
    ctx->pc = 0x368E10u;
label_368e10:
    // 0x368e10: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x368e14: 0x2647ff81  addiu       $a3, $s2, -0x7F
    ctx->pc = 0x368e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967169));
    // 0x368e18: 0x26121fc0  addiu       $s2, $s0, 0x1FC0
    ctx->pc = 0x368e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x368e1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368e20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x368E20u;
    {
        const bool branch_taken_0x368e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E20u;
        // 0x368e24: 0x26391fc0  addiu       $t9, $s1, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), 8128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e20) {
            ctx->pc = 0x368E74u;
            goto label_368e74;
        }
    }
    ctx->pc = 0x368E28u;
    // 0x368e28: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x368e28u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x368e2c: 0xf  sync
    ctx->pc = 0x368e2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368e30: 0x40f  sync.p
    ctx->pc = 0x368e30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368e34:
    // 0x368e34: 0x0  nop
    ctx->pc = 0x368e34u;
    // NOP
    // 0x368e38: 0x0  nop
    ctx->pc = 0x368e38u;
    // NOP
    // 0x368e3c: 0x0  nop
    ctx->pc = 0x368e3cu;
    // NOP
    // 0x368e40: 0x0  nop
    ctx->pc = 0x368e40u;
    // NOP
    // 0x368e44: 0x0  nop
    ctx->pc = 0x368e44u;
    // NOP
    // 0x368e48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x368E48u;
    {
        const bool branch_taken_0x368e48 = (false);
        if (branch_taken_0x368e48) {
            ctx->pc = 0x368E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368e34;
        }
    }
    ctx->pc = 0x368E50u;
    // 0x368e50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x368e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x368e54: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x368e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_368e58:
    // 0x368e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x368e58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x368e5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368e60: 0x0  nop
    ctx->pc = 0x368e60u;
    // NOP
    // 0x368e64: 0x0  nop
    ctx->pc = 0x368e64u;
    // NOP
    // 0x368e68: 0x0  nop
    ctx->pc = 0x368e68u;
    // NOP
    // 0x368e6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368E6Cu;
    {
        const bool branch_taken_0x368e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368e6c) {
            ctx->pc = 0x368E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368e58;
        }
    }
    ctx->pc = 0x368E74u;
label_368e74:
    // 0x368e74: 0xadf80000  sw          $t8, 0x0($t7)
    ctx->pc = 0x368e74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 24));
    // 0x368e78: 0x240201fc  addiu       $v0, $zero, 0x1FC
    ctx->pc = 0x368e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x368e7c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x368e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x368e80: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x368e80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x368e84: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x368e84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x368e88: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x368e88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x368e8c: 0xf  sync
    ctx->pc = 0x368e8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368e90: 0x40f  sync.p
    ctx->pc = 0x368e90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368e94: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x368e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x368e98: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368e9c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x368E9Cu;
    {
        const bool branch_taken_0x368e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E9Cu;
        // 0x368ea0: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e9c) {
            ctx->pc = 0x368EF4u;
            goto label_368ef4;
        }
    }
    ctx->pc = 0x368EA4u;
    // 0x368ea4: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x368ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x368ea8: 0xf  sync
    ctx->pc = 0x368ea8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368eac: 0x40f  sync.p
    ctx->pc = 0x368eacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_368eb0:
    // 0x368eb0: 0x0  nop
    ctx->pc = 0x368eb0u;
    // NOP
    // 0x368eb4: 0x0  nop
    ctx->pc = 0x368eb4u;
    // NOP
    // 0x368eb8: 0x0  nop
    ctx->pc = 0x368eb8u;
    // NOP
    // 0x368ebc: 0x0  nop
    ctx->pc = 0x368ebcu;
    // NOP
    // 0x368ec0: 0x0  nop
    ctx->pc = 0x368ec0u;
    // NOP
    // 0x368ec4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x368EC4u;
    {
        const bool branch_taken_0x368ec4 = (false);
        if (branch_taken_0x368ec4) {
            ctx->pc = 0x368EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368eb0;
        }
    }
    ctx->pc = 0x368ECCu;
    // 0x368ecc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x368eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x368ed0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x368ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x368ed4: 0x0  nop
    ctx->pc = 0x368ed4u;
    // NOP
label_368ed8:
    // 0x368ed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x368ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x368edc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x368edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x368ee0: 0x0  nop
    ctx->pc = 0x368ee0u;
    // NOP
    // 0x368ee4: 0x0  nop
    ctx->pc = 0x368ee4u;
    // NOP
    // 0x368ee8: 0x0  nop
    ctx->pc = 0x368ee8u;
    // NOP
    // 0x368eec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368EECu;
    {
        const bool branch_taken_0x368eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EECu;
        // 0x368ef0: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368eec) {
            ctx->pc = 0x368ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368ed8;
        }
    }
    ctx->pc = 0x368EF4u;
label_368ef4:
    // 0x368ef4: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x368ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x368ef8: 0x34c61fc0  ori         $a2, $a2, 0x1FC0
    ctx->pc = 0x368ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8128);
    // 0x368efc: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x368efcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_368f00:
    // 0x368f00: 0x42000039  di
    ctx->pc = 0x368f00u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368f04: 0x40f  sync.p
    ctx->pc = 0x368f04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368f08: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368f0c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x368f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x368f10: 0x0  nop
    ctx->pc = 0x368f10u;
    // NOP
    // 0x368f14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368F14u;
    {
        const bool branch_taken_0x368f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368f14) {
            ctx->pc = 0x368F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368f00;
        }
    }
    ctx->pc = 0x368F1Cu;
    // 0x368f1c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x368f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x368f20: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x368f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x368f24: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x368f24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x368f28: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x368f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x368f2c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x368f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368f30: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x368f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368f34: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x368f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x368f38: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x368f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x368f3c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x368f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x368f40: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x368f40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x368f44: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x368f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x368f48: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x368f48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x368f4c: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x368f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x368f50: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x368f50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x368f54: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x368f54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x368f58: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x368f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x368f5c: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x368f5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x368f60: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x368f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x368f64: 0x42000038  ei
    ctx->pc = 0x368f64u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368f68: 0x240a007d  addiu       $t2, $zero, 0x7D
    ctx->pc = 0x368f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_368f6c:
    // 0x368f6c: 0x42000039  di
    ctx->pc = 0x368f6cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368f70: 0x40f  sync.p
    ctx->pc = 0x368f70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368f74: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368f78: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x368f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x368f7c: 0x0  nop
    ctx->pc = 0x368f7cu;
    // NOP
    // 0x368f80: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368F80u;
    {
        const bool branch_taken_0x368f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368f80) {
            ctx->pc = 0x368F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368f6c;
        }
    }
    ctx->pc = 0x368F88u;
    // 0x368f88: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x368f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x368f8c: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x368f8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x368f90: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x368f90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x368f94: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x368f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x368f98: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x368f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x368f9c: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x368f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x368fa0: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x368fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x368fa4: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x368fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x368fa8: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x368fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x368fac: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x368facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x368fb0: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x368fb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x368fb4: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x368fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x368fb8: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x368fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x368fbc: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x368fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x368fc0: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x368fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x368fc4: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x368fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x368fc8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x368fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x368fcc: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x368fccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x368fd0: 0x34c62040  ori         $a2, $a2, 0x2040
    ctx->pc = 0x368fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8256);
    // 0x368fd4: 0x42000038  ei
    ctx->pc = 0x368fd4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x368fd8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x368fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_368fdc:
    // 0x368fdc: 0x42000039  di
    ctx->pc = 0x368fdcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x368fe0: 0x40f  sync.p
    ctx->pc = 0x368fe0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x368fe4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x368fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x368fe8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x368fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x368fec: 0x0  nop
    ctx->pc = 0x368fecu;
    // NOP
    // 0x368ff0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368FF0u;
    {
        const bool branch_taken_0x368ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368ff0) {
            ctx->pc = 0x368FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368fdc;
        }
    }
    ctx->pc = 0x368FF8u;
    // 0x368ff8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x368ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x368ffc: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x368ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369000: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369000u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369004: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369004u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369008: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36900c: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x36900cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369010: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369014: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369018: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36901c: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36901cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369020: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369020u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369024: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369024u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369028: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x369028u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36902c: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x36902cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369030: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369030u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369034: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x369034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x369038: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x369038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x36903c: 0x42000038  ei
    ctx->pc = 0x36903cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369040: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x369040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x369044: 0x540006a  bltz        $t2, . + 4 + (0x6A << 2)
    ctx->pc = 0x369044u;
    {
        const bool branch_taken_0x369044 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x369044) {
            ctx->pc = 0x3691F0u;
            goto label_3691f0;
        }
    }
    ctx->pc = 0x36904Cu;
    // 0x36904c: 0x0  nop
    ctx->pc = 0x36904cu;
    // NOP
label_369050:
    // 0x369050: 0x42000039  di
    ctx->pc = 0x369050u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369054: 0x40f  sync.p
    ctx->pc = 0x369054u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369058: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36905c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x36905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x369060: 0x0  nop
    ctx->pc = 0x369060u;
    // NOP
    // 0x369064: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369064u;
    {
        const bool branch_taken_0x369064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369064) {
            ctx->pc = 0x369050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369050;
        }
    }
    ctx->pc = 0x36906Cu;
    // 0x36906c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36906cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369070: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x369070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369074: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369074u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369078: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36907c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x36907cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369080: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369084: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369088: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36908c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36908cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369090: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369094: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369098: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369098u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36909c: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36909cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3690a0: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x3690a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3690a4: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x3690a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x3690a8: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x3690a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x3690ac: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x3690acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3690b0: 0x42000038  ei
    ctx->pc = 0x3690b0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3690b4:
    // 0x3690b4: 0x42000039  di
    ctx->pc = 0x3690b4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3690b8: 0x40f  sync.p
    ctx->pc = 0x3690b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3690bc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3690bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3690c0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3690c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3690c4: 0x0  nop
    ctx->pc = 0x3690c4u;
    // NOP
    // 0x3690c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3690C8u;
    {
        const bool branch_taken_0x3690c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3690c8) {
            ctx->pc = 0x3690B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3690b4;
        }
    }
    ctx->pc = 0x3690D0u;
    // 0x3690d0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3690d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3690d4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x3690d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3690d8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x3690d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3690dc: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x3690dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3690e0: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3690e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3690e4: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3690e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3690e8: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3690e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3690ec: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3690ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3690f0: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3690f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3690f4: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3690f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3690f8: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3690f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3690fc: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x3690fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369100: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x369100u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369104: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x369104u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369108: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x369108u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36910c: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x36910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x369110: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x369110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x369114: 0x42000038  ei
    ctx->pc = 0x369114u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369118:
    // 0x369118: 0x42000039  di
    ctx->pc = 0x369118u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36911c: 0x40f  sync.p
    ctx->pc = 0x36911cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369120: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369120u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369124: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x369124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x369128: 0x0  nop
    ctx->pc = 0x369128u;
    // NOP
    // 0x36912c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36912Cu;
    {
        const bool branch_taken_0x36912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36912c) {
            ctx->pc = 0x369118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369118;
        }
    }
    ctx->pc = 0x369134u;
    // 0x369134: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x369134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369138: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x369138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36913c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x36913cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x369140: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x369140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x369144: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369148: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36914c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36914cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369150: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369154: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369158: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36915c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36915cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369160: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x369160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369164: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x369164u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369168: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x369168u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36916c: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x36916cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369170: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x369170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x369174: 0x24c300c0  addiu       $v1, $a2, 0xC0
    ctx->pc = 0x369174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x369178: 0x42000038  ei
    ctx->pc = 0x369178u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_36917c:
    // 0x36917c: 0x42000039  di
    ctx->pc = 0x36917cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369180: 0x40f  sync.p
    ctx->pc = 0x369180u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369184: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369188: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x369188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x36918c: 0x0  nop
    ctx->pc = 0x36918cu;
    // NOP
    // 0x369190: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369190u;
    {
        const bool branch_taken_0x369190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369190) {
            ctx->pc = 0x36917Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36917c;
        }
    }
    ctx->pc = 0x369198u;
    // 0x369198: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x369198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36919c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x36919cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3691a0: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x3691a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3691a4: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x3691a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3691a8: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3691a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3691ac: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3691acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3691b0: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3691b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3691b4: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3691b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3691b8: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3691b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3691bc: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3691bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3691c0: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3691c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3691c4: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x3691c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3691c8: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x3691c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3691cc: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x3691ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3691d0: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x3691d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x3691d4: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x3691d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x3691d8: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x3691d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x3691dc: 0x42000038  ei
    ctx->pc = 0x3691dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3691e0: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x3691e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3691e4: 0x541ff9a  bgez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x3691E4u;
    {
        const bool branch_taken_0x3691e4 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x3691e4) {
            ctx->pc = 0x369050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369050;
        }
    }
    ctx->pc = 0x3691ECu;
    // 0x3691ec: 0x0  nop
    ctx->pc = 0x3691ecu;
    // NOP
label_3691f0:
    // 0x3691f0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x3691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3691f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3691f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3691f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3691F8u;
    {
        const bool branch_taken_0x3691f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3691f8) {
            ctx->pc = 0x369228u;
            goto label_369228;
        }
    }
    ctx->pc = 0x369200u;
    // 0x369200: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x369200u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x369204: 0xf  sync
    ctx->pc = 0x369204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369208: 0x40f  sync.p
    ctx->pc = 0x369208u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36920c:
    // 0x36920c: 0x0  nop
    ctx->pc = 0x36920cu;
    // NOP
    // 0x369210: 0x0  nop
    ctx->pc = 0x369210u;
    // NOP
    // 0x369214: 0x0  nop
    ctx->pc = 0x369214u;
    // NOP
    // 0x369218: 0x0  nop
    ctx->pc = 0x369218u;
    // NOP
    // 0x36921c: 0x0  nop
    ctx->pc = 0x36921cu;
    // NOP
    // 0x369220: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369220u;
    {
        const bool branch_taken_0x369220 = (false);
        if (branch_taken_0x369220) {
            ctx->pc = 0x36920Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36920c;
        }
    }
    ctx->pc = 0x369228u;
label_369228:
    // 0x369228: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x369228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36922c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369230: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x369230u;
    {
        const bool branch_taken_0x369230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369230) {
            ctx->pc = 0x369284u;
            goto label_369284;
        }
    }
    ctx->pc = 0x369238u;
    // 0x369238: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x369238u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x36923c: 0xf  sync
    ctx->pc = 0x36923cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369240: 0x40f  sync.p
    ctx->pc = 0x369240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369244:
    // 0x369244: 0x0  nop
    ctx->pc = 0x369244u;
    // NOP
    // 0x369248: 0x0  nop
    ctx->pc = 0x369248u;
    // NOP
    // 0x36924c: 0x0  nop
    ctx->pc = 0x36924cu;
    // NOP
    // 0x369250: 0x0  nop
    ctx->pc = 0x369250u;
    // NOP
    // 0x369254: 0x0  nop
    ctx->pc = 0x369254u;
    // NOP
    // 0x369258: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369258u;
    {
        const bool branch_taken_0x369258 = (false);
        if (branch_taken_0x369258) {
            ctx->pc = 0x369244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369244;
        }
    }
    ctx->pc = 0x369260u;
    // 0x369260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369264: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_369268:
    // 0x369268: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369268u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36926c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369270: 0x0  nop
    ctx->pc = 0x369270u;
    // NOP
    // 0x369274: 0x0  nop
    ctx->pc = 0x369274u;
    // NOP
    // 0x369278: 0x0  nop
    ctx->pc = 0x369278u;
    // NOP
    // 0x36927c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36927Cu;
    {
        const bool branch_taken_0x36927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36927c) {
            ctx->pc = 0x369268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369268;
        }
    }
    ctx->pc = 0x369284u;
label_369284:
    // 0x369284: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x369284u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x369288: 0x24031fc0  addiu       $v1, $zero, 0x1FC0
    ctx->pc = 0x369288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x36928c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x36928cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x369290: 0x240201fc  addiu       $v0, $zero, 0x1FC
    ctx->pc = 0x369290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x369294: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x369294u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x369298: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x369298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x36929c: 0xadae0000  sw          $t6, 0x0($t5)
    ctx->pc = 0x36929cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
    // 0x3692a0: 0xf  sync
    ctx->pc = 0x3692a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3692a4: 0x40f  sync.p
    ctx->pc = 0x3692a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3692a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3692a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3692acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692b0: 0x2a42007f  slti        $v0, $s2, 0x7F
    ctx->pc = 0x3692b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x3692b4: 0x1040fec8  beqz        $v0, . + 4 + (-0x138 << 2)
    ctx->pc = 0x3692B4u;
    {
        const bool branch_taken_0x3692b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692B4u;
        // 0x3692b8: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692b4) {
            ctx->pc = 0x368DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368dd8;
        }
    }
    ctx->pc = 0x3692BCu;
    // 0x3692bc: 0x0  nop
    ctx->pc = 0x3692bcu;
    // NOP
label_3692c0:
    // 0x3692c0: 0x12400239  beqz        $s2, . + 4 + (0x239 << 2)
    ctx->pc = 0x3692C0u;
    {
        const bool branch_taken_0x3692c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692C0u;
        // 0x3692c4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692c0) {
            ctx->pc = 0x369BA8u;
            goto label_369ba8;
        }
    }
    ctx->pc = 0x3692C8u;
    // 0x3692c8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3692c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3692cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3692ccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x3692d0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3692d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3692d4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3692D4u;
    {
        const bool branch_taken_0x3692d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3692D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692D4u;
        // 0x3692d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692d4) {
            ctx->pc = 0x369310u;
            goto label_369310;
        }
    }
    ctx->pc = 0x3692DCu;
    // 0x3692dc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3692dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3692e0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3692e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3692e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3692e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3692e8: 0xf  sync
    ctx->pc = 0x3692e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3692ec: 0x40f  sync.p
    ctx->pc = 0x3692ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3692f0:
    // 0x3692f0: 0x0  nop
    ctx->pc = 0x3692f0u;
    // NOP
    // 0x3692f4: 0x0  nop
    ctx->pc = 0x3692f4u;
    // NOP
    // 0x3692f8: 0x0  nop
    ctx->pc = 0x3692f8u;
    // NOP
    // 0x3692fc: 0x0  nop
    ctx->pc = 0x3692fcu;
    // NOP
    // 0x369300: 0x0  nop
    ctx->pc = 0x369300u;
    // NOP
    // 0x369304: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369304u;
    {
        const bool branch_taken_0x369304 = (false);
        if (branch_taken_0x369304) {
            ctx->pc = 0x3692F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3692f0;
        }
    }
    ctx->pc = 0x36930Cu;
    // 0x36930c: 0x0  nop
    ctx->pc = 0x36930cu;
    // NOP
label_369310:
    // 0x369310: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369314: 0x124880  sll         $t1, $s2, 2
    ctx->pc = 0x369314u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x369318: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36931c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369320: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x369320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369324: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x369324u;
    {
        const bool branch_taken_0x369324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369324u;
        // 0x369328: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369324) {
            ctx->pc = 0x369384u;
            goto label_369384;
        }
    }
    ctx->pc = 0x36932Cu;
    // 0x36932c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x369330: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x369330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x369334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x369334u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x369338: 0xf  sync
    ctx->pc = 0x369338u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36933c: 0x40f  sync.p
    ctx->pc = 0x36933cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369340:
    // 0x369340: 0x0  nop
    ctx->pc = 0x369340u;
    // NOP
    // 0x369344: 0x0  nop
    ctx->pc = 0x369344u;
    // NOP
    // 0x369348: 0x0  nop
    ctx->pc = 0x369348u;
    // NOP
    // 0x36934c: 0x0  nop
    ctx->pc = 0x36934cu;
    // NOP
    // 0x369350: 0x0  nop
    ctx->pc = 0x369350u;
    // NOP
    // 0x369354: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369354u;
    {
        const bool branch_taken_0x369354 = (false);
        if (branch_taken_0x369354) {
            ctx->pc = 0x369340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369340;
        }
    }
    ctx->pc = 0x36935Cu;
    // 0x36935c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369360: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x369364: 0x0  nop
    ctx->pc = 0x369364u;
    // NOP
label_369368:
    // 0x369368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369368u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36936c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369370: 0x0  nop
    ctx->pc = 0x369370u;
    // NOP
    // 0x369374: 0x0  nop
    ctx->pc = 0x369374u;
    // NOP
    // 0x369378: 0x0  nop
    ctx->pc = 0x369378u;
    // NOP
    // 0x36937c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36937Cu;
    {
        const bool branch_taken_0x36937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36937c) {
            ctx->pc = 0x369368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369368;
        }
    }
    ctx->pc = 0x369384u;
label_369384:
    // 0x369384: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x369384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x369388: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x369388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36938c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x369390: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369394: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x369394u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x369398: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x369398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x36939c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36939cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x3693a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3693a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3693a4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x3693a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x3693a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3693ac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3693acu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x3693b0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x3693b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x3693b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3693b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3693b8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x3693b8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 9)); // MMIO: 0x1000d420
    // 0x3693bc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x3693bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x3693c0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3693c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3693c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3693c4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x3693c8: 0xf  sync
    ctx->pc = 0x3693c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3693cc: 0x40f  sync.p
    ctx->pc = 0x3693ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3693d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3693d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3693d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3693d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3693d8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3693D8u;
    {
        const bool branch_taken_0x3693d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3693DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693D8u;
        // 0x3693dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693d8) {
            ctx->pc = 0x369434u;
            goto label_369434;
        }
    }
    ctx->pc = 0x3693E0u;
    // 0x3693e0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3693e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3693e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3693e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x3693e8: 0xf  sync
    ctx->pc = 0x3693e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3693ec: 0x40f  sync.p
    ctx->pc = 0x3693ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3693f0:
    // 0x3693f0: 0x0  nop
    ctx->pc = 0x3693f0u;
    // NOP
    // 0x3693f4: 0x0  nop
    ctx->pc = 0x3693f4u;
    // NOP
    // 0x3693f8: 0x0  nop
    ctx->pc = 0x3693f8u;
    // NOP
    // 0x3693fc: 0x0  nop
    ctx->pc = 0x3693fcu;
    // NOP
    // 0x369400: 0x0  nop
    ctx->pc = 0x369400u;
    // NOP
    // 0x369404: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369404u;
    {
        const bool branch_taken_0x369404 = (false);
        if (branch_taken_0x369404) {
            ctx->pc = 0x3693F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3693f0;
        }
    }
    ctx->pc = 0x36940Cu;
    // 0x36940c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36940cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x369410: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x369410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x369414: 0x0  nop
    ctx->pc = 0x369414u;
    // NOP
label_369418:
    // 0x369418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x369418u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36941c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x369420: 0x0  nop
    ctx->pc = 0x369420u;
    // NOP
    // 0x369424: 0x0  nop
    ctx->pc = 0x369424u;
    // NOP
    // 0x369428: 0x0  nop
    ctx->pc = 0x369428u;
    // NOP
    // 0x36942c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36942Cu;
    {
        const bool branch_taken_0x36942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36942c) {
            ctx->pc = 0x369418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369418;
        }
    }
    ctx->pc = 0x369434u;
label_369434:
    // 0x369434: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x369434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x369438: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x369438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x36943c: 0x1a4000c4  blez        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x36943Cu;
    {
        const bool branch_taken_0x36943c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x369440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36943Cu;
        // 0x369440: 0x34c61fc0  ori         $a2, $a2, 0x1FC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36943c) {
            ctx->pc = 0x369750u;
            goto label_369750;
        }
    }
    ctx->pc = 0x369444u;
    // 0x369444: 0x121023  negu        $v0, $s2
    ctx->pc = 0x369444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x369448: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x36944c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x36944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x369450: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x369450u;
    {
        const bool branch_taken_0x369450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369450u;
        // 0x369454: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369450) {
            ctx->pc = 0x3695B0u;
            goto label_3695b0;
        }
    }
    ctx->pc = 0x369458u;
    // 0x369458: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x369458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36945c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x36945Cu;
    {
        const bool branch_taken_0x36945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36945Cu;
        // 0x369460: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36945c) {
            ctx->pc = 0x369540u;
            goto label_369540;
        }
    }
    ctx->pc = 0x369464u;
    // 0x369464: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x369464u;
    {
        const bool branch_taken_0x369464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369464) {
            ctx->pc = 0x3694D8u;
            goto label_3694d8;
        }
    }
    ctx->pc = 0x36946Cu;
label_36946c:
    // 0x36946c: 0x42000039  di
    ctx->pc = 0x36946cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369470: 0x40f  sync.p
    ctx->pc = 0x369470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369474: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369474u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369478: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x369478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x36947c: 0x0  nop
    ctx->pc = 0x36947cu;
    // NOP
    // 0x369480: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369480u;
    {
        const bool branch_taken_0x369480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369480) {
            ctx->pc = 0x36946Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36946c;
        }
    }
    ctx->pc = 0x369488u;
    // 0x369488: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x369488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36948c: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x36948cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369490: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369490u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369494: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369498: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36949c: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x36949cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3694a0: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3694a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3694a4: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3694a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3694a8: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3694a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3694ac: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3694acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3694b0: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3694b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3694b4: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x3694b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3694b8: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x3694b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3694bc: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x3694bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3694c0: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x3694c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x3694c4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3694c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3694c8: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x3694c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x3694cc: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x3694ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x3694d0: 0x42000038  ei
    ctx->pc = 0x3694d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3694d4: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x3694d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3694d8:
    // 0x3694d8: 0x42000039  di
    ctx->pc = 0x3694d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3694dc: 0x40f  sync.p
    ctx->pc = 0x3694dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3694e0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3694e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3694e4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3694e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3694e8: 0x0  nop
    ctx->pc = 0x3694e8u;
    // NOP
    // 0x3694ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3694ECu;
    {
        const bool branch_taken_0x3694ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3694ec) {
            ctx->pc = 0x3694D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3694d8;
        }
    }
    ctx->pc = 0x3694F4u;
    // 0x3694f4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x3694f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3694f8: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x3694f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3694fc: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x3694fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369500: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369500u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x369504: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369508: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36950c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x36950cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369510: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369514: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369518: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36951c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x36951cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369520: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369520u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369524: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x369524u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369528: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369528u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x36952c: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x36952cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369530: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x369530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x369534: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x369534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x369538: 0x42000038  ei
    ctx->pc = 0x369538u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36953c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x36953cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_369540:
    // 0x369540: 0x42000039  di
    ctx->pc = 0x369540u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369544: 0x40f  sync.p
    ctx->pc = 0x369544u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369548: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369548u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36954c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x36954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x369550: 0x0  nop
    ctx->pc = 0x369550u;
    // NOP
    // 0x369554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369554u;
    {
        const bool branch_taken_0x369554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369554) {
            ctx->pc = 0x369540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369540;
        }
    }
    ctx->pc = 0x36955Cu;
    // 0x36955c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36955cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369560: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x369560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x369564: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x369564u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x369568: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x369568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36956c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x36956cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369570: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369574: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369578: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36957c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36957cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369580: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369584: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369588: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x369588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36958c: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x36958cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369590: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369590u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369594: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369594u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369598: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36959c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x36959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3695a0: 0x42000038  ei
    ctx->pc = 0x3695a0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3695a4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3695a8: 0x1140006b  beqz        $t2, . + 4 + (0x6B << 2)
    ctx->pc = 0x3695A8u;
    {
        const bool branch_taken_0x3695a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3695ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695A8u;
        // 0x3695ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695a8) {
            ctx->pc = 0x369758u;
            goto label_369758;
        }
    }
    ctx->pc = 0x3695B0u;
label_3695b0:
    // 0x3695b0: 0x42000039  di
    ctx->pc = 0x3695b0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3695b4: 0x40f  sync.p
    ctx->pc = 0x3695b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3695b8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3695b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3695bc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3695bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3695c0: 0x0  nop
    ctx->pc = 0x3695c0u;
    // NOP
    // 0x3695c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3695C4u;
    {
        const bool branch_taken_0x3695c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3695c4) {
            ctx->pc = 0x3695B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3695b0;
        }
    }
    ctx->pc = 0x3695CCu;
    // 0x3695cc: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x3695ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3695d0: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x3695d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3695d4: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x3695d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3695d8: 0xd9040030  lqc2        $vf4, 0x30($t0)
    ctx->pc = 0x3695d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x3695dc: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3695dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3695e0: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3695e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3695e4: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3695e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3695e8: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3695e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3695ec: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3695ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3695f0: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3695f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3695f4: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3695f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3695f8: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x3695f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3695fc: 0xf8cb0020  sqc2        $vf11, 0x20($a2)
    ctx->pc = 0x3695fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369600: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x369600u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369604: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x369604u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369608: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x369608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x36960c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x36960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x369610: 0x42000038  ei
    ctx->pc = 0x369610u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369614:
    // 0x369614: 0x42000039  di
    ctx->pc = 0x369614u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369618: 0x40f  sync.p
    ctx->pc = 0x369618u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36961c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x36961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369620: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x369620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x369624: 0x0  nop
    ctx->pc = 0x369624u;
    // NOP
    // 0x369628: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369628u;
    {
        const bool branch_taken_0x369628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369628) {
            ctx->pc = 0x369614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369614;
        }
    }
    ctx->pc = 0x369630u;
    // 0x369630: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x369630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369634: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x369634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x369638: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x369638u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36963c: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x36963cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x369640: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369644: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369648: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36964c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x36964cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369650: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369654: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369654u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369658: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36965c: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x36965cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369660: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x369660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369664: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x369664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369668: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x369668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36966c: 0x25050080  addiu       $a1, $t0, 0x80
    ctx->pc = 0x36966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x369670: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x369670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x369674: 0x42000038  ei
    ctx->pc = 0x369674u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369678:
    // 0x369678: 0x42000039  di
    ctx->pc = 0x369678u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36967c: 0x40f  sync.p
    ctx->pc = 0x36967cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369680: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369680u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369684: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x369684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x369688: 0x0  nop
    ctx->pc = 0x369688u;
    // NOP
    // 0x36968c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36968Cu;
    {
        const bool branch_taken_0x36968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36968c) {
            ctx->pc = 0x369678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369678;
        }
    }
    ctx->pc = 0x369694u;
    // 0x369694: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x369694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369698: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x369698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36969c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x36969cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3696a0: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x3696a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3696a4: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3696a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3696a8: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3696a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3696ac: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3696acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3696b0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3696b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3696b4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3696b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3696b8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3696b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3696bc: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3696bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3696c0: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x3696c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3696c4: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x3696c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3696c8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x3696c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3696cc: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x3696ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x3696d0: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x3696d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x3696d4: 0x24c300c0  addiu       $v1, $a2, 0xC0
    ctx->pc = 0x3696d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x3696d8: 0x42000038  ei
    ctx->pc = 0x3696d8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3696dc:
    // 0x3696dc: 0x42000039  di
    ctx->pc = 0x3696dcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3696e0: 0x40f  sync.p
    ctx->pc = 0x3696e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3696e4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3696e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3696e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3696e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3696ec: 0x0  nop
    ctx->pc = 0x3696ecu;
    // NOP
    // 0x3696f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3696F0u;
    {
        const bool branch_taken_0x3696f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3696f0) {
            ctx->pc = 0x3696DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3696dc;
        }
    }
    ctx->pc = 0x3696F8u;
    // 0x3696f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3696f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3696fc: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x3696fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x369700: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x369700u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x369704: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x369704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x369708: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36970c: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x36970cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369710: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369714: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369718: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x36971c: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x36971cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369720: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369720u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369724: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x369724u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369728: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x369728u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x36972c: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x36972cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369730: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x369730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369734: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x369734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x369738: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x369738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x36973c: 0x42000038  ei
    ctx->pc = 0x36973cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369740: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x369740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x369744: 0x1540ff9a  bnez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x369744u;
    {
        const bool branch_taken_0x369744 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x369744) {
            ctx->pc = 0x3695B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3695b0;
        }
    }
    ctx->pc = 0x36974Cu;
    // 0x36974c: 0x0  nop
    ctx->pc = 0x36974cu;
    // NOP
label_369750:
    // 0x369750: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x369750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x369754: 0x0  nop
    ctx->pc = 0x369754u;
    // NOP
label_369758:
    // 0x369758: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x369758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36975c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36975cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x369760: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x369760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x369764: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x369764u;
    {
        const bool branch_taken_0x369764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369764u;
        // 0x369768: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369764) {
            ctx->pc = 0x36979Cu;
            goto label_36979c;
        }
    }
    ctx->pc = 0x36976Cu;
    // 0x36976c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x369770: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x369770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x369774: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x369774u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x369778: 0xf  sync
    ctx->pc = 0x369778u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36977c: 0x40f  sync.p
    ctx->pc = 0x36977cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_369780:
    // 0x369780: 0x0  nop
    ctx->pc = 0x369780u;
    // NOP
    // 0x369784: 0x0  nop
    ctx->pc = 0x369784u;
    // NOP
    // 0x369788: 0x0  nop
    ctx->pc = 0x369788u;
    // NOP
    // 0x36978c: 0x0  nop
    ctx->pc = 0x36978cu;
    // NOP
    // 0x369790: 0x0  nop
    ctx->pc = 0x369790u;
    // NOP
    // 0x369794: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x369794u;
    {
        const bool branch_taken_0x369794 = (false);
        if (branch_taken_0x369794) {
            ctx->pc = 0x369780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369780;
        }
    }
    ctx->pc = 0x36979Cu;
label_36979c:
    // 0x36979c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3697a0: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x3697a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x3697a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3697a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x3697a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3697a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3697ac: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3697ACu;
    {
        const bool branch_taken_0x3697ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697ACu;
        // 0x3697b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697ac) {
            ctx->pc = 0x36980Cu;
            goto label_36980c;
        }
    }
    ctx->pc = 0x3697B4u;
    // 0x3697b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3697b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3697b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3697b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3697bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3697bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3697c0: 0xf  sync
    ctx->pc = 0x3697c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3697c4: 0x40f  sync.p
    ctx->pc = 0x3697c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3697c8:
    // 0x3697c8: 0x0  nop
    ctx->pc = 0x3697c8u;
    // NOP
    // 0x3697cc: 0x0  nop
    ctx->pc = 0x3697ccu;
    // NOP
    // 0x3697d0: 0x0  nop
    ctx->pc = 0x3697d0u;
    // NOP
    // 0x3697d4: 0x0  nop
    ctx->pc = 0x3697d4u;
    // NOP
    // 0x3697d8: 0x0  nop
    ctx->pc = 0x3697d8u;
    // NOP
    // 0x3697dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3697DCu;
    {
        const bool branch_taken_0x3697dc = (false);
        if (branch_taken_0x3697dc) {
            ctx->pc = 0x3697C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3697c8;
        }
    }
    ctx->pc = 0x3697E4u;
    // 0x3697e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3697e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3697e8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3697e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x3697ec: 0x0  nop
    ctx->pc = 0x3697ecu;
    // NOP
label_3697f0:
    // 0x3697f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3697f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x3697f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3697f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3697f8: 0x0  nop
    ctx->pc = 0x3697f8u;
    // NOP
    // 0x3697fc: 0x0  nop
    ctx->pc = 0x3697fcu;
    // NOP
    // 0x369800: 0x0  nop
    ctx->pc = 0x369800u;
    // NOP
    // 0x369804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369804u;
    {
        const bool branch_taken_0x369804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369804) {
            ctx->pc = 0x3697F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3697f0;
        }
    }
    ctx->pc = 0x36980Cu;
label_36980c:
    // 0x36980c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x369810: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x369810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x369814: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x369814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x369818: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36981c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36981cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x369820: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x369820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x369824: 0x24041fc0  addiu       $a0, $zero, 0x1FC0
    ctx->pc = 0x369824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x369828: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x369828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36982c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36982cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x1000d080
    // 0x369830: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x369830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x369834: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x369834u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x369838: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x369838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36983c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x369840: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x369840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x369844: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x369844u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x1000d020
    // 0x369848: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x369848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36984c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36984cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x369850: 0xf  sync
    ctx->pc = 0x369850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369854: 0x40f  sync.p
    ctx->pc = 0x369854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369858: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x369858u;
    {
        const bool branch_taken_0x369858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369858u;
        // 0x36985c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369858) {
            ctx->pc = 0x369BACu;
            goto label_369bac;
        }
    }
    ctx->pc = 0x369860u;
label_369860:
    // 0x369860: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x369860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_369864:
    // 0x369864: 0x42000039  di
    ctx->pc = 0x369864u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369868: 0x40f  sync.p
    ctx->pc = 0x369868u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36986c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x36986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x369870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x369870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x369874: 0x0  nop
    ctx->pc = 0x369874u;
    // NOP
    // 0x369878: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369878u;
    {
        const bool branch_taken_0x369878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x369878) {
            ctx->pc = 0x369864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369864;
        }
    }
    ctx->pc = 0x369880u;
    // 0x369880: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x369880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x369884: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x369884u;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x369888: 0x4a0002ff  vnop
    ctx->pc = 0x369888u;
    // NOP operation, no action needed for VU0
    // 0x36988c: 0x4a0002ff  vnop
    ctx->pc = 0x36988cu;
    // NOP operation, no action needed for VU0
    // 0x369890: 0x42000038  ei
    ctx->pc = 0x369890u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369894: 0x1a4000c4  blez        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x369894u;
    {
        const bool branch_taken_0x369894 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x369898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369894u;
        // 0x369898: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369894) {
            ctx->pc = 0x369BA8u;
            goto label_369ba8;
        }
    }
    ctx->pc = 0x36989Cu;
    // 0x36989c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x36989cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698a0: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3698a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3698a4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3698a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x3698a8: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3698A8u;
    {
        const bool branch_taken_0x3698a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698A8u;
        // 0x3698ac: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698a8) {
            ctx->pc = 0x369A08u;
            goto label_369a08;
        }
    }
    ctx->pc = 0x3698B0u;
    // 0x3698b0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3698b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3698b4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3698B4u;
    {
        const bool branch_taken_0x3698b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698B4u;
        // 0x3698b8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698b4) {
            ctx->pc = 0x369998u;
            goto label_369998;
        }
    }
    ctx->pc = 0x3698BCu;
    // 0x3698bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3698BCu;
    {
        const bool branch_taken_0x3698bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3698bc) {
            ctx->pc = 0x369930u;
            goto label_369930;
        }
    }
    ctx->pc = 0x3698C4u;
label_3698c4:
    // 0x3698c4: 0x42000039  di
    ctx->pc = 0x3698c4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3698c8: 0x40f  sync.p
    ctx->pc = 0x3698c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3698cc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3698ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3698d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3698d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3698d4: 0x0  nop
    ctx->pc = 0x3698d4u;
    // NOP
    // 0x3698d8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3698D8u;
    {
        const bool branch_taken_0x3698d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3698d8) {
            ctx->pc = 0x3698C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3698c4;
        }
    }
    ctx->pc = 0x3698E0u;
    // 0x3698e0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3698e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3698e4: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x3698e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3698e8: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x3698e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3698ec: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x3698ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3698f0: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3698f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3698f4: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3698f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3698f8: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3698f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3698fc: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3698fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369900: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369904: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369904u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369908: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36990c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36990cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369910: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x369910u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369914: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369914u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369918: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369918u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x36991c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36991cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369920: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x369920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369924: 0x42000038  ei
    ctx->pc = 0x369924u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369928: 0x264affff  addiu       $t2, $s2, -0x1
    ctx->pc = 0x369928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x36992c: 0x0  nop
    ctx->pc = 0x36992cu;
    // NOP
label_369930:
    // 0x369930: 0x42000039  di
    ctx->pc = 0x369930u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369934: 0x40f  sync.p
    ctx->pc = 0x369934u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369938: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369938u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36993c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x369940: 0x0  nop
    ctx->pc = 0x369940u;
    // NOP
    // 0x369944: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369944u;
    {
        const bool branch_taken_0x369944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369944) {
            ctx->pc = 0x369930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369930;
        }
    }
    ctx->pc = 0x36994Cu;
    // 0x36994c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36994cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369950: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x369950u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x369954: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x369954u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x369958: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x369958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x36995c: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x36995cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369960: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369964: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369968: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36996c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x36996cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369970: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369974: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369978: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x369978u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36997c: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x36997cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369980: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369980u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369984: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369984u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369988: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x369988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36998c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x36998cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369990: 0x42000038  ei
    ctx->pc = 0x369990u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369994: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_369998:
    // 0x369998: 0x42000039  di
    ctx->pc = 0x369998u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36999c: 0x40f  sync.p
    ctx->pc = 0x36999cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3699a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3699a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3699a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3699a8: 0x0  nop
    ctx->pc = 0x3699a8u;
    // NOP
    // 0x3699ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3699ACu;
    {
        const bool branch_taken_0x3699ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3699ac) {
            ctx->pc = 0x369998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369998;
        }
    }
    ctx->pc = 0x3699B4u;
    // 0x3699b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3699b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3699b8: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x3699b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3699bc: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x3699bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3699c0: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x3699c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3699c4: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x3699c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3699c8: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x3699c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3699cc: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x3699ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3699d0: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x3699d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3699d4: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x3699d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3699d8: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x3699d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3699dc: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x3699dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3699e0: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x3699e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3699e4: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x3699e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3699e8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x3699e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3699ec: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x3699ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x3699f0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3699f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3699f4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x3699f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3699f8: 0x42000038  ei
    ctx->pc = 0x3699f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3699fc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3699fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x369a00: 0x5140006a  beql        $t2, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x369A00u;
    {
        const bool branch_taken_0x369a00 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x369a00) {
            ctx->pc = 0x369A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369A00u;
            // 0x369a04: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369BACu;
            goto label_369bac;
        }
    }
    ctx->pc = 0x369A08u;
label_369a08:
    // 0x369a08: 0x42000039  di
    ctx->pc = 0x369a08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369a0c: 0x40f  sync.p
    ctx->pc = 0x369a0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369a10: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369a14: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x369a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x369a18: 0x0  nop
    ctx->pc = 0x369a18u;
    // NOP
    // 0x369a1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369A1Cu;
    {
        const bool branch_taken_0x369a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369a1c) {
            ctx->pc = 0x369A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369a08;
        }
    }
    ctx->pc = 0x369A24u;
    // 0x369a24: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x369a24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369a28: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x369a28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x369a2c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x369a2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x369a30: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x369a30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x369a34: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369a38: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369a3c: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369a40: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369a44: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369a48: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369a48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369a4c: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369a50: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x369a50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369a54: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x369a54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369a58: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369a58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369a5c: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369a60: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x369a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369a64: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x369a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369a68: 0x42000038  ei
    ctx->pc = 0x369a68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369a6c:
    // 0x369a6c: 0x42000039  di
    ctx->pc = 0x369a6cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369a70: 0x40f  sync.p
    ctx->pc = 0x369a70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369a74: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369a78: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x369a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x369a7c: 0x0  nop
    ctx->pc = 0x369a7cu;
    // NOP
    // 0x369a80: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369A80u;
    {
        const bool branch_taken_0x369a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369a80) {
            ctx->pc = 0x369A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369a6c;
        }
    }
    ctx->pc = 0x369A88u;
    // 0x369a88: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x369a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369a8c: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x369a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x369a90: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x369a90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x369a94: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x369a94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x369a98: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369a9c: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369aa0: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369aa4: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369aa8: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369aa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369aac: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369aacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369ab0: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369ab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369ab4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x369ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369ab8: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x369ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369abc: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369abcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369ac0: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369ac4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x369ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369ac8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x369ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369acc: 0x42000038  ei
    ctx->pc = 0x369accu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369ad0:
    // 0x369ad0: 0x42000039  di
    ctx->pc = 0x369ad0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369ad4: 0x40f  sync.p
    ctx->pc = 0x369ad4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369ad8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369adc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x369adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x369ae0: 0x0  nop
    ctx->pc = 0x369ae0u;
    // NOP
    // 0x369ae4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369AE4u;
    {
        const bool branch_taken_0x369ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369ae4) {
            ctx->pc = 0x369AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369ad0;
        }
    }
    ctx->pc = 0x369AECu;
    // 0x369aec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x369aecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369af0: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x369af0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x369af4: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x369af4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x369af8: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x369af8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x369afc: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369b00: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369b04: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369b08: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369b0c: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369b0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369b10: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369b14: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369b18: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x369b18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369b1c: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x369b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369b20: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369b20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369b24: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369b24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369b28: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x369b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369b2c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x369b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369b30: 0x42000038  ei
    ctx->pc = 0x369b30u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_369b34:
    // 0x369b34: 0x42000039  di
    ctx->pc = 0x369b34u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x369b38: 0x40f  sync.p
    ctx->pc = 0x369b38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x369b3c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x369b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x369b40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x369b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x369b44: 0x0  nop
    ctx->pc = 0x369b44u;
    // NOP
    // 0x369b48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x369B48u;
    {
        const bool branch_taken_0x369b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369b48) {
            ctx->pc = 0x369B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369b34;
        }
    }
    ctx->pc = 0x369B50u;
    // 0x369b50: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x369b50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369b54: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x369b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x369b58: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x369b58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x369b5c: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x369b5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x369b60: 0x4be0099e  vmuli.xyzw  $vf6, $vf1, $I
    ctx->pc = 0x369b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x369b64: 0x4be011de  vmuli.xyzw  $vf7, $vf2, $I
    ctx->pc = 0x369b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x369b68: 0x4be72228  vadd.xyzw   $vf8, $vf4, $vf7
    ctx->pc = 0x369b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x369b6c: 0x4be642a8  vadd.xyzw   $vf10, $vf8, $vf6
    ctx->pc = 0x369b6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x369b70: 0x4be152ec  vsub.xyzw   $vf11, $vf10, $vf1
    ctx->pc = 0x369b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x369b74: 0x4be2532c  vsub.xyzw   $vf12, $vf10, $vf2
    ctx->pc = 0x369b74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x369b78: 0x4be25b6c  vsub.xyzw   $vf13, $vf11, $vf2
    ctx->pc = 0x369b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x369b7c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x369b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x369b80: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x369b80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x369b84: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x369b84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x369b88: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x369b88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x369b8c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x369b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x369b90: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x369b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x369b94: 0x42000038  ei
    ctx->pc = 0x369b94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x369b98: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x369b98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x369b9c: 0x1540ff9a  bnez        $t2, . + 4 + (-0x66 << 2)
    ctx->pc = 0x369B9Cu;
    {
        const bool branch_taken_0x369b9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x369b9c) {
            ctx->pc = 0x369A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369a08;
        }
    }
    ctx->pc = 0x369BA4u;
    // 0x369ba4: 0x0  nop
    ctx->pc = 0x369ba4u;
    // NOP
label_369ba8:
    // 0x369ba8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x369ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_369bac:
    // 0x369bac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x369bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369bb0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x369bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x369bb4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x369bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x369bb8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x369bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369bbc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x369bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369bc0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x369bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369bc4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x369bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369bc8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x369bc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x369BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BD0u;
        // 0x369bd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369BD8u;
}
