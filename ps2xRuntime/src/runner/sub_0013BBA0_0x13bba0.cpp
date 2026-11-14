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

// Function: sub_0013BBA0
// Address: 0x13bba0 - 0x13bf00
void sub_0013BBA0_0x13bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BBA0_0x13bba0");
#endif

    switch (ctx->pc) {
        case 0x13bbf4u: goto label_13bbf4;
        case 0x13bbfcu: goto label_13bbfc;
        case 0x13bc0cu: goto label_13bc0c;
        case 0x13bc24u: goto label_13bc24;
        case 0x13bc40u: goto label_13bc40;
        case 0x13bc68u: goto label_13bc68;
        case 0x13bcacu: goto label_13bcac;
        case 0x13bcc8u: goto label_13bcc8;
        case 0x13bcdcu: goto label_13bcdc;
        case 0x13bcecu: goto label_13bcec;
        case 0x13bd08u: goto label_13bd08;
        case 0x13bd18u: goto label_13bd18;
        case 0x13bd38u: goto label_13bd38;
        case 0x13bd5cu: goto label_13bd5c;
        case 0x13bd6cu: goto label_13bd6c;
        case 0x13bd7cu: goto label_13bd7c;
        case 0x13bd88u: goto label_13bd88;
        case 0x13bd94u: goto label_13bd94;
        case 0x13bdacu: goto label_13bdac;
        case 0x13bdc0u: goto label_13bdc0;
        case 0x13bdd0u: goto label_13bdd0;
        case 0x13bde0u: goto label_13bde0;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13be14u: goto label_13be14;
        case 0x13be30u: goto label_13be30;
        case 0x13be48u: goto label_13be48;
        case 0x13be5cu: goto label_13be5c;
        case 0x13be70u: goto label_13be70;
        case 0x13be80u: goto label_13be80;
        case 0x13be90u: goto label_13be90;
        case 0x13beccu: goto label_13becc;
        case 0x13bedcu: goto label_13bedc;
        default: break;
    }

    ctx->pc = 0x13bba0u;

    // 0x13bba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13bba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13bba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13bbac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bbb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bbbc: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x13bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x13bbc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13bbc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbc4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x13bbc8: 0xa040bda0  sb          $zero, -0x4260($v0)
    ctx->pc = 0x13bbc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60BDA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60BDA0u, _value); } while (0);
    // 0x13bbcc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bbd0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13bbd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BBD4u;
    {
        const bool branch_taken_0x13bbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbd4) {
            ctx->pc = 0x13BBF4u;
            goto label_13bbf4;
        }
    }
    ctx->pc = 0x13BBDCu;
    // 0x13bbdc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bbe0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x13bbe4: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13bbe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bbec: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x13BBECu;
    SET_GPR_U32(ctx, 31, 0x13BBF4u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x13BBECu, 0x13BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBF4u;
label_13bbf4:
    // 0x13bbf4: 0xc05548c  jal         func_155230
    ctx->pc = 0x13BBF4u;
    SET_GPR_U32(ctx, 31, 0x13BBFCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x13BBF4u, 0x13BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBFCu;
label_13bbfc:
    // 0x13bbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc00: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x13bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13bc04: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x13BC04u;
    SET_GPR_U32(ctx, 31, 0x13BC0Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x13BC04u, 0x13BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC0Cu;
label_13bc0c:
    // 0x13bc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13bc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x13BC10u;
    {
        const bool branch_taken_0x13bc10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc10) {
            ctx->pc = 0x13BC48u;
            goto label_13bc48;
        }
    }
    ctx->pc = 0x13BC18u;
    // 0x13bc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc1c: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x13BC1Cu;
    SET_GPR_U32(ctx, 31, 0x13BC24u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x13BC1Cu, 0x13BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC24u;
label_13bc24:
    // 0x13bc24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BC24u;
    {
        const bool branch_taken_0x13bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc24) {
            ctx->pc = 0x13BC48u;
            goto label_13bc48;
        }
    }
    ctx->pc = 0x13BC2Cu;
    // 0x13bc2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc34: 0x904500a9  lbu         $a1, 0xA9($v0)
    ctx->pc = 0x13bc34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 169)));
    // 0x13bc38: 0xc061c1c  jal         func_187070
    ctx->pc = 0x13BC38u;
    SET_GPR_U32(ctx, 31, 0x13BC40u);
    ctx->pc = 0x187070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187070u, 0x13BC38u, 0x13BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC40u;
