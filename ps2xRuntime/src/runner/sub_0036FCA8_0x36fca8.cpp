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

// Function: sub_0036FCA8
// Address: 0x36fca8 - 0x36fe48
void sub_0036FCA8_0x36fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FCA8_0x36fca8");
#endif

    switch (ctx->pc) {
        case 0x36fd78u: goto label_36fd78;
        default: break;
    }

    ctx->pc = 0x36fca8u;

    // 0x36fca8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36fca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcac: 0x8cc80080  lw          $t0, 0x80($a2)
    ctx->pc = 0x36fcacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x36fcb0: 0x8cc5008c  lw          $a1, 0x8C($a2)
    ctx->pc = 0x36fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x36fcb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fcb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fcb8: 0x8cc20084  lw          $v0, 0x84($a2)
    ctx->pc = 0x36fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x36fcbc: 0x8cc30088  lw          $v1, 0x88($a2)
    ctx->pc = 0x36fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x36fcc0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x36fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36fcc4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x36fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x36fcc8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x36fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x36fccc: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x36fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x36fcd0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x36fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x36fcd4: 0x18e0005a  blez        $a3, . + 4 + (0x5A << 2)
    ctx->pc = 0x36FCD4u;
    {
        const bool branch_taken_0x36fcd4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCD4u;
        // 0x36fcd8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcd4) {
            ctx->pc = 0x36FE40u;
            goto label_36fe40;
        }
    }
    ctx->pc = 0x36FCDCu;
    // 0x36fcdc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x36fcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fce0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x36fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x36fce4: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x36fce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36fce8: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x36FCE8u;
    {
        const bool branch_taken_0x36fce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCE8u;
        // 0x36fcec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fce8) {
            ctx->pc = 0x36FD78u;
            goto label_36fd78;
        }
    }
    ctx->pc = 0x36FCF0u;
    // 0x36fcf0: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x36fcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36fcf4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36FCF4u;
    {
        const bool branch_taken_0x36fcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCF4u;
        // 0x36fcf8: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcf4) {
            ctx->pc = 0x36FD68u;
            goto label_36fd68;
        }
    }
    ctx->pc = 0x36FCFCu;
    // 0x36fcfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36FCFCu;
    {
        const bool branch_taken_0x36fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCFCu;
        // 0x36fd00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcfc) {
            ctx->pc = 0x36FD38u;
            goto label_36fd38;
        }
    }
    ctx->pc = 0x36FD04u;
    // 0x36fd04: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x36fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x36fd08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36fd0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x36fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36fd10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fd14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36fd18: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x36fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36fd1c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fd20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36fd24: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x36fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36fd28: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fd2c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x36fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36fd30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36fd34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36fd38:
    // 0x36fd38: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36fd3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fd44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fd48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fd50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fd54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fd5c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fd60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_36fd68:
    // 0x36fd68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fd6c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x36FD6Cu;
    {
        const bool branch_taken_0x36fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD6Cu;
        // 0x36fd70: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd6c) {
            ctx->pc = 0x36FE10u;
            goto label_36fe10;
        }
    }
    ctx->pc = 0x36FD74u;
    // 0x36fd74: 0x0  nop
    ctx->pc = 0x36fd74u;
    // NOP
label_36fd78:
    // 0x36fd78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fd7c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x36fd80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fd88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fd8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fd94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fd98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fd9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fda0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fda4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fda8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fdac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fdb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fdb8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fdbc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fdc4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fdc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdcc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fdd0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fdd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fddc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fde0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fde4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fde8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fdec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdf0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fdf4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fdf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fdfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fe00: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fe04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fe08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fe0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36fe10:
    // 0x36fe10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fe14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fe18: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x36fe1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fe20: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fe24: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fe28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fe2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36fe30: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x36fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x36fe34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36fe38: 0x14a0ffcf  bnez        $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x36FE38u;
    {
        const bool branch_taken_0x36fe38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE38u;
        // 0x36fe3c: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe38) {
            ctx->pc = 0x36FD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fd78;
        }
    }
    ctx->pc = 0x36FE40u;
label_36fe40:
    // 0x36fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE40u;
        // 0x36fe44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE48u;
}
