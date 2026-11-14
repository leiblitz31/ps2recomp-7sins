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

// Function: sub_0015CD30
// Address: 0x15cd30 - 0x15d0b0
void sub_0015CD30_0x15cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CD30_0x15cd30");
#endif

    switch (ctx->pc) {
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ceacu: goto label_15ceac;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cee8u: goto label_15cee8;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf6cu: goto label_15cf6c;
        case 0x15d00cu: goto label_15d00c;
        case 0x15d018u: goto label_15d018;
        case 0x15d078u: goto label_15d078;
        case 0x15d098u: goto label_15d098;
        default: break;
    }

    ctx->pc = 0x15cd30u;

    // 0x15cd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cd34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15cd38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cd3c: 0x904201f0  lbu         $v0, 0x1F0($v0)
    ctx->pc = 0x15cd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x15cd40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15cd44: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CD4Cu;
    // 0x15cd4c: 0x0  nop
    ctx->pc = 0x15cd4cu;
    // NOP
    // 0x15cd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15cd54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cd5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15cd60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd64: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x15CD64u;
    SET_GPR_U32(ctx, 31, 0x15CD6Cu);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x15CD64u, 0x15CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD6Cu;
label_15cd6c:
    // 0x15cd6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd70: 0x906300a0  lbu         $v1, 0xA0($v1)
    ctx->pc = 0x15cd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x15cd74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CD74u;
    {
        const bool branch_taken_0x15cd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd74) {
            ctx->pc = 0x15CD88u;
            goto label_15cd88;
        }
    }
    ctx->pc = 0x15CD7Cu;
    // 0x15cd7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd80: 0xc058534  jal         func_1614D0
    ctx->pc = 0x15CD80u;
    SET_GPR_U32(ctx, 31, 0x15CD88u);
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x15CD80u, 0x15CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD88u;
label_15cd88:
    // 0x15cd88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd8c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cd90: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x15CD90u;
    {
        const bool branch_taken_0x15cd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd90) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15CD98u;
    // 0x15cd98: 0xa380a4b8  sb          $zero, -0x5B48($gp)
    ctx->pc = 0x15cd98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943928), (uint8_t)GPR_U32(ctx, 0));
    // 0x15cd9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15cd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cda0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cda4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cda8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15cda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x15cdac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CDACu;
    {
        const bool branch_taken_0x15cdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cdac) {
            ctx->pc = 0x15CDFCu;
            goto label_15cdfc;
        }
    }
    ctx->pc = 0x15CDB4u;
    // 0x15cdb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cdb8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15cdbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cdc0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15CDC0u;
    SET_GPR_U32(ctx, 31, 0x15CDC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15CDC0u, 0x15CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDC8u;
label_15cdc8:
    // 0x15cdc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15cdcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cdd0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15cdd4: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x15CDD4u;
    SET_GPR_U32(ctx, 31, 0x15CDDCu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15CDD4u, 0x15CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDDCu;
label_15cddc:
    // 0x15cddc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15cddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cde0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CDE0u;
    {
        const bool branch_taken_0x15cde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cde0) {
            ctx->pc = 0x15CDFCu;
            goto label_15cdfc;
        }
    }
    ctx->pc = 0x15CDE8u;
    // 0x15cde8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cdec: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x15cdf0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x15cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x15cdf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15cdf8: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x15cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_15cdfc:
    // 0x15cdfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce00: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15ce04: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x15ce04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x15ce08: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x15CE08u;
    {
        const bool branch_taken_0x15ce08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce08) {
            ctx->pc = 0x15CEF0u;
            goto label_15cef0;
        }
    }
    ctx->pc = 0x15CE10u;
    // 0x15ce10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce14: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15ce18: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ce1c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CE1Cu;
    {
        const bool branch_taken_0x15ce1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ce1c) {
            ctx->pc = 0x15CE44u;
            goto label_15ce44;
        }
    }
    ctx->pc = 0x15CE24u;
    // 0x15ce24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce28: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x15ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x15ce2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce34: 0xc055a78  jal         func_1569E0
    ctx->pc = 0x15CE34u;
    SET_GPR_U32(ctx, 31, 0x15CE3Cu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x15CE34u, 0x15CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE3Cu;
label_15ce3c:
    // 0x15ce3c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x15CE3Cu;
    {
        const bool branch_taken_0x15ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce3c) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15CE44u;
label_15ce44:
    // 0x15ce44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce48: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15ce4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ce50: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x15CE50u;
    {
        const bool branch_taken_0x15ce50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ce50) {
            ctx->pc = 0x15CEF0u;
            goto label_15cef0;
        }
    }
    ctx->pc = 0x15CE58u;
    // 0x15ce58: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x15ce5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x15ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ce60: 0xc7808e00  lwc1        $f0, -0x7200($gp)
    ctx->pc = 0x15ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ce64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ce68: 0xe7808e00  swc1        $f0, -0x7200($gp)
    ctx->pc = 0x15ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), bits); }
    // 0x15ce6c: 0xc7818e00  lwc1        $f1, -0x7200($gp)
    ctx->pc = 0x15ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ce70: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x15ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ce74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15ce74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ce78: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x15CE78u;
    {
        const bool branch_taken_0x15ce78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ce78) {
            ctx->pc = 0x15CEF0u;
            goto label_15cef0;
        }
    }
    ctx->pc = 0x15CE80u;
    // 0x15ce80: 0xc7818e00  lwc1        $f1, -0x7200($gp)
    ctx->pc = 0x15ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ce84: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x15ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ce88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15ce88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15ce8c: 0xe7808e00  swc1        $f0, -0x7200($gp)
    ctx->pc = 0x15ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), bits); }
    // 0x15ce90: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x15ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x15ce94: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x15ce94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15ce98: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15CE98u;
    {
        const bool branch_taken_0x15ce98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce98) {
            ctx->pc = 0x15CEF0u;
            goto label_15cef0;
        }
    }
    ctx->pc = 0x15CEA0u;
    // 0x15cea0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cea4: 0xc057438  jal         func_15D0E0
    ctx->pc = 0x15CEA4u;
    SET_GPR_U32(ctx, 31, 0x15CEACu);
    ctx->pc = 0x15D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0E0u, 0x15CEA4u, 0x15CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEACu;
