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

// Function: sub_0038DCD8
// Address: 0x38dcd8 - 0x38df48
void sub_0038DCD8_0x38dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DCD8_0x38dcd8");
#endif

    switch (ctx->pc) {
        case 0x38dcd8u: goto label_38dcd8;
        case 0x38dcdcu: goto label_38dcdc;
        case 0x38dce0u: goto label_38dce0;
        case 0x38dce4u: goto label_38dce4;
        case 0x38dce8u: goto label_38dce8;
        case 0x38dcecu: goto label_38dcec;
        case 0x38dcf0u: goto label_38dcf0;
        case 0x38dcf4u: goto label_38dcf4;
        case 0x38dcf8u: goto label_38dcf8;
        case 0x38dcfcu: goto label_38dcfc;
        case 0x38dd00u: goto label_38dd00;
        case 0x38dd04u: goto label_38dd04;
        case 0x38dd08u: goto label_38dd08;
        case 0x38dd0cu: goto label_38dd0c;
        case 0x38dd10u: goto label_38dd10;
        case 0x38dd14u: goto label_38dd14;
        case 0x38dd18u: goto label_38dd18;
        case 0x38dd1cu: goto label_38dd1c;
        case 0x38dd20u: goto label_38dd20;
        case 0x38dd24u: goto label_38dd24;
        case 0x38dd28u: goto label_38dd28;
        case 0x38dd2cu: goto label_38dd2c;
        case 0x38dd30u: goto label_38dd30;
        case 0x38dd34u: goto label_38dd34;
        case 0x38dd38u: goto label_38dd38;
        case 0x38dd3cu: goto label_38dd3c;
        case 0x38dd40u: goto label_38dd40;
        case 0x38dd44u: goto label_38dd44;
        case 0x38dd48u: goto label_38dd48;
        case 0x38dd4cu: goto label_38dd4c;
        case 0x38dd50u: goto label_38dd50;
        case 0x38dd54u: goto label_38dd54;
        case 0x38dd58u: goto label_38dd58;
        case 0x38dd5cu: goto label_38dd5c;
        case 0x38dd60u: goto label_38dd60;
        case 0x38dd64u: goto label_38dd64;
        case 0x38dd68u: goto label_38dd68;
        case 0x38dd6cu: goto label_38dd6c;
        case 0x38dd70u: goto label_38dd70;
        case 0x38dd74u: goto label_38dd74;
        case 0x38dd78u: goto label_38dd78;
        case 0x38dd7cu: goto label_38dd7c;
        case 0x38dd80u: goto label_38dd80;
        case 0x38dd84u: goto label_38dd84;
        case 0x38dd88u: goto label_38dd88;
        case 0x38dd8cu: goto label_38dd8c;
        case 0x38dd90u: goto label_38dd90;
        case 0x38dd94u: goto label_38dd94;
        case 0x38dd98u: goto label_38dd98;
        case 0x38dd9cu: goto label_38dd9c;
        case 0x38dda0u: goto label_38dda0;
        case 0x38dda4u: goto label_38dda4;
        case 0x38dda8u: goto label_38dda8;
        case 0x38ddacu: goto label_38ddac;
        case 0x38ddb0u: goto label_38ddb0;
        case 0x38ddb4u: goto label_38ddb4;
        case 0x38ddb8u: goto label_38ddb8;
        case 0x38ddbcu: goto label_38ddbc;
        case 0x38ddc0u: goto label_38ddc0;
        case 0x38ddc4u: goto label_38ddc4;
        case 0x38ddc8u: goto label_38ddc8;
        case 0x38ddccu: goto label_38ddcc;
        case 0x38ddd0u: goto label_38ddd0;
        case 0x38ddd4u: goto label_38ddd4;
        case 0x38ddd8u: goto label_38ddd8;
        case 0x38dddcu: goto label_38dddc;
        case 0x38dde0u: goto label_38dde0;
        case 0x38dde4u: goto label_38dde4;
        case 0x38dde8u: goto label_38dde8;
        case 0x38ddecu: goto label_38ddec;
        case 0x38ddf0u: goto label_38ddf0;
        case 0x38ddf4u: goto label_38ddf4;
        case 0x38ddf8u: goto label_38ddf8;
        case 0x38ddfcu: goto label_38ddfc;
        case 0x38de00u: goto label_38de00;
        case 0x38de04u: goto label_38de04;
        case 0x38de08u: goto label_38de08;
        case 0x38de0cu: goto label_38de0c;
        case 0x38de10u: goto label_38de10;
        case 0x38de14u: goto label_38de14;
        case 0x38de18u: goto label_38de18;
        case 0x38de1cu: goto label_38de1c;
        case 0x38de20u: goto label_38de20;
        case 0x38de24u: goto label_38de24;
        case 0x38de28u: goto label_38de28;
        case 0x38de2cu: goto label_38de2c;
        case 0x38de30u: goto label_38de30;
        case 0x38de34u: goto label_38de34;
        case 0x38de38u: goto label_38de38;
        case 0x38de3cu: goto label_38de3c;
        case 0x38de40u: goto label_38de40;
        case 0x38de44u: goto label_38de44;
        case 0x38de48u: goto label_38de48;
        case 0x38de4cu: goto label_38de4c;
        case 0x38de50u: goto label_38de50;
        case 0x38de54u: goto label_38de54;
        case 0x38de58u: goto label_38de58;
        case 0x38de5cu: goto label_38de5c;
        case 0x38de60u: goto label_38de60;
        case 0x38de64u: goto label_38de64;
        case 0x38de68u: goto label_38de68;
        case 0x38de6cu: goto label_38de6c;
        case 0x38de70u: goto label_38de70;
        case 0x38de74u: goto label_38de74;
        case 0x38de78u: goto label_38de78;
        case 0x38de7cu: goto label_38de7c;
        case 0x38de80u: goto label_38de80;
        case 0x38de84u: goto label_38de84;
        case 0x38de88u: goto label_38de88;
        case 0x38de8cu: goto label_38de8c;
        case 0x38de90u: goto label_38de90;
        case 0x38de94u: goto label_38de94;
        case 0x38de98u: goto label_38de98;
        case 0x38de9cu: goto label_38de9c;
        case 0x38dea0u: goto label_38dea0;
        case 0x38dea4u: goto label_38dea4;
        case 0x38dea8u: goto label_38dea8;
        case 0x38deacu: goto label_38deac;
        case 0x38deb0u: goto label_38deb0;
        case 0x38deb4u: goto label_38deb4;
        case 0x38deb8u: goto label_38deb8;
        case 0x38debcu: goto label_38debc;
        case 0x38dec0u: goto label_38dec0;
        case 0x38dec4u: goto label_38dec4;
        case 0x38dec8u: goto label_38dec8;
        case 0x38deccu: goto label_38decc;
        case 0x38ded0u: goto label_38ded0;
        case 0x38ded4u: goto label_38ded4;
        case 0x38ded8u: goto label_38ded8;
        case 0x38dedcu: goto label_38dedc;
        case 0x38dee0u: goto label_38dee0;
        case 0x38dee4u: goto label_38dee4;
        case 0x38dee8u: goto label_38dee8;
        case 0x38deecu: goto label_38deec;
        case 0x38def0u: goto label_38def0;
        case 0x38def4u: goto label_38def4;
        case 0x38def8u: goto label_38def8;
        case 0x38defcu: goto label_38defc;
        case 0x38df00u: goto label_38df00;
        case 0x38df04u: goto label_38df04;
        case 0x38df08u: goto label_38df08;
        case 0x38df0cu: goto label_38df0c;
        case 0x38df10u: goto label_38df10;
        case 0x38df14u: goto label_38df14;
        case 0x38df18u: goto label_38df18;
        case 0x38df1cu: goto label_38df1c;
        case 0x38df20u: goto label_38df20;
        case 0x38df24u: goto label_38df24;
        case 0x38df28u: goto label_38df28;
        case 0x38df2cu: goto label_38df2c;
        case 0x38df30u: goto label_38df30;
        case 0x38df34u: goto label_38df34;
        case 0x38df38u: goto label_38df38;
        case 0x38df3cu: goto label_38df3c;
        case 0x38df40u: goto label_38df40;
        case 0x38df44u: goto label_38df44;
        default: break;
    }

    ctx->pc = 0x38dcd8u;

