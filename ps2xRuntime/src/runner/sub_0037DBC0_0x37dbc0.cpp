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

// Function: sub_0037DBC0
// Address: 0x37dbc0 - 0x37df38
void sub_0037DBC0_0x37dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DBC0_0x37dbc0");
#endif

    switch (ctx->pc) {
        case 0x37dbc0u: goto label_37dbc0;
        case 0x37dbc4u: goto label_37dbc4;
        case 0x37dbc8u: goto label_37dbc8;
        case 0x37dbccu: goto label_37dbcc;
        case 0x37dbd0u: goto label_37dbd0;
        case 0x37dbd4u: goto label_37dbd4;
        case 0x37dbd8u: goto label_37dbd8;
        case 0x37dbdcu: goto label_37dbdc;
        case 0x37dbe0u: goto label_37dbe0;
        case 0x37dbe4u: goto label_37dbe4;
        case 0x37dbe8u: goto label_37dbe8;
        case 0x37dbecu: goto label_37dbec;
        case 0x37dbf0u: goto label_37dbf0;
        case 0x37dbf4u: goto label_37dbf4;
        case 0x37dbf8u: goto label_37dbf8;
        case 0x37dbfcu: goto label_37dbfc;
        case 0x37dc00u: goto label_37dc00;
        case 0x37dc04u: goto label_37dc04;
        case 0x37dc08u: goto label_37dc08;
        case 0x37dc0cu: goto label_37dc0c;
        case 0x37dc10u: goto label_37dc10;
        case 0x37dc14u: goto label_37dc14;
        case 0x37dc18u: goto label_37dc18;
        case 0x37dc1cu: goto label_37dc1c;
        case 0x37dc20u: goto label_37dc20;
        case 0x37dc24u: goto label_37dc24;
        case 0x37dc28u: goto label_37dc28;
        case 0x37dc2cu: goto label_37dc2c;
        case 0x37dc30u: goto label_37dc30;
        case 0x37dc34u: goto label_37dc34;
        case 0x37dc38u: goto label_37dc38;
        case 0x37dc3cu: goto label_37dc3c;
        case 0x37dc40u: goto label_37dc40;
        case 0x37dc44u: goto label_37dc44;
        case 0x37dc48u: goto label_37dc48;
        case 0x37dc4cu: goto label_37dc4c;
        case 0x37dc50u: goto label_37dc50;
        case 0x37dc54u: goto label_37dc54;
        case 0x37dc58u: goto label_37dc58;
        case 0x37dc5cu: goto label_37dc5c;
        case 0x37dc60u: goto label_37dc60;
        case 0x37dc64u: goto label_37dc64;
        case 0x37dc68u: goto label_37dc68;
        case 0x37dc6cu: goto label_37dc6c;
        case 0x37dc70u: goto label_37dc70;
        case 0x37dc74u: goto label_37dc74;
        case 0x37dc78u: goto label_37dc78;
        case 0x37dc7cu: goto label_37dc7c;
        case 0x37dc80u: goto label_37dc80;
        case 0x37dc84u: goto label_37dc84;
        case 0x37dc88u: goto label_37dc88;
        case 0x37dc8cu: goto label_37dc8c;
        case 0x37dc90u: goto label_37dc90;
        case 0x37dc94u: goto label_37dc94;
        case 0x37dc98u: goto label_37dc98;
        case 0x37dc9cu: goto label_37dc9c;
        case 0x37dca0u: goto label_37dca0;
        case 0x37dca4u: goto label_37dca4;
        case 0x37dca8u: goto label_37dca8;
        case 0x37dcacu: goto label_37dcac;
        case 0x37dcb0u: goto label_37dcb0;
        case 0x37dcb4u: goto label_37dcb4;
        case 0x37dcb8u: goto label_37dcb8;
        case 0x37dcbcu: goto label_37dcbc;
        case 0x37dcc0u: goto label_37dcc0;
        case 0x37dcc4u: goto label_37dcc4;
        case 0x37dcc8u: goto label_37dcc8;
        case 0x37dcccu: goto label_37dccc;
        case 0x37dcd0u: goto label_37dcd0;
        case 0x37dcd4u: goto label_37dcd4;
        case 0x37dcd8u: goto label_37dcd8;
        case 0x37dcdcu: goto label_37dcdc;
        case 0x37dce0u: goto label_37dce0;
        case 0x37dce4u: goto label_37dce4;
        case 0x37dce8u: goto label_37dce8;
        case 0x37dcecu: goto label_37dcec;
        case 0x37dcf0u: goto label_37dcf0;
        case 0x37dcf4u: goto label_37dcf4;
        case 0x37dcf8u: goto label_37dcf8;
        case 0x37dcfcu: goto label_37dcfc;
        case 0x37dd00u: goto label_37dd00;
        case 0x37dd04u: goto label_37dd04;
        case 0x37dd08u: goto label_37dd08;
        case 0x37dd0cu: goto label_37dd0c;
        case 0x37dd10u: goto label_37dd10;
        case 0x37dd14u: goto label_37dd14;
        case 0x37dd18u: goto label_37dd18;
        case 0x37dd1cu: goto label_37dd1c;
        case 0x37dd20u: goto label_37dd20;
        case 0x37dd24u: goto label_37dd24;
        case 0x37dd28u: goto label_37dd28;
        case 0x37dd2cu: goto label_37dd2c;
        case 0x37dd30u: goto label_37dd30;
        case 0x37dd34u: goto label_37dd34;
        case 0x37dd38u: goto label_37dd38;
        case 0x37dd3cu: goto label_37dd3c;
        case 0x37dd40u: goto label_37dd40;
        case 0x37dd44u: goto label_37dd44;
        case 0x37dd48u: goto label_37dd48;
        case 0x37dd4cu: goto label_37dd4c;
        case 0x37dd50u: goto label_37dd50;
        case 0x37dd54u: goto label_37dd54;
        case 0x37dd58u: goto label_37dd58;
        case 0x37dd5cu: goto label_37dd5c;
        case 0x37dd60u: goto label_37dd60;
        case 0x37dd64u: goto label_37dd64;
        case 0x37dd68u: goto label_37dd68;
        case 0x37dd6cu: goto label_37dd6c;
        case 0x37dd70u: goto label_37dd70;
        case 0x37dd74u: goto label_37dd74;
        case 0x37dd78u: goto label_37dd78;
        case 0x37dd7cu: goto label_37dd7c;
        case 0x37dd80u: goto label_37dd80;
        case 0x37dd84u: goto label_37dd84;
        case 0x37dd88u: goto label_37dd88;
        case 0x37dd8cu: goto label_37dd8c;
        case 0x37dd90u: goto label_37dd90;
        case 0x37dd94u: goto label_37dd94;
        case 0x37dd98u: goto label_37dd98;
        case 0x37dd9cu: goto label_37dd9c;
        case 0x37dda0u: goto label_37dda0;
        case 0x37dda4u: goto label_37dda4;
        case 0x37dda8u: goto label_37dda8;
        case 0x37ddacu: goto label_37ddac;
        case 0x37ddb0u: goto label_37ddb0;
        case 0x37ddb4u: goto label_37ddb4;
        case 0x37ddb8u: goto label_37ddb8;
        case 0x37ddbcu: goto label_37ddbc;
        case 0x37ddc0u: goto label_37ddc0;
        case 0x37ddc4u: goto label_37ddc4;
        case 0x37ddc8u: goto label_37ddc8;
        case 0x37ddccu: goto label_37ddcc;
        case 0x37ddd0u: goto label_37ddd0;
        case 0x37ddd4u: goto label_37ddd4;
        case 0x37ddd8u: goto label_37ddd8;
        case 0x37dddcu: goto label_37dddc;
        case 0x37dde0u: goto label_37dde0;
        case 0x37dde4u: goto label_37dde4;
        case 0x37dde8u: goto label_37dde8;
        case 0x37ddecu: goto label_37ddec;
        case 0x37ddf0u: goto label_37ddf0;
        case 0x37ddf4u: goto label_37ddf4;
        case 0x37ddf8u: goto label_37ddf8;
        case 0x37ddfcu: goto label_37ddfc;
        case 0x37de00u: goto label_37de00;
        case 0x37de04u: goto label_37de04;
        case 0x37de08u: goto label_37de08;
        case 0x37de0cu: goto label_37de0c;
        case 0x37de10u: goto label_37de10;
        case 0x37de14u: goto label_37de14;
        case 0x37de18u: goto label_37de18;
        case 0x37de1cu: goto label_37de1c;
        case 0x37de20u: goto label_37de20;
        case 0x37de24u: goto label_37de24;
        case 0x37de28u: goto label_37de28;
        case 0x37de2cu: goto label_37de2c;
        case 0x37de30u: goto label_37de30;
        case 0x37de34u: goto label_37de34;
        case 0x37de38u: goto label_37de38;
        case 0x37de3cu: goto label_37de3c;
        case 0x37de40u: goto label_37de40;
        case 0x37de44u: goto label_37de44;
        case 0x37de48u: goto label_37de48;
        case 0x37de4cu: goto label_37de4c;
        case 0x37de50u: goto label_37de50;
        case 0x37de54u: goto label_37de54;
        case 0x37de58u: goto label_37de58;
        case 0x37de5cu: goto label_37de5c;
        case 0x37de60u: goto label_37de60;
        case 0x37de64u: goto label_37de64;
        case 0x37de68u: goto label_37de68;
        case 0x37de6cu: goto label_37de6c;
        case 0x37de70u: goto label_37de70;
        case 0x37de74u: goto label_37de74;
        case 0x37de78u: goto label_37de78;
        case 0x37de7cu: goto label_37de7c;
        case 0x37de80u: goto label_37de80;
        case 0x37de84u: goto label_37de84;
        case 0x37de88u: goto label_37de88;
        case 0x37de8cu: goto label_37de8c;
        case 0x37de90u: goto label_37de90;
        case 0x37de94u: goto label_37de94;
        case 0x37de98u: goto label_37de98;
        case 0x37de9cu: goto label_37de9c;
        case 0x37dea0u: goto label_37dea0;
        case 0x37dea4u: goto label_37dea4;
        case 0x37dea8u: goto label_37dea8;
        case 0x37deacu: goto label_37deac;
        case 0x37deb0u: goto label_37deb0;
        case 0x37deb4u: goto label_37deb4;
        case 0x37deb8u: goto label_37deb8;
        case 0x37debcu: goto label_37debc;
        case 0x37dec0u: goto label_37dec0;
        case 0x37dec4u: goto label_37dec4;
        case 0x37dec8u: goto label_37dec8;
        case 0x37deccu: goto label_37decc;
        case 0x37ded0u: goto label_37ded0;
        case 0x37ded4u: goto label_37ded4;
        case 0x37ded8u: goto label_37ded8;
        case 0x37dedcu: goto label_37dedc;
        case 0x37dee0u: goto label_37dee0;
        case 0x37dee4u: goto label_37dee4;
        case 0x37dee8u: goto label_37dee8;
        case 0x37deecu: goto label_37deec;
        case 0x37def0u: goto label_37def0;
        case 0x37def4u: goto label_37def4;
        case 0x37def8u: goto label_37def8;
        case 0x37defcu: goto label_37defc;
        case 0x37df00u: goto label_37df00;
        case 0x37df04u: goto label_37df04;
        case 0x37df08u: goto label_37df08;
        case 0x37df0cu: goto label_37df0c;
        case 0x37df10u: goto label_37df10;
        case 0x37df14u: goto label_37df14;
        case 0x37df18u: goto label_37df18;
        case 0x37df1cu: goto label_37df1c;
        case 0x37df20u: goto label_37df20;
        case 0x37df24u: goto label_37df24;
        case 0x37df28u: goto label_37df28;
        case 0x37df2cu: goto label_37df2c;
        case 0x37df30u: goto label_37df30;
        case 0x37df34u: goto label_37df34;
        default: break;
    }

    ctx->pc = 0x37dbc0u;

