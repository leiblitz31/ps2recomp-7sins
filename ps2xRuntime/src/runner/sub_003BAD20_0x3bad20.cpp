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

// Function: sub_003BAD20
// Address: 0x3bad20 - 0x3baf58
void sub_003BAD20_0x3bad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAD20_0x3bad20");
#endif

    switch (ctx->pc) {
        case 0x3bad20u: goto label_3bad20;
        case 0x3bad24u: goto label_3bad24;
        case 0x3bad28u: goto label_3bad28;
        case 0x3bad2cu: goto label_3bad2c;
        case 0x3bad30u: goto label_3bad30;
        case 0x3bad34u: goto label_3bad34;
        case 0x3bad38u: goto label_3bad38;
        case 0x3bad3cu: goto label_3bad3c;
        case 0x3bad40u: goto label_3bad40;
        case 0x3bad44u: goto label_3bad44;
        case 0x3bad48u: goto label_3bad48;
        case 0x3bad4cu: goto label_3bad4c;
        case 0x3bad50u: goto label_3bad50;
        case 0x3bad54u: goto label_3bad54;
        case 0x3bad58u: goto label_3bad58;
        case 0x3bad5cu: goto label_3bad5c;
        case 0x3bad60u: goto label_3bad60;
        case 0x3bad64u: goto label_3bad64;
        case 0x3bad68u: goto label_3bad68;
        case 0x3bad6cu: goto label_3bad6c;
        case 0x3bad70u: goto label_3bad70;
        case 0x3bad74u: goto label_3bad74;
        case 0x3bad78u: goto label_3bad78;
        case 0x3bad7cu: goto label_3bad7c;
        case 0x3bad80u: goto label_3bad80;
        case 0x3bad84u: goto label_3bad84;
        case 0x3bad88u: goto label_3bad88;
        case 0x3bad8cu: goto label_3bad8c;
        case 0x3bad90u: goto label_3bad90;
        case 0x3bad94u: goto label_3bad94;
        case 0x3bad98u: goto label_3bad98;
        case 0x3bad9cu: goto label_3bad9c;
        case 0x3bada0u: goto label_3bada0;
        case 0x3bada4u: goto label_3bada4;
        case 0x3bada8u: goto label_3bada8;
        case 0x3badacu: goto label_3badac;
        case 0x3badb0u: goto label_3badb0;
        case 0x3badb4u: goto label_3badb4;
        case 0x3badb8u: goto label_3badb8;
        case 0x3badbcu: goto label_3badbc;
        case 0x3badc0u: goto label_3badc0;
        case 0x3badc4u: goto label_3badc4;
        case 0x3badc8u: goto label_3badc8;
        case 0x3badccu: goto label_3badcc;
        case 0x3badd0u: goto label_3badd0;
        case 0x3badd4u: goto label_3badd4;
        case 0x3badd8u: goto label_3badd8;
        case 0x3baddcu: goto label_3baddc;
        case 0x3bade0u: goto label_3bade0;
        case 0x3bade4u: goto label_3bade4;
        case 0x3bade8u: goto label_3bade8;
        case 0x3badecu: goto label_3badec;
        case 0x3badf0u: goto label_3badf0;
        case 0x3badf4u: goto label_3badf4;
        case 0x3badf8u: goto label_3badf8;
        case 0x3badfcu: goto label_3badfc;
        case 0x3bae00u: goto label_3bae00;
        case 0x3bae04u: goto label_3bae04;
        case 0x3bae08u: goto label_3bae08;
        case 0x3bae0cu: goto label_3bae0c;
        case 0x3bae10u: goto label_3bae10;
        case 0x3bae14u: goto label_3bae14;
        case 0x3bae18u: goto label_3bae18;
        case 0x3bae1cu: goto label_3bae1c;
        case 0x3bae20u: goto label_3bae20;
        case 0x3bae24u: goto label_3bae24;
        case 0x3bae28u: goto label_3bae28;
        case 0x3bae2cu: goto label_3bae2c;
        case 0x3bae30u: goto label_3bae30;
        case 0x3bae34u: goto label_3bae34;
        case 0x3bae38u: goto label_3bae38;
        case 0x3bae3cu: goto label_3bae3c;
        case 0x3bae40u: goto label_3bae40;
        case 0x3bae44u: goto label_3bae44;
        case 0x3bae48u: goto label_3bae48;
        case 0x3bae4cu: goto label_3bae4c;
        case 0x3bae50u: goto label_3bae50;
        case 0x3bae54u: goto label_3bae54;
        case 0x3bae58u: goto label_3bae58;
        case 0x3bae5cu: goto label_3bae5c;
        case 0x3bae60u: goto label_3bae60;
        case 0x3bae64u: goto label_3bae64;
        case 0x3bae68u: goto label_3bae68;
        case 0x3bae6cu: goto label_3bae6c;
        case 0x3bae70u: goto label_3bae70;
        case 0x3bae74u: goto label_3bae74;
        case 0x3bae78u: goto label_3bae78;
        case 0x3bae7cu: goto label_3bae7c;
        case 0x3bae80u: goto label_3bae80;
        case 0x3bae84u: goto label_3bae84;
        case 0x3bae88u: goto label_3bae88;
        case 0x3bae8cu: goto label_3bae8c;
        case 0x3bae90u: goto label_3bae90;
        case 0x3bae94u: goto label_3bae94;
        case 0x3bae98u: goto label_3bae98;
        case 0x3bae9cu: goto label_3bae9c;
        case 0x3baea0u: goto label_3baea0;
        case 0x3baea4u: goto label_3baea4;
        case 0x3baea8u: goto label_3baea8;
        case 0x3baeacu: goto label_3baeac;
        case 0x3baeb0u: goto label_3baeb0;
        case 0x3baeb4u: goto label_3baeb4;
        case 0x3baeb8u: goto label_3baeb8;
        case 0x3baebcu: goto label_3baebc;
        case 0x3baec0u: goto label_3baec0;
        case 0x3baec4u: goto label_3baec4;
        case 0x3baec8u: goto label_3baec8;
        case 0x3baeccu: goto label_3baecc;
        case 0x3baed0u: goto label_3baed0;
        case 0x3baed4u: goto label_3baed4;
        case 0x3baed8u: goto label_3baed8;
        case 0x3baedcu: goto label_3baedc;
        case 0x3baee0u: goto label_3baee0;
        case 0x3baee4u: goto label_3baee4;
        case 0x3baee8u: goto label_3baee8;
        case 0x3baeecu: goto label_3baeec;
        case 0x3baef0u: goto label_3baef0;
        case 0x3baef4u: goto label_3baef4;
        case 0x3baef8u: goto label_3baef8;
        case 0x3baefcu: goto label_3baefc;
        case 0x3baf00u: goto label_3baf00;
        case 0x3baf04u: goto label_3baf04;
        case 0x3baf08u: goto label_3baf08;
        case 0x3baf0cu: goto label_3baf0c;
        case 0x3baf10u: goto label_3baf10;
        case 0x3baf14u: goto label_3baf14;
        case 0x3baf18u: goto label_3baf18;
        case 0x3baf1cu: goto label_3baf1c;
        case 0x3baf20u: goto label_3baf20;
        case 0x3baf24u: goto label_3baf24;
        case 0x3baf28u: goto label_3baf28;
        case 0x3baf2cu: goto label_3baf2c;
        case 0x3baf30u: goto label_3baf30;
        case 0x3baf34u: goto label_3baf34;
        case 0x3baf38u: goto label_3baf38;
        case 0x3baf3cu: goto label_3baf3c;
        case 0x3baf40u: goto label_3baf40;
        case 0x3baf44u: goto label_3baf44;
        case 0x3baf48u: goto label_3baf48;
        case 0x3baf4cu: goto label_3baf4c;
        case 0x3baf50u: goto label_3baf50;
        case 0x3baf54u: goto label_3baf54;
        default: break;
    }

    ctx->pc = 0x3bad20u;