label_38dcd8:
    // 0x38dcd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38dcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38dcdc:
    // 0x38dcdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38dce0:
    // 0x38dce0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_38dce4:
    // 0x38dce4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38dce8:
    // 0x38dce8: 0x8f86bd40  lw          $a2, -0x42C0($gp)
    ctx->pc = 0x38dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38dcec:
    // 0x38dcec: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x38dcecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38dcf0:
    // 0x38dcf0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_38dcf4:
    // 0x38dcf4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38dcf8:
    // 0x38dcf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38dcfc:
    // 0x38dcfc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_38dd00:
    // 0x38dd00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_38dd04:
    // 0x38dd04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38dd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38dd08:
    // 0x38dd08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38dd0c:
    // 0x38dd0c: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x38dd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_38dd10:
    // 0x38dd10: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x38dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_38dd14:
    // 0x38dd14: 0x40f809  jalr        $v0
label_38dd18:
    if (ctx->pc == 0x38DD18u) {
        ctx->pc = 0x38DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD14u;
        // 0x38dd18: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD1Cu;
        goto label_38dd1c;
    }
    ctx->pc = 0x38DD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38DD1Cu);
        ctx->pc = 0x38DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD14u;
        // 0x38dd18: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DD14u, 0x38DD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DD1Cu;