label_15ceac:
    // 0x15ceac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ceb0: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15ceb4: 0xc05742c  jal         func_15D0B0
    ctx->pc = 0x15CEB4u;
    SET_GPR_U32(ctx, 31, 0x15CEBCu);
    ctx->pc = 0x15D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0B0u, 0x15CEB4u, 0x15CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEBCu;
label_15cebc:
    // 0x15cebc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cec0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15CEC0u;
    {
        const bool branch_taken_0x15cec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cec0) {
            ctx->pc = 0x15CEF0u;
            goto label_15cef0;
        }
    }
    ctx->pc = 0x15CEC8u;
    // 0x15cec8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cecc: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15ced0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x15ced4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15ced8: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x15ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x15cedc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cee0: 0xc0581cc  jal         func_160730
    ctx->pc = 0x15CEE0u;
    SET_GPR_U32(ctx, 31, 0x15CEE8u);
    ctx->pc = 0x160730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160730u, 0x15CEE0u, 0x15CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEE8u;
label_15cee8:
    // 0x15cee8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x15CEE8u;
    {
        const bool branch_taken_0x15cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cee8) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15CEF0u;
label_15cef0:
    // 0x15cef0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cef4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cef8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x15cef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15cefc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CEFCu;
    {
        const bool branch_taken_0x15cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cefc) {
            ctx->pc = 0x15CF4Cu;
            goto label_15cf4c;
        }
    }
    ctx->pc = 0x15CF04u;
    // 0x15cf04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf08: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15cf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15CF10u;
    SET_GPR_U32(ctx, 31, 0x15CF18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15CF10u, 0x15CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15cf1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf20: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15cf24: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x15CF24u;
    SET_GPR_U32(ctx, 31, 0x15CF2Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15CF24u, 0x15CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF2Cu;
label_15cf2c:
    // 0x15cf2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15cf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cf30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CF30u;
    {
        const bool branch_taken_0x15cf30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf30) {
            ctx->pc = 0x15CF4Cu;
            goto label_15cf4c;
        }
    }
    ctx->pc = 0x15CF38u;
    // 0x15cf38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf3c: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x15cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x15cf40: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x15cf44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15cf48: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x15cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_15cf4c:
    // 0x15cf4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf50: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cf54: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15cf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x15cf58: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CF58u;
    {
        const bool branch_taken_0x15cf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf58) {
            ctx->pc = 0x15CFA0u;
            goto label_15cfa0;
        }
    }
    ctx->pc = 0x15CF60u;
    // 0x15cf60: 0x8f84bae8  lw          $a0, -0x4518($gp)
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x15cf64: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x15CF64u;
    SET_GPR_U32(ctx, 31, 0x15CF6Cu);
    ctx->pc = 0x18A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2E0u, 0x15CF64u, 0x15CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF6Cu;
