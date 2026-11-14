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

// Function: sub_001ADDA0
// Address: 0x1adda0 - 0x1adee0
void sub_001ADDA0_0x1adda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADDA0_0x1adda0");
#endif

    switch (ctx->pc) {
        case 0x1ade00u: goto label_1ade00;
        case 0x1ade38u: goto label_1ade38;
        case 0x1ade68u: goto label_1ade68;
        case 0x1adec4u: goto label_1adec4;
        default: break;
    }

    ctx->pc = 0x1adda0u;

    // 0x1adda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adda8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1adda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1addac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1addacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addb0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1addb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1addb4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1addb8: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1ADDB8u;
    {
        const bool branch_taken_0x1addb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1addb8) {
            ctx->pc = 0x1ADEB0u;
            goto label_1adeb0;
        }
    }
    ctx->pc = 0x1ADDC0u;
    // 0x1addc0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1addc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1addc4: 0x24848740  addiu       $a0, $a0, -0x78C0
    ctx->pc = 0x1addc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936384));
    // 0x1addc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1addc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1addcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1addccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1addd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1addd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1addd4: 0x600008  jr          $v1
    ctx->pc = 0x1ADDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADDDCu: goto label_1adddc;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADEB0u: goto label_1adeb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADDD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ADDDCu;
label_1adddc:
    // 0x1adddc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adde0: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1adde4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1ADDE4u;
    {
        const bool branch_taken_0x1adde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adde4) {
            ctx->pc = 0x1ADEC4u;
            goto label_1adec4;
        }
    }
    ctx->pc = 0x1ADDECu;
    // 0x1addec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1addecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addf0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1addf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1addf4: 0x24a56c68  addiu       $a1, $a1, 0x6C68
    ctx->pc = 0x1addf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27752));
    // 0x1addf8: 0xc064d48  jal         func_193520
    ctx->pc = 0x1ADDF8u;
    SET_GPR_U32(ctx, 31, 0x1ADE00u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1ADDF8u, 0x1ADE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE00u;
label_1ade00:
    // 0x1ade00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ade00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade04: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ade04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ade08: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ade08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ade0c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ade0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ade10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ade10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ade14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADE14u;
    {
        const bool branch_taken_0x1ade14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ade14) {
            ctx->pc = 0x1ADE28u;
            goto label_1ade28;
        }
    }
    ctx->pc = 0x1ADE1Cu;
    // 0x1ade1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ade20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ade20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade24: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ade24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ade28:
    // 0x1ade28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade2c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ade2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ade30: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADE30u;
    SET_GPR_U32(ctx, 31, 0x1ADE38u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADE30u, 0x1ADE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE38u;
label_1ade38:
    // 0x1ade38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ade38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade3c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ade40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ade40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ade44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ade48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ade4c: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ade50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ade50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade54: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ade58: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ade5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ade5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade60: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADE60u;
    SET_GPR_U32(ctx, 31, 0x1ADE68u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADE60u, 0x1ADE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE68u;
label_1ade68:
    // 0x1ade68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADE68u;
    {
        const bool branch_taken_0x1ade68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ade68) {
            ctx->pc = 0x1ADEC4u;
            goto label_1adec4;
        }
    }
    ctx->pc = 0x1ADE70u;
label_1ade70:
    // 0x1ade70: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade74: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1ade78: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADE78u;
    {
        const bool branch_taken_0x1ade78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ade78) {
            ctx->pc = 0x1ADEC4u;
            goto label_1adec4;
        }
    }
    ctx->pc = 0x1ADE80u;
    // 0x1ade80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade84: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1ade84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ade88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ade8c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ade8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ade90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ade90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade94: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1ade94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x1ade98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ade98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade9c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1ade9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adea0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adea4: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1adea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1adea8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADEA8u;
    {
        const bool branch_taken_0x1adea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adea8) {
            ctx->pc = 0x1ADEC4u;
            goto label_1adec4;
        }
    }
    ctx->pc = 0x1ADEB0u;
label_1adeb0:
    // 0x1adeb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adeb4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1adeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1adeb8: 0x24a56c68  addiu       $a1, $a1, 0x6C68
    ctx->pc = 0x1adeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27752));
    // 0x1adebc: 0xc064d48  jal         func_193520
    ctx->pc = 0x1ADEBCu;
    SET_GPR_U32(ctx, 31, 0x1ADEC4u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1ADEBCu, 0x1ADEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEC4u;
label_1adec4:
    // 0x1adec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adec8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1adec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1adecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADED4u;
    // 0x1aded4: 0x0  nop
    ctx->pc = 0x1aded4u;
    // NOP
    // 0x1aded8: 0x0  nop
    ctx->pc = 0x1aded8u;
    // NOP
    // 0x1adedc: 0x0  nop
    ctx->pc = 0x1adedcu;
    // NOP
    ctx->pc = 0x1adee0u;
}
