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

// Function: sub_002F0CC8
// Address: 0x2f0cc8 - 0x2f0db0
void sub_002F0CC8_0x2f0cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0CC8_0x2f0cc8");
#endif

    switch (ctx->pc) {
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d7cu: goto label_2f0d7c;
        default: break;
    }

    ctx->pc = 0x2f0cc8u;

    // 0x2f0cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0ccc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f0cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0cd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cd8: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f0cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ce0: 0x80bc2d6  j           func_2F0B58
    ctx->pc = 0x2F0CE0u;
    ctx->pc = 0x2F0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CE0u;
    // 0x2f0ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B58u, 0x2F0CE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F0CE8u;
    // 0x2f0ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0cec: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f0cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0cf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cfc: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f0d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d04: 0x80bc2b6  j           func_2F0AD8
    ctx->pc = 0x2F0D04u;
    ctx->pc = 0x2F0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D04u;
    // 0x2f0d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0AD8u, 0x2F0D04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F0D0Cu;
    // 0x2f0d0c: 0x0  nop
    ctx->pc = 0x2f0d0cu;
    // NOP
    // 0x2f0d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0d14: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f0d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0d1c: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f0d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d24: 0x80bc29a  j           func_2F0A68
    ctx->pc = 0x2F0D24u;
    ctx->pc = 0x2F0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D24u;
    // 0x2f0d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A68u;
    sub_002F0A68_0x2f0a68(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0D2Cu;
    // 0x2f0d2c: 0x0  nop
    ctx->pc = 0x2f0d2cu;
    // NOP
    // 0x2f0d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0d34: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f0d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0d3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d40: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f0d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d48: 0x80bc30c  j           func_2F0C30
    ctx->pc = 0x2F0D48u;
    ctx->pc = 0x2F0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D48u;
    // 0x2f0d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0C30u, 0x2F0D48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F0D50u;
label_2f0d50:
    // 0x2f0d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0d54: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2f0d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0d64: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2f0d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2f0d68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0d74: 0xc0bf8ce  jal         func_2FE338
    ctx->pc = 0x2F0D74u;
    SET_GPR_U32(ctx, 31, 0x2F0D7Cu);
    ctx->pc = 0x2F0D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D74u;
    // 0x2f0d78: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE338u, 0x2F0D74u, 0x2F0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D7Cu;
label_2f0d7c:
    // 0x2f0d7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f0d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0d84: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0D84u;
    {
        const bool branch_taken_0x2f0d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f0d84) {
            ctx->pc = 0x2F0D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0D84u;
            // 0x2f0d88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0D9Cu;
            goto label_2f0d9c;
        }
    }
    ctx->pc = 0x2F0D8Cu;
    // 0x2f0d8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0d90: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0D90u;
    {
        const bool branch_taken_0x2f0d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d90) {
            ctx->pc = 0x2F0D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0D90u;
            // 0x2f0d94: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0D98u;
            goto label_2f0d98;
        }
    }
    ctx->pc = 0x2F0D98u;
label_2f0d98:
    // 0x2f0d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0d9c:
    // 0x2f0d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DA4u;
        // 0x2f0da8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0DACu;
    // 0x2f0dac: 0x0  nop
    ctx->pc = 0x2f0dacu;
    // NOP
    ctx->pc = 0x2f0db0u;
}