label_38dd1c:
    // 0x38dd1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38dd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38dd20:
    // 0x38dd20: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_38dd24:
    if (ctx->pc == 0x38DD24u) {
        ctx->pc = 0x38DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD20u;
        // 0x38dd24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD28u;
        goto label_38dd28;
    }
    ctx->pc = 0x38DD20u;
    {
        const bool branch_taken_0x38dd20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD20u;
        // 0x38dd24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd20) {
            ctx->pc = 0x38DD30u;
            goto label_38dd30;
        }
    }
    ctx->pc = 0x38DD28u;
label_38dd28:
    // 0x38dd28: 0x1000001a  b           . + 4 + (0x1A << 2)
label_38dd2c:
    if (ctx->pc == 0x38DD2Cu) {
        ctx->pc = 0x38DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD28u;
        // 0x38dd2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD30u;
        goto label_38dd30;
    }
    ctx->pc = 0x38DD28u;
    {
        const bool branch_taken_0x38dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD28u;
        // 0x38dd2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd28) {
            ctx->pc = 0x38DD94u;
            goto label_38dd94;
        }
    }
    ctx->pc = 0x38DD30u;
label_38dd30:
    // 0x38dd30: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x38dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_38dd34:
    // 0x38dd34: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x38dd34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_38dd38:
    // 0x38dd38: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x38dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_38dd3c:
    // 0x38dd3c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x38dd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_38dd40:
    // 0x38dd40: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38dd44:
    // 0x38dd44: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x38dd44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_38dd48:
    // 0x38dd48: 0x2484ae00  addiu       $a0, $a0, -0x5200
    ctx->pc = 0x38dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
