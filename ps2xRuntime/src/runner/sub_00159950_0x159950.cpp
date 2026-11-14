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

// Function: sub_00159950
// Address: 0x159950 - 0x159c20
void sub_00159950_0x159950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159950_0x159950");
#endif

    switch (ctx->pc) {
        case 0x159970u: goto label_159970;
        case 0x159990u: goto label_159990;
        case 0x159a00u: goto label_159a00;
        case 0x159a10u: goto label_159a10;
        case 0x159a30u: goto label_159a30;
        case 0x159a78u: goto label_159a78;
        case 0x159a88u: goto label_159a88;
        case 0x159a9cu: goto label_159a9c;
        case 0x159ab4u: goto label_159ab4;
        case 0x159ad8u: goto label_159ad8;
        case 0x159aecu: goto label_159aec;
        case 0x159b04u: goto label_159b04;
        case 0x159b1cu: goto label_159b1c;
        case 0x159b34u: goto label_159b34;
        case 0x159b44u: goto label_159b44;
        case 0x159b58u: goto label_159b58;
        case 0x159b70u: goto label_159b70;
        case 0x159b84u: goto label_159b84;
        case 0x159ba8u: goto label_159ba8;
        case 0x159bbcu: goto label_159bbc;
        case 0x159be0u: goto label_159be0;
        default: break;
    }

    ctx->pc = 0x159950u;

    // 0x159950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15995c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x159960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159964: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x159964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159968: 0xc058c0c  jal         func_163030
    ctx->pc = 0x159968u;
    SET_GPR_U32(ctx, 31, 0x159970u);
    ctx->pc = 0x163030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163030u, 0x159968u, 0x159970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159970u;
label_159970:
    // 0x159970: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x159974: 0x24633a30  addiu       $v1, $v1, 0x3A30
    ctx->pc = 0x159974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14896));
    // 0x159978: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15997c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15997cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x159980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159984: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159988: 0xc056254  jal         func_158950
    ctx->pc = 0x159988u;
    SET_GPR_U32(ctx, 31, 0x159990u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x159988u, 0x159990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159990u;
label_159990:
    // 0x159990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159994: 0xa04000a4  sb          $zero, 0xA4($v0)
    ctx->pc = 0x159994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x159998: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15999c: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x15999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x1599a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1599a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1599a4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1599a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x1599a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1599ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1599acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1599b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1599b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1599B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1599BCu;
    // 0x1599bc: 0x0  nop
    ctx->pc = 0x1599bcu;
    // NOP
    // 0x1599c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1599c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1599c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1599c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1599cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1599ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1599d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1599d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1599D4u;
    {
        const bool branch_taken_0x1599d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599d4) {
            ctx->pc = 0x159A30u;
            goto label_159a30;
        }
    }
    ctx->pc = 0x1599DCu;
    // 0x1599dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1599e0: 0x24633a30  addiu       $v1, $v1, 0x3A30
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14896));
    // 0x1599e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1599e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1599e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1599ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1599ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1599f0: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x1599f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1599f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1599f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1599f8: 0xc056094  jal         func_158250
    ctx->pc = 0x1599F8u;
    SET_GPR_U32(ctx, 31, 0x159A00u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1599F8u, 0x159A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A00u;
label_159a00:
    // 0x159a00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a08: 0xc058d30  jal         func_1634C0
    ctx->pc = 0x159A08u;
    SET_GPR_U32(ctx, 31, 0x159A10u);
    ctx->pc = 0x1634C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1634C0u, 0x159A08u, 0x159A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A10u;
label_159a10:
    // 0x159a10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x159a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159a14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x159a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x159a18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x159a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x159a1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159A1Cu;
    {
        const bool branch_taken_0x159a1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x159a1c) {
            ctx->pc = 0x159A30u;
            goto label_159a30;
        }
    }
    ctx->pc = 0x159A24u;
    // 0x159a24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159a28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x159A28u;
    SET_GPR_U32(ctx, 31, 0x159A30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x159A28u, 0x159A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A30u;
label_159a30:
    // 0x159a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x159a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x159a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x159A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159A44u;
    // 0x159a44: 0x0  nop
    ctx->pc = 0x159a44u;
    // NOP
    // 0x159a48: 0x0  nop
    ctx->pc = 0x159a48u;
    // NOP
    // 0x159a4c: 0x0  nop
    ctx->pc = 0x159a4cu;
    // NOP
    // 0x159a50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x159a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159a68: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x159a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x159a6c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159a70: 0xc058d6c  jal         func_1635B0
    ctx->pc = 0x159A70u;
    SET_GPR_U32(ctx, 31, 0x159A78u);
    ctx->pc = 0x1635B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635B0u, 0x159A70u, 0x159A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A78u;
label_159a78:
    // 0x159a78: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x159a78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x159A80u;
    {
        const bool branch_taken_0x159a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159a80) {
            ctx->pc = 0x159AB8u;
            goto label_159ab8;
        }
    }
    ctx->pc = 0x159A88u;