label_37dbc0:
    // 0x37dbc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_37dbc4:
    // 0x37dbc4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_37dbc8:
    // 0x37dbc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37dbcc:
    // 0x37dbcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37dbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37dbd0:
    // 0x37dbd0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_37dbd4:
    // 0x37dbd4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_37dbd8:
    // 0x37dbd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_37dbdc:
    // 0x37dbdc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x37dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_37dbe0:
    // 0x37dbe0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x37dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_37dbe4:
    // 0x37dbe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37dbe8:
    // 0x37dbe8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x37dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_37dbec:
    // 0x37dbec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_37dbf0:
    if (ctx->pc == 0x37DBF0u) {
        ctx->pc = 0x37DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DBECu;
        // 0x37dbf0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DBF4u;
        goto label_37dbf4;
    }
    ctx->pc = 0x37DBECu;
    {
        const bool branch_taken_0x37dbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DBECu;
        // 0x37dbf0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dbec) {
            ctx->pc = 0x37DC04u;
            goto label_37dc04;
        }
    }
    ctx->pc = 0x37DBF4u;
label_37dbf4:
    // 0x37dbf4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37dbf8:
    // 0x37dbf8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x37dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_37dbfc:
    // 0x37dbfc: 0x40f809  jalr        $v0
label_37dc00:
    if (ctx->pc == 0x37DC00u) {
        ctx->pc = 0x37DC04u;
        goto label_37dc04;
    }
    ctx->pc = 0x37DBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37DC04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DBFCu, 0x37DC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37DC04u;