label_3bad20:
    // 0x3bad20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3bad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3bad24:
    // 0x3bad24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bad28:
    // 0x3bad28: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3bad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3bad2c:
    // 0x3bad2c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3bad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3bad30:
    // 0x3bad30: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3bad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3bad34:
    // 0x3bad34: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3bad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3bad38:
    // 0x3bad38: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3bad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3bad3c:
    // 0x3bad3c: 0x24e7ce80  addiu       $a3, $a3, -0x3180
    ctx->pc = 0x3bad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954624));
label_3bad40:
    // 0x3bad40: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3bad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3bad44:
    // 0x3bad44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3bad44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bad48:
    // 0x3bad48: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3bad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3bad4c:
    // 0x3bad4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bad50:
    // 0x3bad50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3bad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3bad54:
    // 0x3bad54: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3bad54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bad58:
    // 0x3bad58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3bad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3bad5c:
    // 0x3bad5c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3bad5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3bad60:
    // 0x3bad60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3bad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3bad64:
    // 0x3bad64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3bad64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bad68:
    // 0x3bad68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3bad6c:
    // 0x3bad6c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3bad6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bad70:
    // 0x3bad70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3bad74:
    // 0x3bad74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3bad74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3bad78:
    // 0x3bad78: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3bad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3bad7c:
    // 0x3bad7c: 0x40f809  jalr        $v0