label_13bc40:
    // 0x13bc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc44: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x13bc44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13bc48:
    // 0x13bc48: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bc4c: 0xa04000a9  sb          $zero, 0xA9($v0)
    ctx->pc = 0x13bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bc50: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x13bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13bc54: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x13bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13bc58: 0x240504c8  addiu       $a1, $zero, 0x4C8
    ctx->pc = 0x13bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x13bc5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13bc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc60: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x13BC60u;
    SET_GPR_U32(ctx, 31, 0x13BC68u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x13BC60u, 0x13BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC68u;
label_13bc68:
    // 0x13bc68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13bc68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc70: 0x12830061  beq         $s4, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x13BC70u;
    {
        const bool branch_taken_0x13bc70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x13bc70) {
            ctx->pc = 0x13BDF8u;
            goto label_13bdf8;
        }
    }
    ctx->pc = 0x13BC78u;
    // 0x13bc78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13bc7c: 0x12830028  beq         $s4, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x13BC7Cu;
    {
        const bool branch_taken_0x13bc7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x13bc7c) {
            ctx->pc = 0x13BD20u;
            goto label_13bd20;
        }
    }
    ctx->pc = 0x13BC84u;
    // 0x13bc84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bc88: 0x12830005  beq         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BC88u;
    {
        const bool branch_taken_0x13bc88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x13bc88) {
            ctx->pc = 0x13BCA0u;
            goto label_13bca0;
        }
    }
    ctx->pc = 0x13BC90u;
    // 0x13bc90: 0x12800081  beqz        $s4, . + 4 + (0x81 << 2)
    ctx->pc = 0x13BC90u;
    {
        const bool branch_taken_0x13bc90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc90) {
            ctx->pc = 0x13BE98u;
            goto label_13be98;
        }
    }
    ctx->pc = 0x13BC98u;
    // 0x13bc98: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x13BC98u;
    {
        const bool branch_taken_0x13bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc98) {
            ctx->pc = 0x13BE98u;
            goto label_13be98;
        }
    }
    ctx->pc = 0x13BCA0u;