label_38dd4c:
    // 0x38dd4c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x38dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_38dd50:
    // 0x38dd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38dd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38dd54:
    // 0x38dd54: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x38dd54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_38dd58:
    // 0x38dd58: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x38dd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_38dd5c:
    // 0x38dd5c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x38dd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_38dd60:
    // 0x38dd60: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x38dd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38dd64:
    // 0x38dd64: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x38dd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38dd68:
    // 0x38dd68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38dd6c:
    // 0x38dd6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38dd70:
    // 0x38dd70: 0x24c8ae18  addiu       $t0, $a2, -0x51E8
    ctx->pc = 0x38dd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946328));
label_38dd74:
    // 0x38dd74: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x38dd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_38dd78:
    // 0x38dd78: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x38dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_38dd7c:
    // 0x38dd7c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x38dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_38dd80:
    // 0x38dd80: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x38dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38dd84:
    // 0x38dd84: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x38dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38dd88:
    // 0x38dd88: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x38dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_38dd8c:
    // 0x38dd8c: 0xc104c80  jal         func_413200
label_38dd90:
    if (ctx->pc == 0x38DD90u) {
        ctx->pc = 0x38DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD8Cu;
        // 0x38dd90: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD94u;
        goto label_38dd94;
    }
    ctx->pc = 0x38DD8Cu;
    SET_GPR_U32(ctx, 31, 0x38DD94u);
    ctx->pc = 0x38DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DD8Cu;
    // 0x38dd90: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38DD8Cu, 0x38DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DD94u;
label_38dd94:
    // 0x38dd94: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_38dd98:
    if (ctx->pc == 0x38DD98u) {
        ctx->pc = 0x38DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD94u;
        // 0x38dd98: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD9Cu;
        goto label_38dd9c;
    }
    ctx->pc = 0x38DD94u;
    {
        const bool branch_taken_0x38dd94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x38dd94) {
            ctx->pc = 0x38DD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DD94u;
            // 0x38dd98: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DDA4u;
            goto label_38dda4;
        }
    }
    ctx->pc = 0x38DD9Cu;
label_38dd9c:
    // 0x38dd9c: 0x10000062  b           . + 4 + (0x62 << 2)
label_38dda0:
    if (ctx->pc == 0x38DDA0u) {
        ctx->pc = 0x38DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD9Cu;
        // 0x38dda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDA4u;
        goto label_38dda4;
    }
    ctx->pc = 0x38DD9Cu;
    {
        const bool branch_taken_0x38dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD9Cu;
        // 0x38dda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd9c) {
            ctx->pc = 0x38DF28u;
            goto label_38df28;
        }
    }
    ctx->pc = 0x38DDA4u;
label_38dda4:
    // 0x38dda4: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_38dda8:
    if (ctx->pc == 0x38DDA8u) {
        ctx->pc = 0x38DDACu;
        goto label_38ddac;
    }
    ctx->pc = 0x38DDA4u;
    {
        const bool branch_taken_0x38dda4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dda4) {
            ctx->pc = 0x38DE14u;
            goto label_38de14;
        }
    }
    ctx->pc = 0x38DDACu;
label_38ddac:
    // 0x38ddac: 0xc0e39e0  jal         func_38E780
label_38ddb0:
    if (ctx->pc == 0x38DDB0u) {
        ctx->pc = 0x38DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDACu;
        // 0x38ddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDB4u;
        goto label_38ddb4;
    }
    ctx->pc = 0x38DDACu;
    SET_GPR_U32(ctx, 31, 0x38DDB4u);
    ctx->pc = 0x38DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DDACu;
    // 0x38ddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38DDACu, 0x38DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DDB4u;
label_38ddb4:
    // 0x38ddb4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_38ddb8:
    if (ctx->pc == 0x38DDB8u) {
        ctx->pc = 0x38DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDB4u;
        // 0x38ddb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDBCu;
        goto label_38ddbc;
    }
    ctx->pc = 0x38DDB4u;
    {
        const bool branch_taken_0x38ddb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDB4u;
        // 0x38ddb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddb4) {
            ctx->pc = 0x38DE14u;
            goto label_38de14;
        }
    }
    ctx->pc = 0x38DDBCu;
