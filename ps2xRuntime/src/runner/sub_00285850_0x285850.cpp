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

// Function: sub_00285850
// Address: 0x285850 - 0x285ca0
void sub_00285850_0x285850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285850_0x285850");
#endif

    switch (ctx->pc) {
        case 0x2858b0u: goto label_2858b0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858e8u: goto label_2858e8;
        case 0x285908u: goto label_285908;
        case 0x28593cu: goto label_28593c;
        case 0x28599cu: goto label_28599c;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859ccu: goto label_2859cc;
        case 0x2859e8u: goto label_2859e8;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a30u: goto label_285a30;
        case 0x285a40u: goto label_285a40;
        case 0x285a50u: goto label_285a50;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a78u: goto label_285a78;
        case 0x285a84u: goto label_285a84;
        case 0x285a98u: goto label_285a98;
        case 0x285ab0u: goto label_285ab0;
        case 0x285abcu: goto label_285abc;
        case 0x285ad0u: goto label_285ad0;
        case 0x285ae0u: goto label_285ae0;
        case 0x285ae8u: goto label_285ae8;
        case 0x285af4u: goto label_285af4;
        case 0x285b00u: goto label_285b00;
        case 0x285b20u: goto label_285b20;
        case 0x285b38u: goto label_285b38;
        case 0x285b44u: goto label_285b44;
        case 0x285b60u: goto label_285b60;
        case 0x285b74u: goto label_285b74;
        case 0x285b84u: goto label_285b84;
        case 0x285b9cu: goto label_285b9c;
        case 0x285ba8u: goto label_285ba8;
        case 0x285bbcu: goto label_285bbc;
        case 0x285bccu: goto label_285bcc;
        case 0x285bd4u: goto label_285bd4;
        case 0x285be0u: goto label_285be0;
        case 0x285bf8u: goto label_285bf8;
        case 0x285c08u: goto label_285c08;
        case 0x285c14u: goto label_285c14;
        case 0x285c20u: goto label_285c20;
        case 0x285c34u: goto label_285c34;
        case 0x285c44u: goto label_285c44;
        case 0x285c5cu: goto label_285c5c;
        default: break;
    }

    ctx->pc = 0x285850u;

    // 0x285850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285854: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x285854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x285858: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28585c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28585cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x285860: 0x3e00008  jr          $ra
    ctx->pc = 0x285860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285868u;
    // 0x285868: 0x0  nop
    ctx->pc = 0x285868u;
    // NOP
    // 0x28586c: 0x0  nop
    ctx->pc = 0x28586cu;
    // NOP
    // 0x285870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28587c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28587cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x285880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285884: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285884) {
            ctx->pc = 0x285908u;
            goto label_285908;
        }
    }
    ctx->pc = 0x28588Cu;
    // 0x28588c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x285890: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x285890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
    // 0x285894: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285898: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x285898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28589c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858a0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2858a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2858a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2858a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2858a8: 0xc0a1298  jal         func_284A60
    ctx->pc = 0x2858A8u;
    SET_GPR_U32(ctx, 31, 0x2858B0u);
    ctx->pc = 0x284A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A60u, 0x2858A8u, 0x2858B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858B0u;
label_2858b0:
    // 0x2858b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858b4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2858b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2858b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2858b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2858bc: 0xc0a1334  jal         func_284CD0
    ctx->pc = 0x2858BCu;
    SET_GPR_U32(ctx, 31, 0x2858C4u);
    ctx->pc = 0x284CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CD0u, 0x2858BCu, 0x2858C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858C4u;
label_2858c4:
    // 0x2858c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858c8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2858c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2858cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2858ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2858d0: 0xc0a13dc  jal         func_284F70
    ctx->pc = 0x2858D0u;
    SET_GPR_U32(ctx, 31, 0x2858D8u);
    ctx->pc = 0x284F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F70u, 0x2858D0u, 0x2858D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858D8u;
