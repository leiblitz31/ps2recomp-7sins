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

// Function: sub_00235230
// Address: 0x235230 - 0x235290
void sub_00235230_0x235230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235230_0x235230");
#endif

    switch (ctx->pc) {
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        default: break;
    }

    ctx->pc = 0x235230u;

label_235230:
    // 0x235230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235234:
    // 0x235234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235238:
    // 0x235238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23523c:
    // 0x23523c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_235240:
    // 0x235240: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x235240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_235244:
    // 0x235244: 0x8f82bbac  lw          $v0, -0x4454($gp)
    ctx->pc = 0x235244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949804)));
label_235248:
    // 0x235248: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
label_23524c:
    if (ctx->pc == 0x23524Cu) {
        ctx->pc = 0x235250u;
        goto label_235250;
    }
    ctx->pc = 0x235248u;
    {
        const bool branch_taken_0x235248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x235248) {
            ctx->pc = 0x235278u;
            goto label_235278;
        }
    }
    ctx->pc = 0x235250u;
label_235250:
    // 0x235250: 0x8f84bbac  lw          $a0, -0x4454($gp)
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949804)));
label_235254:
    // 0x235254: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x235254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235258:
    // 0x235258: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x235258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23525c:
    // 0x23525c: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_235260:
    // 0x235260: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235264:
    // 0x235264: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x235264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_235268:
    // 0x235268: 0x320f809  jalr        $t9
label_23526c:
    if (ctx->pc == 0x23526Cu) {
        ctx->pc = 0x235270u;
        goto label_235270;
    }
    ctx->pc = 0x235268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235270u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235268u, 0x235270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235270u;
label_235270:
    // 0x235270: 0x10000002  b           . + 4 + (0x2 << 2)
label_235274:
    if (ctx->pc == 0x235274u) {
        ctx->pc = 0x235278u;
        goto label_235278;
    }
    ctx->pc = 0x235270u;
    {
        const bool branch_taken_0x235270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235270) {
            ctx->pc = 0x23527Cu;
            goto label_23527c;
        }
    }
    ctx->pc = 0x235278u;
label_235278:
    // 0x235278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23527c:
    // 0x23527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235280:
    // 0x235280: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_235284:
    // 0x235284: 0x3e00008  jr          $ra
label_235288:
    if (ctx->pc == 0x235288u) {
        ctx->pc = 0x23528Cu;
        goto label_23528c;
    }
    ctx->pc = 0x235284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23528Cu;
label_23528c:
    // 0x23528c: 0x0  nop
    ctx->pc = 0x23528cu;
    // NOP
    ctx->pc = 0x235290u;
}