label_159a88:
    // 0x159a88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159a8c: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x159a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x159a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159A94u;
    SET_GPR_U32(ctx, 31, 0x159A9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159A94u, 0x159A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A9Cu;
label_159a9c:
    // 0x159a9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159aa0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159aa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x159aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159aa8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x159aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x159aac: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x159AACu;
    SET_GPR_U32(ctx, 31, 0x159AB4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x159AACu, 0x159AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AB4u;
label_159ab4:
    // 0x159ab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x159ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_159ab8:
    // 0x159ab8: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x159ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x159abc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x159ABCu;
    {
        const bool branch_taken_0x159abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159abc) {
            ctx->pc = 0x159A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159a88;
        }
    }
    ctx->pc = 0x159AC4u;
    // 0x159ac4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159ac8: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159acc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159ad0: 0xc056708  jal         func_159C20
    ctx->pc = 0x159AD0u;
    SET_GPR_U32(ctx, 31, 0x159AD8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x159AD0u, 0x159AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AD8u;
label_159ad8:
    // 0x159ad8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159adc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x159ae0: 0x24a52f10  addiu       $a1, $a1, 0x2F10
    ctx->pc = 0x159ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12048));
    // 0x159ae4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x159AE4u;
    SET_GPR_U32(ctx, 31, 0x159AECu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x159AE4u, 0x159AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AECu;
label_159aec:
    // 0x159aec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x159aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159af4: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159afc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159AFCu;
    SET_GPR_U32(ctx, 31, 0x159B04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159AFCu, 0x159B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B04u;
label_159b04:
    // 0x159b04: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x159b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x159b08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x159b10: 0x24a52f20  addiu       $a1, $a1, 0x2F20
    ctx->pc = 0x159b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12064));
    // 0x159b14: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x159B14u;
    SET_GPR_U32(ctx, 31, 0x159B1Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x159B14u, 0x159B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B1Cu;
label_159b1c:
    // 0x159b1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x159b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b24: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159b2c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159B2Cu;
    SET_GPR_U32(ctx, 31, 0x159B34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159B2Cu, 0x159B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B34u;
label_159b34:
    // 0x159b34: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x159b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x159b38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x159b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b3c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x159B3Cu;
    {
        const bool branch_taken_0x159b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b3c) {
            ctx->pc = 0x159BE4u;
            goto label_159be4;
        }
    }
    ctx->pc = 0x159B44u;
label_159b44:
    // 0x159b44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b48: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b50: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159B50u;
    SET_GPR_U32(ctx, 31, 0x159B58u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159B50u, 0x159B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B58u;
label_159b58:
    // 0x159b58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159b5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b60: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x159b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b68: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x159B68u;
    SET_GPR_U32(ctx, 31, 0x159B70u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x159B68u, 0x159B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B70u;
label_159b70:
    // 0x159b70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b74: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b7c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159B7Cu;
    SET_GPR_U32(ctx, 31, 0x159B84u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159B7Cu, 0x159B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B84u;
label_159b84:
    // 0x159b84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159b88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159b8c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x159b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x159b90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x159b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x159b94: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x159b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x159b98: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x159b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159b9c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x159ba0: 0xc08c744  jal         func_231D10
    ctx->pc = 0x159BA0u;
    SET_GPR_U32(ctx, 31, 0x159BA8u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x159BA0u, 0x159BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BA8u;
label_159ba8:
    // 0x159ba8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159bac: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x159bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x159bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x159BB4u;
    SET_GPR_U32(ctx, 31, 0x159BBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x159BB4u, 0x159BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BBCu;
label_159bbc:
    // 0x159bbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159bc0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159bc4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x159bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x159bc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x159bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x159bcc: 0x2442be10  addiu       $v0, $v0, -0x41F0
    ctx->pc = 0x159bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x159bd0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x159bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159bd4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x159bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x159bd8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x159BD8u;
    SET_GPR_U32(ctx, 31, 0x159BE0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x159BD8u, 0x159BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BE0u;
label_159be0:
    // 0x159be0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_159be4:
    // 0x159be4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x159be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x159be8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x159BE8u;
    {
        const bool branch_taken_0x159be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159be8) {
            ctx->pc = 0x159B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159b44;
        }
    }
    ctx->pc = 0x159BF0u;
    // 0x159bf0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x159bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159bf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x159bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159bf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x159C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159C14u;
    // 0x159c14: 0x0  nop
    ctx->pc = 0x159c14u;
    // NOP
    // 0x159c18: 0x0  nop
    ctx->pc = 0x159c18u;
    // NOP
    // 0x159c1c: 0x0  nop
    ctx->pc = 0x159c1cu;
    // NOP
    ctx->pc = 0x159c20u;
}
