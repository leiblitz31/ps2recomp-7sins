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

// Function: sub_00307B00
// Address: 0x307b00 - 0x307c20
void sub_00307B00_0x307b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307B00_0x307b00");
#endif

    switch (ctx->pc) {
        case 0x307b00u: goto label_307b00;
        case 0x307b04u: goto label_307b04;
        case 0x307b08u: goto label_307b08;
        case 0x307b0cu: goto label_307b0c;
        case 0x307b10u: goto label_307b10;
        case 0x307b14u: goto label_307b14;
        case 0x307b18u: goto label_307b18;
        case 0x307b1cu: goto label_307b1c;
        case 0x307b20u: goto label_307b20;
        case 0x307b24u: goto label_307b24;
        case 0x307b28u: goto label_307b28;
        case 0x307b2cu: goto label_307b2c;
        case 0x307b30u: goto label_307b30;
        case 0x307b34u: goto label_307b34;
        case 0x307b38u: goto label_307b38;
        case 0x307b3cu: goto label_307b3c;
        case 0x307b40u: goto label_307b40;
        case 0x307b44u: goto label_307b44;
        case 0x307b48u: goto label_307b48;
        case 0x307b4cu: goto label_307b4c;
        case 0x307b50u: goto label_307b50;
        case 0x307b54u: goto label_307b54;
        case 0x307b58u: goto label_307b58;
        case 0x307b5cu: goto label_307b5c;
        case 0x307b60u: goto label_307b60;
        case 0x307b64u: goto label_307b64;
        case 0x307b68u: goto label_307b68;
        case 0x307b6cu: goto label_307b6c;
        case 0x307b70u: goto label_307b70;
        case 0x307b74u: goto label_307b74;
        case 0x307b78u: goto label_307b78;
        case 0x307b7cu: goto label_307b7c;
        case 0x307b80u: goto label_307b80;
        case 0x307b84u: goto label_307b84;
        case 0x307b88u: goto label_307b88;
        case 0x307b8cu: goto label_307b8c;
        case 0x307b90u: goto label_307b90;
        case 0x307b94u: goto label_307b94;
        case 0x307b98u: goto label_307b98;
        case 0x307b9cu: goto label_307b9c;
        case 0x307ba0u: goto label_307ba0;
        case 0x307ba4u: goto label_307ba4;
        case 0x307ba8u: goto label_307ba8;
        case 0x307bacu: goto label_307bac;
        case 0x307bb0u: goto label_307bb0;
        case 0x307bb4u: goto label_307bb4;
        case 0x307bb8u: goto label_307bb8;
        case 0x307bbcu: goto label_307bbc;
        case 0x307bc0u: goto label_307bc0;
        case 0x307bc4u: goto label_307bc4;
        case 0x307bc8u: goto label_307bc8;
        case 0x307bccu: goto label_307bcc;
        case 0x307bd0u: goto label_307bd0;
        case 0x307bd4u: goto label_307bd4;
        case 0x307bd8u: goto label_307bd8;
        case 0x307bdcu: goto label_307bdc;
        case 0x307be0u: goto label_307be0;
        case 0x307be4u: goto label_307be4;
        case 0x307be8u: goto label_307be8;
        case 0x307becu: goto label_307bec;
        case 0x307bf0u: goto label_307bf0;
        case 0x307bf4u: goto label_307bf4;
        case 0x307bf8u: goto label_307bf8;
        case 0x307bfcu: goto label_307bfc;
        case 0x307c00u: goto label_307c00;
        case 0x307c04u: goto label_307c04;
        case 0x307c08u: goto label_307c08;
        case 0x307c0cu: goto label_307c0c;
        case 0x307c10u: goto label_307c10;
        case 0x307c14u: goto label_307c14;
        case 0x307c18u: goto label_307c18;
        case 0x307c1cu: goto label_307c1c;
        default: break;
    }

    ctx->pc = 0x307b00u;

label_307b00:
    // 0x307b00: 0x3c1a0061  lui         $k0, 0x61
    ctx->pc = 0x307b00u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)97 << 16));
label_307b04:
    // 0x307b04: 0x275a3fc0  addiu       $k0, $k0, 0x3FC0
    ctx->pc = 0x307b04u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 16320));