label_15cf6c:
    // 0x15cf6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15cf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cf70: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15CF70u;
    {
        const bool branch_taken_0x15cf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf70) {
            ctx->pc = 0x15CFA0u;
            goto label_15cfa0;
        }
    }
    ctx->pc = 0x15CF78u;
    // 0x15cf78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf7c: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x15cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x15cf80: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x15cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x15cf84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15cf88: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x15cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    // 0x15cf8c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15cf90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf94: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x15cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x15cf98: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15CF98u;
    {
        const bool branch_taken_0x15cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf98) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15CFA0u;
label_15cfa0:
    // 0x15cfa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cfa4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cfa8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x15cfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15cfac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15CFACu;
    {
        const bool branch_taken_0x15cfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfac) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFB4u;
    // 0x15cfb4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x15cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x15cfb8: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x15cfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15cfbc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CFBCu;
    {
        const bool branch_taken_0x15cfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfbc) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFC4u;
    // 0x15cfc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cfc8: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x15cfcc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x15cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x15cfd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15cfd4: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x15cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    // 0x15cfd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfdc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15cfdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15cfe0:
    // 0x15cfe0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cfe4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15cfe8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15CFE8u;
    {
        const bool branch_taken_0x15cfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cfe8) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15CFF0u;
    // 0x15cff0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x15cff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x15cff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cff8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CFF8u;
    {
        const bool branch_taken_0x15cff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15cff8) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15D000u;
    // 0x15d000: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d004: 0xc057438  jal         func_15D0E0
    ctx->pc = 0x15D004u;
    SET_GPR_U32(ctx, 31, 0x15D00Cu);
    ctx->pc = 0x15D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0E0u, 0x15D004u, 0x15D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D00Cu;
label_15d00c:
    // 0x15d00c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d010: 0xc0581cc  jal         func_160730
    ctx->pc = 0x15D010u;
    SET_GPR_U32(ctx, 31, 0x15D018u);
    ctx->pc = 0x160730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160730u, 0x15D010u, 0x15D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D018u;
label_15d018:
    // 0x15d018: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15D018u;
    {
        const bool branch_taken_0x15d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d018) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15D020u;
label_15d020:
    // 0x15d020: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d024: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15d028: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15D028u;
    {
        const bool branch_taken_0x15d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d028) {
            ctx->pc = 0x15D078u;
            goto label_15d078;
        }
    }
    ctx->pc = 0x15D030u;
    // 0x15d030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d034: 0xa383a4b8  sb          $v1, -0x5B48($gp)
    ctx->pc = 0x15d034u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943928), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d038: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x15d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x15d03c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x15d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d040: 0xc7808e04  lwc1        $f0, -0x71FC($gp)
    ctx->pc = 0x15d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d044: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15d044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d048: 0xe7808e04  swc1        $f0, -0x71FC($gp)
    ctx->pc = 0x15d048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), bits); }
    // 0x15d04c: 0xc7818e04  lwc1        $f1, -0x71FC($gp)
    ctx->pc = 0x15d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d050: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x15d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d058: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x15D058u;
    {
        const bool branch_taken_0x15d058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d058) {
            ctx->pc = 0x15D078u;
            goto label_15d078;
        }
    }
    ctx->pc = 0x15D060u;
    // 0x15d060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d064: 0x0  nop
    ctx->pc = 0x15d064u;
    // NOP
    // 0x15d068: 0xe7808e04  swc1        $f0, -0x71FC($gp)
    ctx->pc = 0x15d068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), bits); }
    // 0x15d06c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d070: 0xc057438  jal         func_15D0E0
    ctx->pc = 0x15D070u;
    SET_GPR_U32(ctx, 31, 0x15D078u);
    ctx->pc = 0x15D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0E0u, 0x15D070u, 0x15D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D078u;
label_15d078:
    // 0x15d078: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d07c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x15d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15d080: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15d084: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D084u;
    {
        const bool branch_taken_0x15d084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d084) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15D08Cu;
    // 0x15d08c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d090: 0xc057a6c  jal         func_15E9B0
    ctx->pc = 0x15D090u;
    SET_GPR_U32(ctx, 31, 0x15D098u);
    ctx->pc = 0x15E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E9B0u, 0x15D090u, 0x15D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D098u;
label_15d098:
    // 0x15d098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d0a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15d0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D0ACu;
    // 0x15d0ac: 0x0  nop
    ctx->pc = 0x15d0acu;
    // NOP
    ctx->pc = 0x15d0b0u;
}