label_37dc04:
    // 0x37dc04: 0x12800033  beqz        $s4, . + 4 + (0x33 << 2)
label_37dc08:
    if (ctx->pc == 0x37DC08u) {
        ctx->pc = 0x37DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC04u;
        // 0x37dc08: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC0Cu;
        goto label_37dc0c;
    }
    ctx->pc = 0x37DC04u;
    {
        const bool branch_taken_0x37dc04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC04u;
        // 0x37dc08: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dc04) {
            ctx->pc = 0x37DCD4u;
            goto label_37dcd4;
        }
    }
    ctx->pc = 0x37DC0Cu;
label_37dc0c:
    // 0x37dc0c: 0xc0dfab2  jal         func_37EAC8
label_37dc10:
    if (ctx->pc == 0x37DC10u) {
        ctx->pc = 0x37DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC0Cu;
        // 0x37dc10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC14u;
        goto label_37dc14;
    }
    ctx->pc = 0x37DC0Cu;
    SET_GPR_U32(ctx, 31, 0x37DC14u);
    ctx->pc = 0x37DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC0Cu;
    // 0x37dc10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37EAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37EAC8u, 0x37DC0Cu, 0x37DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DC14u;
label_37dc14:
    // 0x37dc14: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x37dc14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_37dc18:
    // 0x37dc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37dc1c:
    // 0x37dc1c: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x37dc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_37dc20:
    // 0x37dc20: 0xc0df7ce  jal         func_37DF38
label_37dc24:
    if (ctx->pc == 0x37DC24u) {
        ctx->pc = 0x37DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC20u;
        // 0x37dc24: 0x2b080  sll         $s6, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC28u;
        goto label_37dc28;
    }
    ctx->pc = 0x37DC20u;
    SET_GPR_U32(ctx, 31, 0x37DC28u);
    ctx->pc = 0x37DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC20u;
    // 0x37dc24: 0x2b080  sll         $s6, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF38u, 0x37DC20u, 0x37DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DC28u;