label_38ddbc:
    // 0x38ddbc: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x38ddbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_38ddc0:
    // 0x38ddc0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_38ddc4:
    if (ctx->pc == 0x38DDC4u) {
        ctx->pc = 0x38DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDC0u;
        // 0x38ddc4: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDC8u;
        goto label_38ddc8;
    }
    ctx->pc = 0x38DDC0u;
    {
        const bool branch_taken_0x38ddc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDC0u;
        // 0x38ddc4: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddc0) {
            ctx->pc = 0x38DE08u;
            goto label_38de08;
        }
    }
    ctx->pc = 0x38DDC8u;
label_38ddc8:
    // 0x38ddc8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38ddcc:
    // 0x38ddcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ddccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ddd0:
    // 0x38ddd0: 0xc104ca6  jal         func_413298
label_38ddd4:
    if (ctx->pc == 0x38DDD4u) {
        ctx->pc = 0x38DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDD0u;
        // 0x38ddd4: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDD8u;
        goto label_38ddd8;
    }
    ctx->pc = 0x38DDD0u;
    SET_GPR_U32(ctx, 31, 0x38DDD8u);
    ctx->pc = 0x38DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DDD0u;
    // 0x38ddd4: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38DDD0u, 0x38DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DDD8u;
label_38ddd8:
    // 0x38ddd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dddc:
    // 0x38dddc: 0xc0e39e0  jal         func_38E780
label_38dde0:
    if (ctx->pc == 0x38DDE0u) {
        ctx->pc = 0x38DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDDCu;
        // 0x38dde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDE4u;
        goto label_38dde4;
    }
    ctx->pc = 0x38DDDCu;
    SET_GPR_U32(ctx, 31, 0x38DDE4u);
    ctx->pc = 0x38DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DDDCu;
    // 0x38dde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38DDDCu, 0x38DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DDE4u;
label_38dde4:
    // 0x38dde4: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38dde8:
    // 0x38dde8: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38ddec:
    // 0x38ddec: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38ddf0:
    // 0x38ddf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ddf4:
    // 0x38ddf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38ddf8:
    // 0x38ddf8: 0x40f809  jalr        $v0
label_38ddfc:
    if (ctx->pc == 0x38DDFCu) {
        ctx->pc = 0x38DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDF8u;
        // 0x38ddfc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE00u;
        goto label_38de00;
    }
    ctx->pc = 0x38DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38DE00u);
        ctx->pc = 0x38DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDF8u;
        // 0x38ddfc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DDF8u, 0x38DE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DE00u;
label_38de00:
    // 0x38de00: 0x10000049  b           . + 4 + (0x49 << 2)
label_38de04:
    if (ctx->pc == 0x38DE04u) {
        ctx->pc = 0x38DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE00u;
        // 0x38de04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE08u;
        goto label_38de08;
    }
    ctx->pc = 0x38DE00u;
    {
        const bool branch_taken_0x38de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE00u;
        // 0x38de04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de00) {
            ctx->pc = 0x38DF28u;
            goto label_38df28;
        }
    }
    ctx->pc = 0x38DE08u;
label_38de08:
    // 0x38de08: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38de0c:
    // 0x38de0c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_38de10:
    if (ctx->pc == 0x38DE10u) {
        ctx->pc = 0x38DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE0Cu;
        // 0x38de10: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE14u;
        goto label_38de14;
    }
    ctx->pc = 0x38DE0Cu;
    {
        const bool branch_taken_0x38de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE0Cu;
        // 0x38de10: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de0c) {
            ctx->pc = 0x38DD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd9c;
        }
    }
    ctx->pc = 0x38DE14u;