label_3bad80:
    if (ctx->pc == 0x3BAD80u) {
        ctx->pc = 0x3BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD7Cu;
        // 0x3bad80: 0x8ce40538  lw          $a0, 0x538($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAD84u;
        goto label_3bad84;
    }
    ctx->pc = 0x3BAD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BAD84u);
        ctx->pc = 0x3BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD7Cu;
        // 0x3bad80: 0x8ce40538  lw          $a0, 0x538($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAD7Cu, 0x3BAD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BAD84u;
label_3bad84:
    // 0x3bad84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bad84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bad88:
    // 0x3bad88: 0x12600066  beqz        $s3, . + 4 + (0x66 << 2)
label_3bad8c:
    if (ctx->pc == 0x3BAD8Cu) {
        ctx->pc = 0x3BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD88u;
        // 0x3bad8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAD90u;
        goto label_3bad90;
    }
    ctx->pc = 0x3BAD88u;
    {
        const bool branch_taken_0x3bad88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD88u;
        // 0x3bad8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bad88) {
            ctx->pc = 0x3BAF24u;
            goto label_3baf24;
        }
    }
    ctx->pc = 0x3BAD90u;
label_3bad90:
    // 0x3bad90: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3bad90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3bad94:
    // 0x3bad94: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3bad94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3bad98:
    // 0x3bad98: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3bad98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3bad9c:
    // 0x3bad9c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3bad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3bada0:
    // 0x3bada0: 0x12600060  beqz        $s3, . + 4 + (0x60 << 2)
label_3bada4:
    if (ctx->pc == 0x3BADA4u) {
        ctx->pc = 0x3BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADA0u;
        // 0x3bada4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADA8u;
        goto label_3bada8;
    }
    ctx->pc = 0x3BADA0u;
    {
        const bool branch_taken_0x3bada0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADA0u;
        // 0x3bada4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bada0) {
            ctx->pc = 0x3BAF24u;
            goto label_3baf24;
        }
    }
    ctx->pc = 0x3BADA8u;
label_3bada8:
    // 0x3bada8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3bada8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3badac:
    // 0x3badac: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x3badacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3badb0:
    // 0x3badb0: 0x1214000a  beq         $s0, $s4, . + 4 + (0xA << 2)
label_3badb4:
    if (ctx->pc == 0x3BADB4u) {
        ctx->pc = 0x3BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADB0u;
        // 0x3badb4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADB8u;
        goto label_3badb8;
    }
    ctx->pc = 0x3BADB0u;
    {
        const bool branch_taken_0x3badb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x3BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADB0u;
        // 0x3badb4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3badb0) {
            ctx->pc = 0x3BADDCu;
            goto label_3baddc;
        }
    }
    ctx->pc = 0x3BADB8u;
label_3badb8:
    // 0x3badb8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3badb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3badbc:
    // 0x3badbc: 0x0  nop
    ctx->pc = 0x3badbcu;
    // NOP
label_3badc0:
    // 0x3badc0: 0x0  nop
    ctx->pc = 0x3badc0u;
    // NOP
label_3badc4:
    // 0x3badc4: 0x0  nop
    ctx->pc = 0x3badc4u;
    // NOP
label_3badc8:
    // 0x3badc8: 0x0  nop
    ctx->pc = 0x3badc8u;
    // NOP
label_3badcc:
    // 0x3badcc: 0x0  nop
    ctx->pc = 0x3badccu;
    // NOP
label_3badd0:
    // 0x3badd0: 0x0  nop
    ctx->pc = 0x3badd0u;
    // NOP
label_3badd4:
    // 0x3badd4: 0x5614fffa  bnel        $s0, $s4, . + 4 + (-0x6 << 2)
label_3badd8:
    if (ctx->pc == 0x3BADD8u) {
        ctx->pc = 0x3BADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADD4u;
        // 0x3badd8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADDCu;
        goto label_3baddc;
    }
    ctx->pc = 0x3BADD4u;
    {
        const bool branch_taken_0x3badd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x3badd4) {
            ctx->pc = 0x3BADD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BADD4u;
            // 0x3badd8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3badc0;
        }
    }
    ctx->pc = 0x3BADDCu;