label_37dc28:
    // 0x37dc28: 0x2d38821  addu        $s1, $s6, $s3
    ctx->pc = 0x37dc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_37dc2c:
    // 0x37dc2c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x37dc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37dc30:
    // 0x37dc30: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x37dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_37dc34:
    // 0x37dc34: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x37dc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_37dc38:
    // 0x37dc38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37dc3c:
    // 0x37dc3c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x37dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_37dc40:
    // 0x37dc40: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37dc44:
    // 0x37dc44: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x37dc44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
label_37dc48:
    // 0x37dc48: 0x204a818  mult        $s5, $s0, $a0
    ctx->pc = 0x37dc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_37dc4c:
    // 0x37dc4c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x37dc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_37dc50:
    // 0x37dc50: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x37dc50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_37dc54:
    // 0x37dc54: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x37dc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_37dc58:
    // 0x37dc58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x37dc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_37dc5c:
    // 0x37dc5c: 0x40f809  jalr        $v0
label_37dc60:
    if (ctx->pc == 0x37DC60u) {
        ctx->pc = 0x37DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC5Cu;
        // 0x37dc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC64u;
        goto label_37dc64;
    }
    ctx->pc = 0x37DC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37DC64u);
        ctx->pc = 0x37DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC5Cu;
        // 0x37dc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DC5Cu, 0x37DC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37DC64u;
label_37dc64:
    // 0x37dc64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37dc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37dc68:
    // 0x37dc68: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_37dc6c:
    if (ctx->pc == 0x37DC6Cu) {
        ctx->pc = 0x37DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC68u;
        // 0x37dc6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC70u;
        goto label_37dc70;
    }
    ctx->pc = 0x37DC68u;
    {
        const bool branch_taken_0x37dc68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC68u;
        // 0x37dc6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dc68) {
            ctx->pc = 0x37DCA0u;
            goto label_37dca0;
        }
    }
    ctx->pc = 0x37DC70u;
label_37dc70:
    // 0x37dc70: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37dc74:
    // 0x37dc74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37dc78:
    // 0x37dc78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37dc7c:
    // 0x37dc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37dc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37dc80:
    // 0x37dc80: 0xc1035f6  jal         func_40D7D8
label_37dc84:
    if (ctx->pc == 0x37DC84u) {
        ctx->pc = 0x37DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC80u;
        // 0x37dc84: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC88u;
        goto label_37dc88;
    }
    ctx->pc = 0x37DC80u;
    SET_GPR_U32(ctx, 31, 0x37DC88u);
    ctx->pc = 0x37DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC80u;
    // 0x37dc84: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37DC80u, 0x37DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DC88u;
label_37dc88:
    // 0x37dc88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37dc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37dc8c:
    // 0x37dc8c: 0xc103628  jal         func_40D8A0
label_37dc90:
    if (ctx->pc == 0x37DC90u) {
        ctx->pc = 0x37DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC8Cu;
        // 0x37dc90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC94u;
        goto label_37dc94;
    }
    ctx->pc = 0x37DC8Cu;
    SET_GPR_U32(ctx, 31, 0x37DC94u);
    ctx->pc = 0x37DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC8Cu;
    // 0x37dc90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37DC8Cu, 0x37DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DC94u;
label_37dc94:
    // 0x37dc94: 0x10000011  b           . + 4 + (0x11 << 2)
label_37dc98:
    if (ctx->pc == 0x37DC98u) {
        ctx->pc = 0x37DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC94u;
        // 0x37dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DC9Cu;
        goto label_37dc9c;
    }
    ctx->pc = 0x37DC94u;
    {
        const bool branch_taken_0x37dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC94u;
        // 0x37dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dc94) {
            ctx->pc = 0x37DCDCu;
            goto label_37dcdc;
        }
    }
    ctx->pc = 0x37DC9Cu;
label_37dc9c:
    // 0x37dc9c: 0x0  nop
    ctx->pc = 0x37dc9cu;
    // NOP
label_37dca0:
    // 0x37dca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37dca4:
    // 0x37dca4: 0xc0bb7e6  jal         func_2EDF98
label_37dca8:
    if (ctx->pc == 0x37DCA8u) {
        ctx->pc = 0x37DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCA4u;
        // 0x37dca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DCACu;
        goto label_37dcac;
    }
    ctx->pc = 0x37DCA4u;
    SET_GPR_U32(ctx, 31, 0x37DCACu);
    ctx->pc = 0x37DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DCA4u;
    // 0x37dca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37DCA4u, 0x37DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DCACu;
label_37dcac:
    // 0x37dcac: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x37dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_37dcb0:
    // 0x37dcb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_37dcb4:
    // 0x37dcb4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x37dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_37dcb8:
    // 0x37dcb8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x37dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_37dcbc:
    // 0x37dcbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37dcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_37dcc0:
    // 0x37dcc0: 0xae500054  sw          $s0, 0x54($s2)
    ctx->pc = 0x37dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
