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

// Function: sub_003DBF70
// Address: 0x3dbf70 - 0x3dc058
void sub_003DBF70_0x3dbf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBF70_0x3dbf70");
#endif

    switch (ctx->pc) {
        case 0x3dbf78u: goto label_3dbf78;
        case 0x3dbfa0u: goto label_3dbfa0;
        default: break;
    }

    ctx->pc = 0x3dbf70u;

    // 0x3dbf70: 0x2403011d  addiu       $v1, $zero, 0x11D
    ctx->pc = 0x3dbf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x3dbf74: 0x24820518  addiu       $v0, $a0, 0x518
    ctx->pc = 0x3dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
label_3dbf78:
    // 0x3dbf78: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3dbf78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbf7c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3dbf80: 0xa440fffc  sh          $zero, -0x4($v0)
    ctx->pc = 0x3dbf80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbf84: 0x0  nop
    ctx->pc = 0x3dbf84u;
    // NOP
    // 0x3dbf88: 0x0  nop
    ctx->pc = 0x3dbf88u;
    // NOP
    // 0x3dbf8c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DBF8Cu;
    {
        const bool branch_taken_0x3dbf8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3DBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF8Cu;
        // 0x3dbf90: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf8c) {
            ctx->pc = 0x3DBF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbf78;
        }
    }
    ctx->pc = 0x3DBF94u;
    // 0x3dbf94: 0x24850a8c  addiu       $a1, $a0, 0xA8C
    ctx->pc = 0x3dbf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2700));
    // 0x3dbf98: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x3dbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3dbf9c: 0x24820a0c  addiu       $v0, $a0, 0xA0C
    ctx->pc = 0x3dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
label_3dbfa0:
    // 0x3dbfa0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3dbfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfa4: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x3dbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x3dbfa8: 0xa440fffc  sh          $zero, -0x4($v0)
    ctx->pc = 0x3dbfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfac: 0xa440fff8  sh          $zero, -0x8($v0)
    ctx->pc = 0x3dbfacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfb0: 0xa440fff4  sh          $zero, -0xC($v0)
    ctx->pc = 0x3dbfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfb4: 0xa440fff0  sh          $zero, -0x10($v0)
    ctx->pc = 0x3dbfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfb8: 0xa440ffec  sh          $zero, -0x14($v0)
    ctx->pc = 0x3dbfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfbc: 0xa440ffe8  sh          $zero, -0x18($v0)
    ctx->pc = 0x3dbfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfc0: 0xa440ffe4  sh          $zero, -0x1C($v0)
    ctx->pc = 0x3dbfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfc4: 0xa440ffe0  sh          $zero, -0x20($v0)
    ctx->pc = 0x3dbfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967264), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfc8: 0xa440ffdc  sh          $zero, -0x24($v0)
    ctx->pc = 0x3dbfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967260), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfcc: 0xa440ffd8  sh          $zero, -0x28($v0)
    ctx->pc = 0x3dbfccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967256), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfd0: 0xa440ffd4  sh          $zero, -0x2C($v0)
    ctx->pc = 0x3dbfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967252), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfd4: 0xa440ffd0  sh          $zero, -0x30($v0)
    ctx->pc = 0x3dbfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967248), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfd8: 0xa440ffcc  sh          $zero, -0x34($v0)
    ctx->pc = 0x3dbfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967244), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfdc: 0xa440ffc8  sh          $zero, -0x38($v0)
    ctx->pc = 0x3dbfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbfe0: 0x461ffef  bgez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DBFE0u;
    {
        const bool branch_taken_0x3dbfe0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFE0u;
        // 0x3dbfe4: 0x2442ffc4  addiu       $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbfe0) {
            ctx->pc = 0x3DBFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbfa0;
        }
    }
    ctx->pc = 0x3DBFE8u;
    // 0x3dbfe8: 0x24a20048  addiu       $v0, $a1, 0x48
    ctx->pc = 0x3dbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x3dbfec: 0xa4a00048  sh          $zero, 0x48($a1)
    ctx->pc = 0x3dbfecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbff0: 0xa440ffb8  sh          $zero, -0x48($v0)
    ctx->pc = 0x3dbff0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967224), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbff4: 0xa440fffc  sh          $zero, -0x4($v0)
    ctx->pc = 0x3dbff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbff8: 0xa440fff8  sh          $zero, -0x8($v0)
    ctx->pc = 0x3dbff8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dbffc: 0xa440fff4  sh          $zero, -0xC($v0)
    ctx->pc = 0x3dbffcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc000: 0xa440fff0  sh          $zero, -0x10($v0)
    ctx->pc = 0x3dc000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc004: 0xa440ffec  sh          $zero, -0x14($v0)
    ctx->pc = 0x3dc004u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc008: 0xa440ffe8  sh          $zero, -0x18($v0)
    ctx->pc = 0x3dc008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc00c: 0xa440ffe4  sh          $zero, -0x1C($v0)
    ctx->pc = 0x3dc00cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc010: 0xa440ffe0  sh          $zero, -0x20($v0)
    ctx->pc = 0x3dc010u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967264), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc014: 0xa440ffdc  sh          $zero, -0x24($v0)
    ctx->pc = 0x3dc014u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967260), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc018: 0xa440ffd8  sh          $zero, -0x28($v0)
    ctx->pc = 0x3dc018u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967256), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc01c: 0xa440ffd4  sh          $zero, -0x2C($v0)
    ctx->pc = 0x3dc01cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967252), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc020: 0xa440ffd0  sh          $zero, -0x30($v0)
    ctx->pc = 0x3dc020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967248), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc024: 0xa440ffcc  sh          $zero, -0x34($v0)
    ctx->pc = 0x3dc024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967244), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc028: 0xa440ffc8  sh          $zero, -0x38($v0)
    ctx->pc = 0x3dc028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc02c: 0xa440ffc4  sh          $zero, -0x3C($v0)
    ctx->pc = 0x3dc02cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967236), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc030: 0xa440ffc0  sh          $zero, -0x40($v0)
    ctx->pc = 0x3dc030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967232), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc034: 0xa440ffbc  sh          $zero, -0x44($v0)
    ctx->pc = 0x3dc034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967228), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dc038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dc038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc03c: 0xa48304a4  sh          $v1, 0x4A4($a0)
    ctx->pc = 0x3dc03cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1188), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dc040: 0xac8016b0  sw          $zero, 0x16B0($a0)
    ctx->pc = 0x3dc040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5808), GPR_U32(ctx, 0));
    // 0x3dc044: 0xfc8016c0  sd          $zero, 0x16C0($a0)
    ctx->pc = 0x3dc044u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 5824), GPR_U64(ctx, 0));
    // 0x3dc048: 0xfc8016b8  sd          $zero, 0x16B8($a0)
    ctx->pc = 0x3dc048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 5816), GPR_U64(ctx, 0));
    // 0x3dc04c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC04Cu;
        // 0x3dc050: 0xac8016c8  sw          $zero, 0x16C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC054u;
    // 0x3dc054: 0x0  nop
    ctx->pc = 0x3dc054u;
    // NOP
    ctx->pc = 0x3dc058u;
}