label_38de14:
    // 0x38de14: 0x8a420007  lwl         $v0, 0x7($s2)
    ctx->pc = 0x38de14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_38de18:
    // 0x38de18: 0x9a420004  lwr         $v0, 0x4($s2)
    ctx->pc = 0x38de18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_38de1c:
    // 0x38de1c: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x38de1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38de20:
    // 0x38de20: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x38de20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38de24:
    // 0x38de24: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_38de28:
    if (ctx->pc == 0x38DE28u) {
        ctx->pc = 0x38DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE24u;
        // 0x38de28: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE2Cu;
        goto label_38de2c;
    }
    ctx->pc = 0x38DE24u;
    {
        const bool branch_taken_0x38de24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE24u;
        // 0x38de28: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de24) {
            ctx->pc = 0x38DE34u;
            goto label_38de34;
        }
    }
    ctx->pc = 0x38DE2Cu;
label_38de2c:
    // 0x38de2c: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
label_38de30:
    if (ctx->pc == 0x38DE30u) {
        ctx->pc = 0x38DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE2Cu;
        // 0x38de30: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE34u;
        goto label_38de34;
    }
    ctx->pc = 0x38DE2Cu;
    {
        const bool branch_taken_0x38de2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE2Cu;
        // 0x38de30: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de2c) {
            ctx->pc = 0x38DE90u;
            goto label_38de90;
        }
    }
    ctx->pc = 0x38DE34u;
label_38de34:
    // 0x38de34: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x38de34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_38de38:
    // 0x38de38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38de3c:
    // 0x38de3c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_38de40:
    if (ctx->pc == 0x38DE40u) {
        ctx->pc = 0x38DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE3Cu;
        // 0x38de40: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE44u;
        goto label_38de44;
    }
    ctx->pc = 0x38DE3Cu;
    {
        const bool branch_taken_0x38de3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE3Cu;
        // 0x38de40: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de3c) {
            ctx->pc = 0x38DE84u;
            goto label_38de84;
        }
    }
    ctx->pc = 0x38DE44u;
label_38de44:
    // 0x38de44: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38de48:
    // 0x38de48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38de48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38de4c:
    // 0x38de4c: 0xc104ca6  jal         func_413298
label_38de50:
    if (ctx->pc == 0x38DE50u) {
        ctx->pc = 0x38DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE4Cu;
        // 0x38de50: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE54u;
        goto label_38de54;
    }
    ctx->pc = 0x38DE4Cu;
    SET_GPR_U32(ctx, 31, 0x38DE54u);
    ctx->pc = 0x38DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE4Cu;
    // 0x38de50: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38DE4Cu, 0x38DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE54u;
label_38de54:
    // 0x38de54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38de58:
    // 0x38de58: 0xc0e39e0  jal         func_38E780
label_38de5c:
    if (ctx->pc == 0x38DE5Cu) {
        ctx->pc = 0x38DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE58u;
        // 0x38de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE60u;
        goto label_38de60;
    }
    ctx->pc = 0x38DE58u;
    SET_GPR_U32(ctx, 31, 0x38DE60u);
    ctx->pc = 0x38DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE58u;
    // 0x38de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38DE58u, 0x38DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE60u;
label_38de60:
    // 0x38de60: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38de64:
    // 0x38de64: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38de68:
    // 0x38de68: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38de6c:
    // 0x38de6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38de6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38de70:
    // 0x38de70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38de74:
    // 0x38de74: 0x40f809  jalr        $v0
label_38de78:
    if (ctx->pc == 0x38DE78u) {
        ctx->pc = 0x38DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE74u;
        // 0x38de78: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE7Cu;
        goto label_38de7c;
    }
    ctx->pc = 0x38DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38DE7Cu);
        ctx->pc = 0x38DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE74u;
        // 0x38de78: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE74u, 0x38DE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DE7Cu;
label_38de7c:
    // 0x38de7c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_38de80:
    if (ctx->pc == 0x38DE80u) {
        ctx->pc = 0x38DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE7Cu;
        // 0x38de80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE84u;
        goto label_38de84;
    }
    ctx->pc = 0x38DE7Cu;
    {
        const bool branch_taken_0x38de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE7Cu;
        // 0x38de80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de7c) {
            ctx->pc = 0x38DF28u;
            goto label_38df28;
        }
    }
    ctx->pc = 0x38DE84u;