label_37dcc4:
    // 0x37dcc4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x37dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_37dcc8:
    // 0x37dcc8: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x37dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_37dccc:
    // 0x37dccc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37dcd0:
    // 0x37dcd0: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x37dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_37dcd4:
    // 0x37dcd4: 0xae540050  sw          $s4, 0x50($s2)
    ctx->pc = 0x37dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 20));
label_37dcd8:
    // 0x37dcd8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37dcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37dcdc:
    // 0x37dcdc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37dcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37dce0:
    // 0x37dce0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37dce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37dce4:
    // 0x37dce4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37dce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37dce8:
    // 0x37dce8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37dce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37dcec:
    // 0x37dcec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37dcecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37dcf0:
    // 0x37dcf0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x37dcf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37dcf4:
    // 0x37dcf4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x37dcf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37dcf8:
    // 0x37dcf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37dcfc:
    // 0x37dcfc: 0x3e00008  jr          $ra
label_37dd00:
    if (ctx->pc == 0x37DD00u) {
        ctx->pc = 0x37DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCFCu;
        // 0x37dd00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD04u;
        goto label_37dd04;
    }
    ctx->pc = 0x37DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCFCu;
        // 0x37dd00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DD04u;
label_37dd04:
    // 0x37dd04: 0x0  nop
    ctx->pc = 0x37dd04u;
    // NOP
label_37dd08:
    // 0x37dd08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37dd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_37dd0c:
    // 0x37dd0c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_37dd10:
    // 0x37dd10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37dd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_37dd14:
    // 0x37dd14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x37dd14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37dd18:
    // 0x37dd18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_37dd1c:
    // 0x37dd1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37dd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37dd20:
    // 0x37dd20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37dd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_37dd24:
    // 0x37dd24: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x37dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_37dd28:
    // 0x37dd28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37dd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37dd2c:
    // 0x37dd2c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_37dd30:
    // 0x37dd30: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_37dd34:
    // 0x37dd34: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_37dd38:
    if (ctx->pc == 0x37DD38u) {
        ctx->pc = 0x37DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD34u;
        // 0x37dd38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD3Cu;
        goto label_37dd3c;
    }
    ctx->pc = 0x37DD34u;
    {
        const bool branch_taken_0x37dd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD34u;
        // 0x37dd38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd34) {
            ctx->pc = 0x37DDACu;
            goto label_37ddac;
        }
    }
    ctx->pc = 0x37DD3Cu;
label_37dd3c:
    // 0x37dd3c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37dd40:
    // 0x37dd40: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_37dd44:
    if (ctx->pc == 0x37DD44u) {
        ctx->pc = 0x37DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD40u;
        // 0x37dd44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD48u;
        goto label_37dd48;
    }
    ctx->pc = 0x37DD40u;
    {
        const bool branch_taken_0x37dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD40u;
        // 0x37dd44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd40) {
            ctx->pc = 0x37DDACu;
            goto label_37ddac;
        }
    }
    ctx->pc = 0x37DD48u;
label_37dd48:
    // 0x37dd48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37dd48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37dd4c:
    // 0x37dd4c: 0x0  nop
    ctx->pc = 0x37dd4cu;
    // NOP
label_37dd50:
    // 0x37dd50: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x37dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_37dd54:
    // 0x37dd54: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x37dd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_37dd58:
    // 0x37dd58: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x37dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37dd5c:
    // 0x37dd5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37dd60:
    // 0x37dd60: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_37dd64:
    if (ctx->pc == 0x37DD64u) {
        ctx->pc = 0x37DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD60u;
        // 0x37dd64: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD68u;
        goto label_37dd68;
    }
    ctx->pc = 0x37DD60u;
    {
        const bool branch_taken_0x37dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dd60) {
            ctx->pc = 0x37DD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DD60u;
            // 0x37dd64: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DD9Cu;
            goto label_37dd9c;
        }
    }
    ctx->pc = 0x37DD68u;
label_37dd68:
    // 0x37dd68: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x37dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_37dd6c:
    // 0x37dd6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37dd70:
    if (ctx->pc == 0x37DD70u) {
        ctx->pc = 0x37DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD6Cu;
        // 0x37dd70: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD74u;
        goto label_37dd74;
    }
    ctx->pc = 0x37DD6Cu;
    {
        const bool branch_taken_0x37dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dd6c) {
            ctx->pc = 0x37DD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DD6Cu;
            // 0x37dd70: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DD9Cu;
            goto label_37dd9c;
        }
    }
    ctx->pc = 0x37DD74u;
label_37dd74:
    // 0x37dd74: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x37dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_37dd78:
    // 0x37dd78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37dd7c:
    if (ctx->pc == 0x37DD7Cu) {
        ctx->pc = 0x37DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD78u;
        // 0x37dd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD80u;
        goto label_37dd80;
    }
    ctx->pc = 0x37DD78u;
    {
        const bool branch_taken_0x37dd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD78u;
        // 0x37dd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd78) {
            ctx->pc = 0x37DD94u;
            goto label_37dd94;
        }
    }
    ctx->pc = 0x37DD80u;