label_13bca0:
    // 0x13bca0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bca4: 0xc088560  jal         func_221580
    ctx->pc = 0x13BCA4u;
    SET_GPR_U32(ctx, 31, 0x13BCACu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x13BCA4u, 0x13BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCACu;
label_13bcac:
    // 0x13bcac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bcb0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13bcb4: 0x24a52818  addiu       $a1, $a1, 0x2818
    ctx->pc = 0x13bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    // 0x13bcb8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x13bcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x13bcbc: 0x24c62830  addiu       $a2, $a2, 0x2830
    ctx->pc = 0x13bcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10288));
    // 0x13bcc0: 0xc041b90  jal         func_106E40
    ctx->pc = 0x13BCC0u;
    SET_GPR_U32(ctx, 31, 0x13BCC8u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x13BCC0u, 0x13BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCC8u;
label_13bcc8:
    // 0x13bcc8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bccc: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x13bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x13bcd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13bcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bcd4: 0xc040924  jal         func_102490
    ctx->pc = 0x13BCD4u;
    SET_GPR_U32(ctx, 31, 0x13BCDCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x13BCD4u, 0x13BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCDCu;
label_13bcdc:
    // 0x13bcdc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13bce0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bce4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x13BCE4u;
    SET_GPR_U32(ctx, 31, 0x13BCECu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x13BCE4u, 0x13BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCECu;
label_13bcec:
    // 0x13bcec: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x13bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13bcf0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x13bcf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13bcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13bcf8: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x13bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bcfc: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x13bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x13bd00: 0xc041bc4  jal         func_106F10
    ctx->pc = 0x13BD00u;
    SET_GPR_U32(ctx, 31, 0x13BD08u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x13BD00u, 0x13BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD08u;
label_13bd08:
    // 0x13bd08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bd0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bd10: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x13BD10u;
    SET_GPR_U32(ctx, 31, 0x13BD18u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x13BD10u, 0x13BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD18u;
label_13bd18:
    // 0x13bd18: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x13BD18u;
    {
        const bool branch_taken_0x13bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd18) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BD20u;
label_13bd20:
    // 0x13bd20: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x13bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13bd24: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x13bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13bd28: 0x240504c9  addiu       $a1, $zero, 0x4C9
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1225));
    // 0x13bd2c: 0x27868c70  addiu       $a2, $gp, -0x7390
    ctx->pc = 0x13bd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x13bd30: 0xc041a50  jal         func_106940
    ctx->pc = 0x13BD30u;
    SET_GPR_U32(ctx, 31, 0x13BD38u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x13BD30u, 0x13BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD38u;
label_13bd38:
    // 0x13bd38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13bd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd3c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x13bd3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bd40: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x13BD40u;
    {
        const bool branch_taken_0x13bd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd40) {
            ctx->pc = 0x13BE98u;
            goto label_13be98;
        }
    }
    ctx->pc = 0x13BD48u;
    // 0x13bd48: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bd4c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13bd50: 0x24a52800  addiu       $a1, $a1, 0x2800
    ctx->pc = 0x13bd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10240));
    // 0x13bd54: 0xc040304  jal         func_100C10
    ctx->pc = 0x13BD54u;
    SET_GPR_U32(ctx, 31, 0x13BD5Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13BD54u, 0x13BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD5Cu;
label_13bd5c:
    // 0x13bd5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bd60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13bd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd64: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x13BD64u;
    SET_GPR_U32(ctx, 31, 0x13BD6Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x13BD64u, 0x13BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD6Cu;
label_13bd6c:
    // 0x13bd6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bd70: 0x27858c78  addiu       $a1, $gp, -0x7388
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937720));
    // 0x13bd74: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x13BD74u;
    SET_GPR_U32(ctx, 31, 0x13BD7Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x13BD74u, 0x13BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD7Cu;
label_13bd7c:
    // 0x13bd7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bd80: 0xc088560  jal         func_221580
    ctx->pc = 0x13BD80u;
    SET_GPR_U32(ctx, 31, 0x13BD88u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x13BD80u, 0x13BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD88u;
label_13bd88:
    // 0x13bd88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bd8c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13BD8Cu;
    SET_GPR_U32(ctx, 31, 0x13BD94u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13BD8Cu, 0x13BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD94u;
label_13bd94:
    // 0x13bd94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bd98: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13bd9c: 0x24a52818  addiu       $a1, $a1, 0x2818
    ctx->pc = 0x13bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    // 0x13bda0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13bda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bda4: 0xc041b90  jal         func_106E40
    ctx->pc = 0x13BDA4u;
    SET_GPR_U32(ctx, 31, 0x13BDACu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x13BDA4u, 0x13BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDACu;
label_13bdac:
    // 0x13bdac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bdb0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x13bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x13bdb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bdb8: 0xc040924  jal         func_102490
    ctx->pc = 0x13BDB8u;
    SET_GPR_U32(ctx, 31, 0x13BDC0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x13BDB8u, 0x13BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDC0u;
label_13bdc0:
    // 0x13bdc0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13bdc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bdc8: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x13BDC8u;
    SET_GPR_U32(ctx, 31, 0x13BDD0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x13BDC8u, 0x13BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDD0u;
label_13bdd0:
    // 0x13bdd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bdd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bdd8: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x13BDD8u;
    SET_GPR_U32(ctx, 31, 0x13BDE0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x13BDD8u, 0x13BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDE0u;
label_13bde0:
    // 0x13bde0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bde4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bde8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13BDE8u;
    SET_GPR_U32(ctx, 31, 0x13BDF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13BDE8u, 0x13BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDF0u;
label_13bdf0:
    // 0x13bdf0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x13BDF0u;
    {
        const bool branch_taken_0x13bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bdf0) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BDF8u;
label_13bdf8:
    // 0x13bdf8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x13bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13bdfc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x13bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13be00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13be00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13be04: 0x24a52850  addiu       $a1, $a1, 0x2850
    ctx->pc = 0x13be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10320));
    // 0x13be08: 0x27868c70  addiu       $a2, $gp, -0x7390
    ctx->pc = 0x13be08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x13be0c: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x13BE0Cu;
    SET_GPR_U32(ctx, 31, 0x13BE14u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x13BE0Cu, 0x13BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE14u;
label_13be14:
    // 0x13be14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13be14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be18: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x13be18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13be1c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x13BE1Cu;
    {
        const bool branch_taken_0x13be1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be1c) {
            ctx->pc = 0x13BE98u;
            goto label_13be98;
        }
    }
    ctx->pc = 0x13BE24u;
    // 0x13be24: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be28: 0xc088560  jal         func_221580
    ctx->pc = 0x13BE28u;
    SET_GPR_U32(ctx, 31, 0x13BE30u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x13BE28u, 0x13BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE30u;
label_13be30:
    // 0x13be30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13be38: 0x24a52818  addiu       $a1, $a1, 0x2818
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    // 0x13be3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13be3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be40: 0xc041b90  jal         func_106E40
    ctx->pc = 0x13BE40u;
    SET_GPR_U32(ctx, 31, 0x13BE48u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x13BE40u, 0x13BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE48u;
label_13be48:
    // 0x13be48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be4c: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x13be50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13be50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13be54: 0xc040924  jal         func_102490
    ctx->pc = 0x13BE54u;
    SET_GPR_U32(ctx, 31, 0x13BE5Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x13BE54u, 0x13BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE5Cu;
label_13be5c:
    // 0x13be5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be60: 0x24050542  addiu       $a1, $zero, 0x542
    ctx->pc = 0x13be60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1346));
    // 0x13be64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13be64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13be68: 0xc041b54  jal         func_106D50
    ctx->pc = 0x13BE68u;
    SET_GPR_U32(ctx, 31, 0x13BE70u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x13BE68u, 0x13BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE70u;
label_13be70:
    // 0x13be70: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13be74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be78: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x13BE78u;
    SET_GPR_U32(ctx, 31, 0x13BE80u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x13BE78u, 0x13BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE80u;
label_13be80:
    // 0x13be80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13be84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13be88: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x13BE88u;
    SET_GPR_U32(ctx, 31, 0x13BE90u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x13BE88u, 0x13BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE90u;
label_13be90:
    // 0x13be90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13BE90u;
    {
        const bool branch_taken_0x13be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be90) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BE98u;
label_13be98:
    // 0x13be98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x13be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13be9c: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x13be9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x13bea0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13BEA0u;
    {
        const bool branch_taken_0x13bea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bea0) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BEA8u;
    // 0x13bea8: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13beb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13beb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13beb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13bebc: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x13bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bec0: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x13bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x13bec4: 0xc041bc4  jal         func_106F10
    ctx->pc = 0x13BEC4u;
    SET_GPR_U32(ctx, 31, 0x13BECCu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x13BEC4u, 0x13BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BECCu;
label_13becc:
    // 0x13becc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bed4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x13BED4u;
    SET_GPR_U32(ctx, 31, 0x13BEDCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x13BED4u, 0x13BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BEDCu;
label_13bedc:
    // 0x13bedc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13beec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13beecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bef4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13bef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13bef8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BF00u;
}