label_3baddc:
    // 0x3baddc: 0x1216000e  beq         $s0, $s6, . + 4 + (0xE << 2)
label_3bade0:
    if (ctx->pc == 0x3BADE0u) {
        ctx->pc = 0x3BADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADDCu;
        // 0x3bade0: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADE4u;
        goto label_3bade4;
    }
    ctx->pc = 0x3BADDCu;
    {
        const bool branch_taken_0x3baddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x3BADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADDCu;
        // 0x3bade0: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baddc) {
            ctx->pc = 0x3BAE18u;
            goto label_3bae18;
        }
    }
    ctx->pc = 0x3BADE4u;
label_3bade4:
    // 0x3bade4: 0x0  nop
    ctx->pc = 0x3bade4u;
    // NOP
label_3bade8:
    // 0x3bade8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3badec:
    if (ctx->pc == 0x3BADECu) {
        ctx->pc = 0x3BADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADE8u;
        // 0x3badec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADF0u;
        goto label_3badf0;
    }
    ctx->pc = 0x3BADE8u;
    {
        const bool branch_taken_0x3bade8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADE8u;
        // 0x3badec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bade8) {
            ctx->pc = 0x3BADF8u;
            goto label_3badf8;
        }
    }
    ctx->pc = 0x3BADF0u;
label_3badf0:
    // 0x3badf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3badf4:
    if (ctx->pc == 0x3BADF4u) {
        ctx->pc = 0x3BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADF0u;
        // 0x3badf4: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BADF8u;
        goto label_3badf8;
    }
    ctx->pc = 0x3BADF0u;
    {
        const bool branch_taken_0x3badf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADF0u;
        // 0x3badf4: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3badf0) {
            ctx->pc = 0x3BAE04u;
            goto label_3bae04;
        }
    }
    ctx->pc = 0x3BADF8u;
label_3badf8:
    // 0x3badf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3badfc:
    // 0x3badfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3badfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3bae00:
    // 0x3bae00: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3bae00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3bae04:
    // 0x3bae04: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3bae04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bae08:
    // 0x3bae08: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bae08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bae0c:
    // 0x3bae0c: 0x1616fff6  bne         $s0, $s6, . + 4 + (-0xA << 2)
label_3bae10:
    if (ctx->pc == 0x3BAE10u) {
        ctx->pc = 0x3BAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE0Cu;
        // 0x3bae10: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE14u;
        goto label_3bae14;
    }
    ctx->pc = 0x3BAE0Cu;
    {
        const bool branch_taken_0x3bae0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x3BAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE0Cu;
        // 0x3bae10: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae0c) {
            ctx->pc = 0x3BADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bade8;
        }
    }
    ctx->pc = 0x3BAE14u;
label_3bae14:
    // 0x3bae14: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3bae14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3bae18:
    // 0x3bae18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3bae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3bae1c:
    // 0x3bae1c: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x3bae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3bae20:
    // 0x3bae20: 0x2446ce80  addiu       $a2, $v0, -0x3180
    ctx->pc = 0x3bae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3bae24:
    // 0x3bae24: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3bae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3bae28:
    // 0x3bae28: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bae2c:
    // 0x3bae2c: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x3bae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_3bae30:
    // 0x3bae30: 0x40f809  jalr        $v0
label_3bae34:
    if (ctx->pc == 0x3BAE34u) {
        ctx->pc = 0x3BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE30u;
        // 0x3bae34: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE38u;
        goto label_3bae38;
    }
    ctx->pc = 0x3BAE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BAE38u);
        ctx->pc = 0x3BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE30u;
        // 0x3bae34: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAE30u, 0x3BAE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BAE38u;
label_3bae38:
    // 0x3bae38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bae38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bae3c:
    // 0x3bae3c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_3bae40:
    if (ctx->pc == 0x3BAE40u) {
        ctx->pc = 0x3BAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE3Cu;
        // 0x3bae40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE44u;
        goto label_3bae44;
    }
    ctx->pc = 0x3BAE3Cu;
    {
        const bool branch_taken_0x3bae3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE3Cu;
        // 0x3bae40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae3c) {
            ctx->pc = 0x3BAE4Cu;
            goto label_3bae4c;
        }
    }
    ctx->pc = 0x3BAE44u;