label_37dd80:
    // 0x37dd80: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x37dd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_37dd84:
    // 0x37dd84: 0x40f809  jalr        $v0
label_37dd88:
    if (ctx->pc == 0x37DD88u) {
        ctx->pc = 0x37DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD84u;
        // 0x37dd88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD8Cu;
        goto label_37dd8c;
    }
    ctx->pc = 0x37DD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37DD8Cu);
        ctx->pc = 0x37DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD84u;
        // 0x37dd88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DD84u, 0x37DD8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37DD8Cu;
label_37dd8c:
    // 0x37dd8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_37dd90:
    if (ctx->pc == 0x37DD90u) {
        ctx->pc = 0x37DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD8Cu;
        // 0x37dd90: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DD94u;
        goto label_37dd94;
    }
    ctx->pc = 0x37DD8Cu;
    {
        const bool branch_taken_0x37dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD8Cu;
        // 0x37dd90: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd8c) {
            ctx->pc = 0x37DD98u;
            goto label_37dd98;
        }
    }
    ctx->pc = 0x37DD94u;
label_37dd94:
    // 0x37dd94: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x37dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_37dd98:
    // 0x37dd98: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37dd9c:
    // 0x37dd9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37dd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37dda0:
    // 0x37dda0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x37dda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37dda4:
    // 0x37dda4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_37dda8:
    if (ctx->pc == 0x37DDA8u) {
        ctx->pc = 0x37DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDA4u;
        // 0x37dda8: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DDACu;
        goto label_37ddac;
    }
    ctx->pc = 0x37DDA4u;
    {
        const bool branch_taken_0x37dda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDA4u;
        // 0x37dda8: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dda4) {
            ctx->pc = 0x37DD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37dd50;
        }
    }
    ctx->pc = 0x37DDACu;
label_37ddac:
    // 0x37ddac: 0x32960008  andi        $s6, $s4, 0x8
    ctx->pc = 0x37ddacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_37ddb0:
    // 0x37ddb0: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x37ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_37ddb4:
    // 0x37ddb4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_37ddb8:
    if (ctx->pc == 0x37DDB8u) {
        ctx->pc = 0x37DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDB4u;
        // 0x37ddb8: 0x32950004  andi        $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DDBCu;
        goto label_37ddbc;
    }
    ctx->pc = 0x37DDB4u;
    {
        const bool branch_taken_0x37ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDB4u;
        // 0x37ddb8: 0x32950004  andi        $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddb4) {
            ctx->pc = 0x37DE24u;
            goto label_37de24;
        }
    }
    ctx->pc = 0x37DDBCu;
label_37ddbc:
    // 0x37ddbc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37ddc0:
    // 0x37ddc0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_37ddc4:
    if (ctx->pc == 0x37DDC4u) {
        ctx->pc = 0x37DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDC0u;
        // 0x37ddc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DDC8u;
        goto label_37ddc8;
    }
    ctx->pc = 0x37DDC0u;
    {
        const bool branch_taken_0x37ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDC0u;
        // 0x37ddc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddc0) {
            ctx->pc = 0x37DE24u;
            goto label_37de24;
        }
    }
    ctx->pc = 0x37DDC8u;
label_37ddc8:
    // 0x37ddc8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x37ddc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_37ddcc:
    // 0x37ddcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x37ddccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ddd0:
    // 0x37ddd0: 0x3673fffd  ori         $s3, $s3, 0xFFFD
    ctx->pc = 0x37ddd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65533);
label_37ddd4:
    // 0x37ddd4: 0x0  nop
    ctx->pc = 0x37ddd4u;
    // NOP
label_37ddd8:
    // 0x37ddd8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x37ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_37dddc:
    // 0x37dddc: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x37dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_37dde0:
    // 0x37dde0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x37dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37dde4:
    // 0x37dde4: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x37dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_37dde8:
    // 0x37dde8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37dde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_37ddec:
    // 0x37ddec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_37ddf0:
    if (ctx->pc == 0x37DDF0u) {
        ctx->pc = 0x37DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDECu;
        // 0x37ddf0: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DDF4u;
        goto label_37ddf4;
    }
    ctx->pc = 0x37DDECu;
    {
        const bool branch_taken_0x37ddec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDECu;
        // 0x37ddf0: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddec) {
            ctx->pc = 0x37DE10u;
            goto label_37de10;
        }
    }
    ctx->pc = 0x37DDF4u;
label_37ddf4:
    // 0x37ddf4: 0xc0e02d2  jal         func_380B48
label_37ddf8:
    if (ctx->pc == 0x37DDF8u) {
        ctx->pc = 0x37DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDF4u;
        // 0x37ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DDFCu;
        goto label_37ddfc;
    }
    ctx->pc = 0x37DDF4u;
    SET_GPR_U32(ctx, 31, 0x37DDFCu);
    ctx->pc = 0x37DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DDF4u;
    // 0x37ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380B48u, 0x37DDF4u, 0x37DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DDFCu;