label_2858d8:
    // 0x2858d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2858d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2858dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858e0: 0xc091188  jal         func_244620
    ctx->pc = 0x2858E0u;
    SET_GPR_U32(ctx, 31, 0x2858E8u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2858E0u, 0x2858E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858E8u;
label_2858e8:
    // 0x2858e8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2858ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2858ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2858f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2858f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2858f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2858F4u;
    {
        const bool branch_taken_0x2858f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2858f4) {
            ctx->pc = 0x285908u;
            goto label_285908;
        }
    }
    ctx->pc = 0x2858FCu;
    // 0x2858fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285900: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x285900u;
    SET_GPR_U32(ctx, 31, 0x285908u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x285900u, 0x285908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285908u;
label_285908:
    // 0x285908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28590c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285914: 0x3e00008  jr          $ra
    ctx->pc = 0x285914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28591Cu;
    // 0x28591c: 0x0  nop
    ctx->pc = 0x28591cu;
    // NOP
    // 0x285920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28592c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x285930: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285934: 0xc0911a4  jal         func_244690
    ctx->pc = 0x285934u;
    SET_GPR_U32(ctx, 31, 0x28593Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x285934u, 0x28593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28593Cu;
label_28593c:
    // 0x28593c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x28593cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x285940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x285940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28594c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28594cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285950: 0x3e00008  jr          $ra
    ctx->pc = 0x285950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285958u;
    // 0x285958: 0x0  nop
    ctx->pc = 0x285958u;
    // NOP
    // 0x28595c: 0x0  nop
    ctx->pc = 0x28595cu;
    // NOP
    // 0x285960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x285960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x285964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x285968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28596c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x285970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x285978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x285978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28597c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28598c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x28598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x285990: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x285990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285994: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x285994u;
    SET_GPR_U32(ctx, 31, 0x28599Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x285994u, 0x28599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28599Cu;
label_28599c:
    // 0x28599c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x28599cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2859a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2859a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2859a4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2859a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2859a8: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2859A8u;
    SET_GPR_U32(ctx, 31, 0x2859B0u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2859A8u, 0x2859B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859B0u;
label_2859b0:
    // 0x2859b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2859b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859b4: 0x10160015  beq         $zero, $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x2859B4u;
    {
        const bool branch_taken_0x2859b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x2859b4) {
            ctx->pc = 0x285A0Cu;
            goto label_285a0c;
        }
    }
    ctx->pc = 0x2859BCu;
    // 0x2859bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2859bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2859c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2859c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2859C4u;
    SET_GPR_U32(ctx, 31, 0x2859CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2859C4u, 0x2859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859CCu;
label_2859cc:
    // 0x2859cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2859ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859d0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2859D0u;
    {
        const bool branch_taken_0x2859d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859d0) {
            ctx->pc = 0x2859F4u;
            goto label_2859f4;
        }
    }
    ctx->pc = 0x2859D8u;
    // 0x2859d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2859d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2859dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2859e0: 0xc0a1248  jal         func_284920
    ctx->pc = 0x2859E0u;
    SET_GPR_U32(ctx, 31, 0x2859E8u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x2859E0u, 0x2859E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859E8u;
label_2859e8:
    // 0x2859e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2859e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2859ECu;
    {
        const bool branch_taken_0x2859ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859ec) {
            ctx->pc = 0x2859F8u;
            goto label_2859f8;
        }
    }
    ctx->pc = 0x2859F4u;
label_2859f4:
    // 0x2859f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2859f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2859f8:
    // 0x2859f8: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2859f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859fc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2859fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a00: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x285a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a04: 0xc0a3594  jal         func_28D650
    ctx->pc = 0x285A04u;
    SET_GPR_U32(ctx, 31, 0x285A0Cu);
    ctx->pc = 0x28D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D650u, 0x285A04u, 0x285A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A0Cu;
label_285a0c:
    // 0x285a0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a10: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x285a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x285a14: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x285A14u;
    {
        const bool branch_taken_0x285a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x285a14) {
            ctx->pc = 0x285A40u;
            goto label_285a40;
        }
    }
    ctx->pc = 0x285A1Cu;
    // 0x285a1c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a20: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x285a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x285a24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x285a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285a28: 0xc1066de  jal         func_419B78
    ctx->pc = 0x285A28u;
    SET_GPR_U32(ctx, 31, 0x285A30u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x285A28u, 0x285A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A30u;
label_285a30:
    // 0x285a30: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a34: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x285a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x285a38: 0xc0e20da  jal         func_388368
    ctx->pc = 0x285A38u;
    SET_GPR_U32(ctx, 31, 0x285A40u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x285A38u, 0x285A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A40u;
label_285a40:
    // 0x285a40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a44: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x285a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x285a48: 0xc0a1848  jal         func_286120
    ctx->pc = 0x285A48u;
    SET_GPR_U32(ctx, 31, 0x285A50u);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x285A48u, 0x285A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A50u;
label_285a50:
    // 0x285a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x285A54u;
    {
        const bool branch_taken_0x285a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a54) {
            ctx->pc = 0x285A88u;
            goto label_285a88;
        }
    }
    ctx->pc = 0x285A5Cu;
label_285a5c:
    // 0x285a5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285a60: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285A60u;
    {
        const bool branch_taken_0x285a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x285a60) {
            ctx->pc = 0x285A84u;
            goto label_285a84;
        }
    }
    ctx->pc = 0x285A68u;
    // 0x285a68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285a6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x285a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285a70: 0xc1066de  jal         func_419B78
    ctx->pc = 0x285A70u;
    SET_GPR_U32(ctx, 31, 0x285A78u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x285A70u, 0x285A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A78u;
label_285a78:
    // 0x285a78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x285a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285a7c: 0xc0e20da  jal         func_388368
    ctx->pc = 0x285A7Cu;
    SET_GPR_U32(ctx, 31, 0x285A84u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x285A7Cu, 0x285A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A84u;
label_285a84:
    // 0x285a84: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x285a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_285a88:
    // 0x285a88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285a8c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x285a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x285a90: 0xc0a1840  jal         func_286100
    ctx->pc = 0x285A90u;
    SET_GPR_U32(ctx, 31, 0x285A98u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x285A90u, 0x285A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A98u;
label_285a98:
    // 0x285a98: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x285A98u;
    {
        const bool branch_taken_0x285a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x285a98) {
            ctx->pc = 0x285A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285a5c;
        }
    }
    ctx->pc = 0x285AA0u;
    // 0x285aa0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285aa4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x285aa8: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x285AA8u;
    SET_GPR_U32(ctx, 31, 0x285AB0u);
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x285AA8u, 0x285AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AB0u;
label_285ab0:
    // 0x285ab0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285ab4: 0xc054300  jal         func_150C00
    ctx->pc = 0x285AB4u;
    SET_GPR_U32(ctx, 31, 0x285ABCu);
    ctx->pc = 0x150C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C00u, 0x285AB4u, 0x285ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285ABCu;
label_285abc:
    // 0x285abc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285ac0: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x285ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x285ac4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x285ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x285ac8: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x285AC8u;
    SET_GPR_U32(ctx, 31, 0x285AD0u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x285AC8u, 0x285AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AD0u;
label_285ad0:
    // 0x285ad0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285ad4: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x285ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x285ad8: 0xc0542c8  jal         func_150B20
    ctx->pc = 0x285AD8u;
    SET_GPR_U32(ctx, 31, 0x285AE0u);
    ctx->pc = 0x150B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B20u, 0x285AD8u, 0x285AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AE0u;
label_285ae0:
    // 0x285ae0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x285AE0u;
    {
        const bool branch_taken_0x285ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ae0) {
            ctx->pc = 0x285B60u;
            goto label_285b60;
        }
    }
    ctx->pc = 0x285AE8u;
label_285ae8:
    // 0x285ae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x285ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x285AECu;
    {
        const bool branch_taken_0x285aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285aec) {
            ctx->pc = 0x285B48u;
            goto label_285b48;
        }
    }
    ctx->pc = 0x285AF4u;
label_285af4:
    // 0x285af4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285af8: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x285AF8u;
    SET_GPR_U32(ctx, 31, 0x285B00u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x285AF8u, 0x285B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B00u;
label_285b00:
    // 0x285b00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x285b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x285b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285b08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x285b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285b0c: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x285B0Cu;
    {
        const bool branch_taken_0x285b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x285b0c) {
            ctx->pc = 0x285B44u;
            goto label_285b44;
        }
    }
    ctx->pc = 0x285B14u;
    // 0x285b14: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285b18: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x285B18u;
    SET_GPR_U32(ctx, 31, 0x285B20u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x285B18u, 0x285B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B20u;
label_285b20:
    // 0x285b20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x285b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x285b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285b28: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x285b28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285b2c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x285b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x285b30: 0xc1066de  jal         func_419B78
    ctx->pc = 0x285B30u;
    SET_GPR_U32(ctx, 31, 0x285B38u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x285B30u, 0x285B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B38u;
label_285b38:
    // 0x285b38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x285b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b3c: 0xc0e20da  jal         func_388368
    ctx->pc = 0x285B3Cu;
    SET_GPR_U32(ctx, 31, 0x285B44u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x285B3Cu, 0x285B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B44u;
label_285b44:
    // 0x285b44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_285b48:
    // 0x285b48: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x285b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x285b4c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x285B4Cu;
    {
        const bool branch_taken_0x285b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b4c) {
            ctx->pc = 0x285AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285af4;
        }
    }
    ctx->pc = 0x285B54u;
    // 0x285b54: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285b58: 0xc054278  jal         func_1509E0
    ctx->pc = 0x285B58u;
    SET_GPR_U32(ctx, 31, 0x285B60u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x285B58u, 0x285B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B60u;
label_285b60:
    // 0x285b60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285b64: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285b68: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x285b6c: 0xc054288  jal         func_150A20
    ctx->pc = 0x285B6Cu;
    SET_GPR_U32(ctx, 31, 0x285B74u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x285B6Cu, 0x285B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B74u;
label_285b74:
    // 0x285b74: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x285b78: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x285b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285b7c: 0xc041998  jal         func_106660
    ctx->pc = 0x285B7Cu;
    SET_GPR_U32(ctx, 31, 0x285B84u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x285B7Cu, 0x285B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B84u;
label_285b84:
    // 0x285b84: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x285B84u;
    {
        const bool branch_taken_0x285b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b84) {
            ctx->pc = 0x285AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285ae8;
        }
    }
    ctx->pc = 0x285B8Cu;
    // 0x285b8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285b90: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x285b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x285b94: 0xc0a17b0  jal         func_285EC0
    ctx->pc = 0x285B94u;
    SET_GPR_U32(ctx, 31, 0x285B9Cu);
    ctx->pc = 0x285EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EC0u, 0x285B94u, 0x285B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B9Cu;
label_285b9c:
    // 0x285b9c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285ba0: 0xc0a17a8  jal         func_285EA0
    ctx->pc = 0x285BA0u;
    SET_GPR_U32(ctx, 31, 0x285BA8u);
    ctx->pc = 0x285EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EA0u, 0x285BA0u, 0x285BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BA8u;
label_285ba8:
    // 0x285ba8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285bac: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x285bb0: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x285bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x285bb4: 0xc0a1788  jal         func_285E20
    ctx->pc = 0x285BB4u;
    SET_GPR_U32(ctx, 31, 0x285BBCu);
    ctx->pc = 0x285E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285E20u, 0x285BB4u, 0x285BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BBCu;
label_285bbc:
    // 0x285bbc: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285bc0: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x285bc4: 0xc0a1778  jal         func_285DE0
    ctx->pc = 0x285BC4u;
    SET_GPR_U32(ctx, 31, 0x285BCCu);
    ctx->pc = 0x285DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DE0u, 0x285BC4u, 0x285BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BCCu;
label_285bcc:
    // 0x285bcc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x285BCCu;
    {
        const bool branch_taken_0x285bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285bcc) {
            ctx->pc = 0x285C20u;
            goto label_285c20;
        }
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285bd8: 0xc0a1770  jal         func_285DC0
    ctx->pc = 0x285BD8u;
    SET_GPR_U32(ctx, 31, 0x285BE0u);
    ctx->pc = 0x285DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DC0u, 0x285BD8u, 0x285BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BE0u;
label_285be0:
    // 0x285be0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285be4: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285BE4u;
    {
        const bool branch_taken_0x285be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x285be4) {
            ctx->pc = 0x285C14u;
            goto label_285c14;
        }
    }
    ctx->pc = 0x285BECu;
    // 0x285bec: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285bf0: 0xc0a1770  jal         func_285DC0
    ctx->pc = 0x285BF0u;
    SET_GPR_U32(ctx, 31, 0x285BF8u);
    ctx->pc = 0x285DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DC0u, 0x285BF0u, 0x285BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BF8u;
label_285bf8:
    // 0x285bf8: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x285bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285bfc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x285bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285c00: 0xc1066de  jal         func_419B78
    ctx->pc = 0x285C00u;
    SET_GPR_U32(ctx, 31, 0x285C08u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x285C00u, 0x285C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C08u;
label_285c08:
    // 0x285c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c0c: 0xc0e20da  jal         func_388368
    ctx->pc = 0x285C0Cu;
    SET_GPR_U32(ctx, 31, 0x285C14u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x285C0Cu, 0x285C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C14u;
label_285c14:
    // 0x285c14: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285c18: 0xc0a1760  jal         func_285D80
    ctx->pc = 0x285C18u;
    SET_GPR_U32(ctx, 31, 0x285C20u);
    ctx->pc = 0x285D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D80u, 0x285C18u, 0x285C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C20u;
label_285c20:
    // 0x285c20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285c24: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x285c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x285c28: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x285c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x285c2c: 0xc0a1734  jal         func_285CD0
    ctx->pc = 0x285C2Cu;
    SET_GPR_U32(ctx, 31, 0x285C34u);
    ctx->pc = 0x285CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CD0u, 0x285C2Cu, 0x285C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C34u;
label_285c34:
    // 0x285c34: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285c38: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x285c3c: 0xc041998  jal         func_106660
    ctx->pc = 0x285C3Cu;
    SET_GPR_U32(ctx, 31, 0x285C44u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x285C3Cu, 0x285C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C44u;
label_285c44:
    // 0x285c44: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x285C44u;
    {
        const bool branch_taken_0x285c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c44) {
            ctx->pc = 0x285BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285bd4;
        }
    }
    ctx->pc = 0x285C4Cu;
    // 0x285c4c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x285c50: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x285c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x285c54: 0xc0a1728  jal         func_285CA0
    ctx->pc = 0x285C54u;
    SET_GPR_U32(ctx, 31, 0x285C5Cu);
    ctx->pc = 0x285CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CA0u, 0x285C54u, 0x285C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C5Cu;
label_285c5c:
    // 0x285c5c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x285c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x285c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285c64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x285c64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285c68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285c68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285c6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x285c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285c70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285c70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285c74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285c74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285c78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285c88: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x285c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x285c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x285C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285C94u;
    // 0x285c94: 0x0  nop
    ctx->pc = 0x285c94u;
    // NOP
    // 0x285c98: 0x0  nop
    ctx->pc = 0x285c98u;
    // NOP
    // 0x285c9c: 0x0  nop
    ctx->pc = 0x285c9cu;
    // NOP
    ctx->pc = 0x285ca0u;
}