label_3bae44:
    // 0x3bae44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3bae44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3bae48:
    // 0x3bae48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3bae48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3bae4c:
    // 0x3bae4c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x3bae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3bae50:
    // 0x3bae50: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3bae54:
    if (ctx->pc == 0x3BAE54u) {
        ctx->pc = 0x3BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE50u;
        // 0x3bae54: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE58u;
        goto label_3bae58;
    }
    ctx->pc = 0x3BAE50u;
    {
        const bool branch_taken_0x3bae50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE50u;
        // 0x3bae54: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae50) {
            ctx->pc = 0x3BAE60u;
            goto label_3bae60;
        }
    }
    ctx->pc = 0x3BAE58u;
label_3bae58:
    // 0x3bae58: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bae5c:
    if (ctx->pc == 0x3BAE5Cu) {
        ctx->pc = 0x3BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE58u;
        // 0x3bae5c: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE60u;
        goto label_3bae60;
    }
    ctx->pc = 0x3BAE58u;
    {
        const bool branch_taken_0x3bae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE58u;
        // 0x3bae5c: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae58) {
            ctx->pc = 0x3BAE6Cu;
            goto label_3bae6c;
        }
    }
    ctx->pc = 0x3BAE60u;
label_3bae60:
    // 0x3bae60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bae64:
    // 0x3bae64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3bae64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3bae68:
    // 0x3bae68: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3bae68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_3bae6c:
    // 0x3bae6c: 0x1214000d  beq         $s0, $s4, . + 4 + (0xD << 2)
label_3bae70:
    if (ctx->pc == 0x3BAE70u) {
        ctx->pc = 0x3BAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE6Cu;
        // 0x3bae70: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE74u;
        goto label_3bae74;
    }
    ctx->pc = 0x3BAE6Cu;
    {
        const bool branch_taken_0x3bae6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x3BAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE6Cu;
        // 0x3bae70: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae6c) {
            ctx->pc = 0x3BAEA4u;
            goto label_3baea4;
        }
    }
    ctx->pc = 0x3BAE74u;
label_3bae74:
    // 0x3bae74: 0x0  nop
    ctx->pc = 0x3bae74u;
    // NOP
label_3bae78:
    // 0x3bae78: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_3bae7c:
    if (ctx->pc == 0x3BAE7Cu) {
        ctx->pc = 0x3BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE78u;
        // 0x3bae7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE80u;
        goto label_3bae80;
    }
    ctx->pc = 0x3BAE78u;
    {
        const bool branch_taken_0x3bae78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE78u;
        // 0x3bae7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae78) {
            ctx->pc = 0x3BAE88u;
            goto label_3bae88;
        }
    }
    ctx->pc = 0x3BAE80u;
label_3bae80:
    // 0x3bae80: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bae84:
    if (ctx->pc == 0x3BAE84u) {
        ctx->pc = 0x3BAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE80u;
        // 0x3bae84: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAE88u;
        goto label_3bae88;
    }
    ctx->pc = 0x3BAE80u;
    {
        const bool branch_taken_0x3bae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE80u;
        // 0x3bae84: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae80) {
            ctx->pc = 0x3BAE94u;
            goto label_3bae94;
        }
    }
    ctx->pc = 0x3BAE88u;
label_3bae88:
    // 0x3bae88: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bae8c:
    // 0x3bae8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3bae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3bae90:
    // 0x3bae90: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x3bae90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_3bae94:
    // 0x3bae94: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3bae94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bae98:
    // 0x3bae98: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bae98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bae9c:
    // 0x3bae9c: 0x1614fff6  bne         $s0, $s4, . + 4 + (-0xA << 2)
label_3baea0:
    if (ctx->pc == 0x3BAEA0u) {
        ctx->pc = 0x3BAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE9Cu;
        // 0x3baea0: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAEA4u;
        goto label_3baea4;
    }
    ctx->pc = 0x3BAE9Cu;
    {
        const bool branch_taken_0x3bae9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x3BAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE9Cu;
        // 0x3baea0: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae9c) {
            ctx->pc = 0x3BAE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bae78;
        }
    }
    ctx->pc = 0x3BAEA4u;
label_3baea4:
    // 0x3baea4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3baea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3baea8:
    // 0x3baea8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3baea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3baeac:
    // 0x3baeac: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x3baeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3baeb0:
    // 0x3baeb0: 0x2446ce80  addiu       $a2, $v0, -0x3180
    ctx->pc = 0x3baeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3baeb4:
    // 0x3baeb4: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x3baeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_3baeb8:
    // 0x3baeb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3baeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3baebc:
    // 0x3baebc: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3baebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3baec0:
    // 0x3baec0: 0x40f809  jalr        $v0