label_38de84:
    // 0x38de84: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38de88:
    // 0x38de88: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_38de8c:
    if (ctx->pc == 0x38DE8Cu) {
        ctx->pc = 0x38DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE88u;
        // 0x38de8c: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE90u;
        goto label_38de90;
    }
    ctx->pc = 0x38DE88u;
    {
        const bool branch_taken_0x38de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE88u;
        // 0x38de8c: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de88) {
            ctx->pc = 0x38DD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd9c;
        }
    }
    ctx->pc = 0x38DE90u;
label_38de90:
    // 0x38de90: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x38de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_38de94:
    // 0x38de94: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_38de98:
    if (ctx->pc == 0x38DE98u) {
        ctx->pc = 0x38DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE94u;
        // 0x38de98: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE9Cu;
        goto label_38de9c;
    }
    ctx->pc = 0x38DE94u;
    {
        const bool branch_taken_0x38de94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38de94) {
            ctx->pc = 0x38DE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DE94u;
            // 0x38de98: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DEBCu;
            goto label_38debc;
        }
    }
    ctx->pc = 0x38DE9Cu;
label_38de9c:
    // 0x38de9c: 0x6a470013  ldl         $a3, 0x13($s2)
    ctx->pc = 0x38de9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_38dea0:
    // 0x38dea0: 0x6e47000c  ldr         $a3, 0xC($s2)
    ctx->pc = 0x38dea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_38dea4:
    // 0x38dea4: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x38dea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_38dea8:
    // 0x38dea8: 0xb2270013  sdl         $a3, 0x13($s1)
    ctx->pc = 0x38dea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38deac:
    // 0x38deac: 0xb627000c  sdr         $a3, 0xC($s1)
    ctx->pc = 0x38deacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38deb0:
    // 0x38deb0: 0xae280014  sw          $t0, 0x14($s1)
    ctx->pc = 0x38deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 8));
label_38deb4:
    // 0x38deb4: 0x10000017  b           . + 4 + (0x17 << 2)
label_38deb8:
    if (ctx->pc == 0x38DEB8u) {
        ctx->pc = 0x38DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEB4u;
        // 0x38deb8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEBCu;
        goto label_38debc;
    }
    ctx->pc = 0x38DEB4u;
    {
        const bool branch_taken_0x38deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEB4u;
        // 0x38deb8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38deb4) {
            ctx->pc = 0x38DF14u;
            goto label_38df14;
        }
    }
    ctx->pc = 0x38DEBCu;
label_38debc:
    // 0x38debc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dec0:
    // 0x38dec0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_38dec4:
    if (ctx->pc == 0x38DEC4u) {
        ctx->pc = 0x38DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC0u;
        // 0x38dec4: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEC8u;
        goto label_38dec8;
    }
    ctx->pc = 0x38DEC0u;
    {
        const bool branch_taken_0x38dec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC0u;
        // 0x38dec4: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dec0) {
            ctx->pc = 0x38DF08u;
            goto label_38df08;
        }
    }
    ctx->pc = 0x38DEC8u;
label_38dec8:
    // 0x38dec8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38decc:
    // 0x38decc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ded0:
    // 0x38ded0: 0xc104ca6  jal         func_413298
label_38ded4:
    if (ctx->pc == 0x38DED4u) {
        ctx->pc = 0x38DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DED0u;
        // 0x38ded4: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DED8u;
        goto label_38ded8;
    }
    ctx->pc = 0x38DED0u;
    SET_GPR_U32(ctx, 31, 0x38DED8u);
    ctx->pc = 0x38DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DED0u;
    // 0x38ded4: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38DED0u, 0x38DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DED8u;