label_37ddfc:
    // 0x37ddfc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_37de00:
    if (ctx->pc == 0x37DE00u) {
        ctx->pc = 0x37DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDFCu;
        // 0x37de00: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE04u;
        goto label_37de04;
    }
    ctx->pc = 0x37DDFCu;
    {
        const bool branch_taken_0x37ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ddfc) {
            ctx->pc = 0x37DE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DDFCu;
            // 0x37de00: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DE14u;
            goto label_37de14;
        }
    }
    ctx->pc = 0x37DE04u;
label_37de04:
    // 0x37de04: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x37de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37de08:
    // 0x37de08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_37de0c:
    // 0x37de0c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x37de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_37de10:
    // 0x37de10: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_37de14:
    // 0x37de14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37de14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37de18:
    // 0x37de18: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x37de18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37de1c:
    // 0x37de1c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_37de20:
    if (ctx->pc == 0x37DE20u) {
        ctx->pc = 0x37DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE1Cu;
        // 0x37de20: 0x26940120  addiu       $s4, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE24u;
        goto label_37de24;
    }
    ctx->pc = 0x37DE1Cu;
    {
        const bool branch_taken_0x37de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE1Cu;
        // 0x37de20: 0x26940120  addiu       $s4, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de1c) {
            ctx->pc = 0x37DDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ddd8;
        }
    }
    ctx->pc = 0x37DE24u;
label_37de24:
    // 0x37de24: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_37de28:
    if (ctx->pc == 0x37DE28u) {
        ctx->pc = 0x37DE2Cu;
        goto label_37de2c;
    }
    ctx->pc = 0x37DE24u;
    {
        const bool branch_taken_0x37de24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x37de24) {
            ctx->pc = 0x37DE38u;
            goto label_37de38;
        }
    }
    ctx->pc = 0x37DE2Cu;
label_37de2c:
    // 0x37de2c: 0xc0df5e8  jal         func_37D7A0
label_37de30:
    if (ctx->pc == 0x37DE30u) {
        ctx->pc = 0x37DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE2Cu;
        // 0x37de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE34u;
        goto label_37de34;
    }
    ctx->pc = 0x37DE2Cu;
    SET_GPR_U32(ctx, 31, 0x37DE34u);
    ctx->pc = 0x37DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE2Cu;
    // 0x37de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D7A0u, 0x37DE2Cu, 0x37DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DE34u;
label_37de34:
    // 0x37de34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37de34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37de38:
    // 0x37de38: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_37de3c:
    if (ctx->pc == 0x37DE3Cu) {
        ctx->pc = 0x37DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE38u;
        // 0x37de3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE40u;
        goto label_37de40;
    }
    ctx->pc = 0x37DE38u;
    {
        const bool branch_taken_0x37de38 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE38u;
        // 0x37de3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de38) {
            ctx->pc = 0x37DE50u;
            goto label_37de50;
        }
    }
    ctx->pc = 0x37DE40u;
label_37de40:
    // 0x37de40: 0xc0e05e0  jal         func_381780
label_37de44:
    if (ctx->pc == 0x37DE44u) {
        ctx->pc = 0x37DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE40u;
        // 0x37de44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE48u;
        goto label_37de48;
    }
    ctx->pc = 0x37DE40u;
    SET_GPR_U32(ctx, 31, 0x37DE48u);
    ctx->pc = 0x37DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE40u;
    // 0x37de44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381780u, 0x37DE40u, 0x37DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DE48u;
label_37de48:
    // 0x37de48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37de48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37de4c:
    // 0x37de4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37de4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37de50:
    // 0x37de50: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37de50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37de54:
    // 0x37de54: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37de54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37de58:
    // 0x37de58: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37de58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37de5c:
    // 0x37de5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37de5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37de60:
    // 0x37de60: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37de60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37de64:
    // 0x37de64: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37de64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37de68:
    // 0x37de68: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x37de68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37de6c:
    // 0x37de6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37de70:
    // 0x37de70: 0x3e00008  jr          $ra
label_37de74:
    if (ctx->pc == 0x37DE74u) {
        ctx->pc = 0x37DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE70u;
        // 0x37de74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE78u;
        goto label_37de78;
    }
    ctx->pc = 0x37DE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE70u;
        // 0x37de74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DE78u;
label_37de78:
    // 0x37de78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37de78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_37de7c:
    // 0x37de7c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37de80:
    // 0x37de80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_37de84:
    // 0x37de84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37de88:
    // 0x37de88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_37de8c:
    // 0x37de8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37de90:
    // 0x37de90: 0xc0df7d8  jal         func_37DF60
label_37de94:
    if (ctx->pc == 0x37DE94u) {
        ctx->pc = 0x37DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE90u;
        // 0x37de94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DE98u;
        goto label_37de98;
    }
    ctx->pc = 0x37DE90u;
    SET_GPR_U32(ctx, 31, 0x37DE98u);
    ctx->pc = 0x37DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE90u;
    // 0x37de94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DF60u, 0x37DE90u, 0x37DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DE98u;
label_37de98:
    // 0x37de98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37de98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37de9c:
    // 0x37de9c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37dea0:
    // 0x37dea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37dea4:
    // 0x37dea4: 0xc0e01d2  jal         func_380748