label_3baec4:
    if (ctx->pc == 0x3BAEC4u) {
        ctx->pc = 0x3BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEC0u;
        // 0x3baec4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAEC8u;
        goto label_3baec8;
    }
    ctx->pc = 0x3BAEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BAEC8u);
        ctx->pc = 0x3BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEC0u;
        // 0x3baec4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAEC0u, 0x3BAEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BAEC8u;
label_3baec8:
    // 0x3baec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3baec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3baecc:
    // 0x3baecc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3baed0:
    if (ctx->pc == 0x3BAED0u) {
        ctx->pc = 0x3BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAECCu;
        // 0x3baed0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAED4u;
        goto label_3baed4;
    }
    ctx->pc = 0x3BAECCu;
    {
        const bool branch_taken_0x3baecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAECCu;
        // 0x3baed0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baecc) {
            ctx->pc = 0x3BAEDCu;
            goto label_3baedc;
        }
    }
    ctx->pc = 0x3BAED4u;
label_3baed4:
    // 0x3baed4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3baed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3baed8:
    // 0x3baed8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3baed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3baedc:
    // 0x3baedc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3baedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3baee0:
    // 0x3baee0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_3baee4:
    if (ctx->pc == 0x3BAEE4u) {
        ctx->pc = 0x3BAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEE0u;
        // 0x3baee4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAEE8u;
        goto label_3baee8;
    }
    ctx->pc = 0x3BAEE0u;
    {
        const bool branch_taken_0x3baee0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEE0u;
        // 0x3baee4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baee0) {
            ctx->pc = 0x3BAEF0u;
            goto label_3baef0;
        }
    }
    ctx->pc = 0x3BAEE8u;
label_3baee8:
    // 0x3baee8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3baeec:
    if (ctx->pc == 0x3BAEECu) {
        ctx->pc = 0x3BAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEE8u;
        // 0x3baeec: 0xac840000  sw          $a0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAEF0u;
        goto label_3baef0;
    }
    ctx->pc = 0x3BAEE8u;
    {
        const bool branch_taken_0x3baee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEE8u;
        // 0x3baeec: 0xac840000  sw          $a0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baee8) {
            ctx->pc = 0x3BAEFCu;
            goto label_3baefc;
        }
    }
    ctx->pc = 0x3BAEF0u;
label_3baef0:
    // 0x3baef0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3baef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3baef4:
    // 0x3baef4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3baef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3baef8:
    // 0x3baef8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x3baef8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_3baefc:
    // 0x3baefc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3baefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3baf00:
    // 0x3baf00: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3baf00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3baf04:
    // 0x3baf04: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3baf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3baf08:
    // 0x3baf08: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3baf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3baf0c:
    // 0x3baf0c: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x3baf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_3baf10:
    // 0x3baf10: 0xacb7000c  sw          $s7, 0xC($a1)
    ctx->pc = 0x3baf10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 23));
label_3baf14:
    // 0x3baf14: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x3baf14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_3baf18:
    // 0x3baf18: 0xae7e000c  sw          $fp, 0xC($s3)
    ctx->pc = 0x3baf18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 30));
label_3baf1c:
    // 0x3baf1c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3baf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3baf20:
    // 0x3baf20: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x3baf20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_3baf24:
    // 0x3baf24: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3baf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3baf28:
    // 0x3baf28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3baf28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3baf2c:
    // 0x3baf2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3baf2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3baf30:
    // 0x3baf30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3baf30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3baf34:
    // 0x3baf34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3baf34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3baf38:
    // 0x3baf38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3baf38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3baf3c:
    // 0x3baf3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3baf3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3baf40:
    // 0x3baf40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3baf40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3baf44:
    // 0x3baf44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3baf44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3baf48:
    // 0x3baf48: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3baf48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3baf4c:
    // 0x3baf4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3baf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3baf50:
    // 0x3baf50: 0x3e00008  jr          $ra
label_3baf54:
    if (ctx->pc == 0x3BAF54u) {
        ctx->pc = 0x3BAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAF50u;
        // 0x3baf54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BAF58u;
        goto label_fallthrough_0x3baf50;
    }
    ctx->pc = 0x3BAF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAF50u;
        // 0x3baf54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3baf50:
    ctx->pc = 0x3BAF58u;
}