label_38ded8:
    // 0x38ded8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dedc:
    // 0x38dedc: 0xc0e39e0  jal         func_38E780
label_38dee0:
    if (ctx->pc == 0x38DEE0u) {
        ctx->pc = 0x38DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEDCu;
        // 0x38dee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEE4u;
        goto label_38dee4;
    }
    ctx->pc = 0x38DEDCu;
    SET_GPR_U32(ctx, 31, 0x38DEE4u);
    ctx->pc = 0x38DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DEDCu;
    // 0x38dee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38DEDCu, 0x38DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DEE4u;
label_38dee4:
    // 0x38dee4: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38dee8:
    // 0x38dee8: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38deec:
    // 0x38deec: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38def0:
    // 0x38def0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38def0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38def4:
    // 0x38def4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38def8:
    // 0x38def8: 0x40f809  jalr        $v0
label_38defc:
    if (ctx->pc == 0x38DEFCu) {
        ctx->pc = 0x38DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEF8u;
        // 0x38defc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF00u;
        goto label_38df00;
    }
    ctx->pc = 0x38DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38DF00u);
        ctx->pc = 0x38DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEF8u;
        // 0x38defc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DEF8u, 0x38DF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DF00u;
label_38df00:
    // 0x38df00: 0x10000009  b           . + 4 + (0x9 << 2)
label_38df04:
    if (ctx->pc == 0x38DF04u) {
        ctx->pc = 0x38DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF00u;
        // 0x38df04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF08u;
        goto label_38df08;
    }
    ctx->pc = 0x38DF00u;
    {
        const bool branch_taken_0x38df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF00u;
        // 0x38df04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df00) {
            ctx->pc = 0x38DF28u;
            goto label_38df28;
        }
    }
    ctx->pc = 0x38DF08u;
label_38df08:
    // 0x38df08: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38df0c:
    // 0x38df0c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
label_38df10:
    if (ctx->pc == 0x38DF10u) {
        ctx->pc = 0x38DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF0Cu;
        // 0x38df10: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF14u;
        goto label_38df14;
    }
    ctx->pc = 0x38DF0Cu;
    {
        const bool branch_taken_0x38df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF0Cu;
        // 0x38df10: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df0c) {
            ctx->pc = 0x38DD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd9c;
        }
    }
    ctx->pc = 0x38DF14u;
label_38df14:
    // 0x38df14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38df14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38df18:
    // 0x38df18: 0x2484ae00  addiu       $a0, $a0, -0x5200
    ctx->pc = 0x38df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
label_38df1c:
    // 0x38df1c: 0xc104cbe  jal         func_4132F8
label_38df20:
    if (ctx->pc == 0x38DF20u) {
        ctx->pc = 0x38DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF1Cu;
        // 0x38df20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF24u;
        goto label_38df24;
    }
    ctx->pc = 0x38DF1Cu;
    SET_GPR_U32(ctx, 31, 0x38DF24u);
    ctx->pc = 0x38DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF1Cu;
    // 0x38df20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4132F8u, 0x38DF1Cu, 0x38DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF24u;
label_38df24:
    // 0x38df24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38df24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38df28:
    // 0x38df28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38df28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38df2c:
    // 0x38df2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38df2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38df30:
    // 0x38df30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38df30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38df34:
    // 0x38df34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38df34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38df38:
    // 0x38df38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38df38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38df3c:
    // 0x38df3c: 0x3e00008  jr          $ra
label_38df40:
    if (ctx->pc == 0x38DF40u) {
        ctx->pc = 0x38DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF3Cu;
        // 0x38df40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF44u;
        goto label_38df44;
    }
    ctx->pc = 0x38DF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF3Cu;
        // 0x38df40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DF44u;
label_38df44:
    // 0x38df44: 0x0  nop
    ctx->pc = 0x38df44u;
    // NOP
    ctx->pc = 0x38df48u;
}