label_307b08:
    // 0x307b08: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x307b08u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_307b0c:
    // 0x307b0c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x307b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_307b10:
    // 0x307b10: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x307b10u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_307b14:
    // 0x307b14: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x307b14u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_307b18:
    // 0x307b18: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x307b18u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_307b1c:
    // 0x307b1c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x307b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_307b20:
    // 0x307b20: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x307b20u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_307b24:
    // 0x307b24: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x307b24u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_307b28:
    // 0x307b28: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x307b28u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_307b2c:
    // 0x307b2c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x307b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_307b30:
    // 0x307b30: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x307b30u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_307b34:
    // 0x307b34: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x307b34u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_307b38:
    // 0x307b38: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x307b38u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_307b3c:
    // 0x307b3c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x307b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_307b40:
    // 0x307b40: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x307b40u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_307b44:
    // 0x307b44: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x307b44u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_307b48:
    // 0x307b48: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x307b48u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_307b4c:
    // 0x307b4c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x307b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_307b50:
    // 0x307b50: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x307b50u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_307b54:
    // 0x307b54: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x307b54u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_307b58:
    // 0x307b58: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x307b58u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_307b5c:
    // 0x307b5c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x307b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_307b60:
    // 0x307b60: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x307b60u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_307b64:
    // 0x307b64: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x307b64u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_307b68:
    // 0x307b68: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x307b68u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_307b6c:
    // 0x307b6c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x307b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_307b70:
    // 0x307b70: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x307b70u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_307b74:
    // 0x307b74: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x307b74u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_307b78:
    // 0x307b78: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x307b78u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_307b7c:
    // 0x307b7c: 0x1010  mfhi        $v0
    ctx->pc = 0x307b7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_307b80:
    // 0x307b80: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307b84:
    // 0x307b84: 0xfc2241c0  sd          $v0, 0x41C0($at)
    ctx->pc = 0x307b84u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16832), GPR_U64(ctx, 2));
label_307b88:
    // 0x307b88: 0x70001010  mfhi1       $v0
    ctx->pc = 0x307b88u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_307b8c:
    // 0x307b8c: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307b90:
    // 0x307b90: 0xfc2241c8  sd          $v0, 0x41C8($at)
    ctx->pc = 0x307b90u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16840), GPR_U64(ctx, 2));
label_307b94:
    // 0x307b94: 0x1012  mflo        $v0
    ctx->pc = 0x307b94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_307b98:
    // 0x307b98: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307b9c:
    // 0x307b9c: 0xfc2241d0  sd          $v0, 0x41D0($at)
    ctx->pc = 0x307b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16848), GPR_U64(ctx, 2));
label_307ba0:
    // 0x307ba0: 0x70001012  mflo1       $v0
    ctx->pc = 0x307ba0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_307ba4:
    // 0x307ba4: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307ba8:
    // 0x307ba8: 0xfc2241d8  sd          $v0, 0x41D8($at)
    ctx->pc = 0x307ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16856), GPR_U64(ctx, 2));
label_307bac:
    // 0x307bac: 0x1028  mfsa        $v0
    ctx->pc = 0x307bacu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_307bb0:
    // 0x307bb0: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307bb4:
    // 0x307bb4: 0xfc2241e0  sd          $v0, 0x41E0($at)
    ctx->pc = 0x307bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16864), GPR_U64(ctx, 2));
label_307bb8:
    // 0x307bb8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x307bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_307bbc:
    // 0x307bbc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x307bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_307bc0:
    // 0x307bc0: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_307bc4:
    // 0x307bc4: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x307bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_307bc8:
    // 0x307bc8: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x307bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_307bcc:
    // 0x307bcc: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x307bccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
label_307bd0:
    // 0x307bd0: 0x25293fc0  addiu       $t1, $t1, 0x3FC0
    ctx->pc = 0x307bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16320));
label_307bd4:
    // 0x307bd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x307bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_307bd8:
    // 0x307bd8: 0x24217bfc  addiu       $at, $at, 0x7BFC
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31740));
label_307bdc:
    // 0x307bdc: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x307bdcu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_307be0:
    // 0x307be0: 0x40f  sync.p
    ctx->pc = 0x307be0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307be4:
    // 0x307be4: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x307be4u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_307be8:
    // 0x307be8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x307be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_307bec:
    // 0x307bec: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x307becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_307bf0:
    // 0x307bf0: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x307bf0u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_307bf4:
    // 0x307bf4: 0x40f  sync.p
    ctx->pc = 0x307bf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307bf8:
    // 0x307bf8: 0x42000018  eret
    ctx->pc = 0x307bf8u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_307bfc:
    // 0x307bfc: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x307bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_307c00:
    // 0x307c00: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x307c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
label_307c04:
    // 0x307c04: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x307c04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_307c08:
    // 0x307c08: 0x8c210f80  lw          $at, 0xF80($at)
    ctx->pc = 0x307c08u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3968)));
label_307c0c:
    // 0x307c0c: 0x3c1d0061  lui         $sp, 0x61
    ctx->pc = 0x307c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)97 << 16));
label_307c10:
    // 0x307c10: 0x20f809  jalr        $at
label_307c14:
    if (ctx->pc == 0x307C14u) {
        ctx->pc = 0x307C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C10u;
        // 0x307c14: 0x27bd3fc0  addiu       $sp, $sp, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307C18u;
        goto label_307c18;
    }
    ctx->pc = 0x307C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x307C18u);
        ctx->pc = 0x307C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C10u;
        // 0x307c14: 0x27bd3fc0  addiu       $sp, $sp, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C10u, 0x307C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307C18u;
label_307c18:
    // 0x307c18: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x307c18u;
    runtime->handleBreak(rdram, ctx);
label_307c1c:
    // 0x307c1c: 0x0  nop
    ctx->pc = 0x307c1cu;
    // NOP
    ctx->pc = 0x307c20u;
}