label_37dea8:
    if (ctx->pc == 0x37DEA8u) {
        ctx->pc = 0x37DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEA4u;
        // 0x37dea8: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DEACu;
        goto label_37deac;
    }
    ctx->pc = 0x37DEA4u;
    SET_GPR_U32(ctx, 31, 0x37DEACu);
    ctx->pc = 0x37DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEA4u;
    // 0x37dea8: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380748u, 0x37DEA4u, 0x37DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEACu;
label_37deac:
    // 0x37deac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x37deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_37deb0:
    // 0x37deb0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_37deb4:
    if (ctx->pc == 0x37DEB4u) {
        ctx->pc = 0x37DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEB0u;
        // 0x37deb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DEB8u;
        goto label_37deb8;
    }
    ctx->pc = 0x37DEB0u;
    {
        const bool branch_taken_0x37deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEB0u;
        // 0x37deb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37deb0) {
            ctx->pc = 0x37DED8u;
            goto label_37ded8;
        }
    }
    ctx->pc = 0x37DEB8u;
label_37deb8:
    // 0x37deb8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_37debc:
    // 0x37debc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37debcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_37dec0:
    // 0x37dec0: 0xc0e02ae  jal         func_380AB8
label_37dec4:
    if (ctx->pc == 0x37DEC4u) {
        ctx->pc = 0x37DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEC0u;
        // 0x37dec4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DEC8u;
        goto label_37dec8;
    }
    ctx->pc = 0x37DEC0u;
    SET_GPR_U32(ctx, 31, 0x37DEC8u);
    ctx->pc = 0x37DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEC0u;
    // 0x37dec4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AB8u, 0x37DEC0u, 0x37DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEC8u;
label_37dec8:
    // 0x37dec8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x37dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_37decc:
    // 0x37decc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x37deccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37ded0:
    // 0x37ded0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_37ded4:
    if (ctx->pc == 0x37DED4u) {
        ctx->pc = 0x37DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DED0u;
        // 0x37ded4: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DED8u;
        goto label_37ded8;
    }
    ctx->pc = 0x37DED0u;
    {
        const bool branch_taken_0x37ded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DED0u;
        // 0x37ded4: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ded0) {
            ctx->pc = 0x37DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37deb8;
        }
    }
    ctx->pc = 0x37DED8u;
label_37ded8:
    // 0x37ded8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37dedc:
    // 0x37dedc: 0xc0df6f0  jal         func_37DBC0
label_37dee0:
    if (ctx->pc == 0x37DEE0u) {
        ctx->pc = 0x37DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEDCu;
        // 0x37dee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DEE4u;
        goto label_37dee4;
    }
    ctx->pc = 0x37DEDCu;
    SET_GPR_U32(ctx, 31, 0x37DEE4u);
    ctx->pc = 0x37DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEDCu;
    // 0x37dee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DBC0u;
    goto label_37dbc0;
    ctx->pc = 0x37DEE4u;
label_37dee4:
    // 0x37dee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37dee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37dee8:
    // 0x37dee8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x37dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_37deec:
    // 0x37deec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37def0:
    // 0x37def0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x37def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_37def4:
    // 0x37def4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x37def4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_37def8:
    // 0x37def8: 0xc0e059a  jal         func_381668
label_37defc:
    if (ctx->pc == 0x37DEFCu) {
        ctx->pc = 0x37DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEF8u;
        // 0x37defc: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DF00u;
        goto label_37df00;
    }
    ctx->pc = 0x37DEF8u;
    SET_GPR_U32(ctx, 31, 0x37DF00u);
    ctx->pc = 0x37DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEF8u;
    // 0x37defc: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381668u, 0x37DEF8u, 0x37DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DF00u;
label_37df00:
    // 0x37df00: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_37df04:
    // 0x37df04: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x37df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_37df08:
    // 0x37df08: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x37df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_37df0c:
    // 0x37df0c: 0x60f809  jalr        $v1
label_37df10:
    if (ctx->pc == 0x37DF10u) {
        ctx->pc = 0x37DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF0Cu;
        // 0x37df10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DF14u;
        goto label_37df14;
    }
    ctx->pc = 0x37DF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37DF14u);
        ctx->pc = 0x37DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF0Cu;
        // 0x37df10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DF0Cu, 0x37DF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37DF14u;
label_37df14:
    // 0x37df14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37df14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37df18:
    // 0x37df18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37df1c:
    // 0x37df1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37df1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37df20:
    // 0x37df20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37df20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37df24:
    // 0x37df24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37df28:
    // 0x37df28: 0x3e00008  jr          $ra
label_37df2c:
    if (ctx->pc == 0x37DF2Cu) {
        ctx->pc = 0x37DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF28u;
        // 0x37df2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DF30u;
        goto label_37df30;
    }
    ctx->pc = 0x37DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF28u;
        // 0x37df2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DF30u;
label_37df30:
    // 0x37df30: 0x3e00008  jr          $ra
label_37df34:
    if (ctx->pc == 0x37DF34u) {
        ctx->pc = 0x37DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF30u;
        // 0x37df34: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37DF38u;
        goto label_fallthrough_0x37df30;
    }
    ctx->pc = 0x37DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF30u;
        // 0x37df34: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37df30:
    ctx->pc = 0x37DF38u;
}
