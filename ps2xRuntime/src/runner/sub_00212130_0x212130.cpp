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

// Function: sub_00212130
// Address: 0x212130 - 0x212370
void sub_00212130_0x212130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212130_0x212130");
#endif

    switch (ctx->pc) {
        case 0x21219cu: goto label_21219c;
        case 0x21220cu: goto label_21220c;
        case 0x212258u: goto label_212258;
        case 0x212280u: goto label_212280;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122e8u: goto label_2122e8;
        case 0x212318u: goto label_212318;
        case 0x212328u: goto label_212328;
        case 0x212354u: goto label_212354;
        default: break;
    }

    ctx->pc = 0x212130u;

    // 0x212130: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x212130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x212134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21213c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212140: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x212140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x212144: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x212144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x212148: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x212148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x21214c: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x21214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x212150: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212154: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x212154u;
    {
        const bool branch_taken_0x212154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212154) {
            ctx->pc = 0x212354u;
            goto label_212354;
        }
    }
    ctx->pc = 0x21215Cu;
    // 0x21215c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212160: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x212160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x212164: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x212164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212168: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21216c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212170: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x212174: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x212174u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x212178: 0x1812  mflo        $v1
    ctx->pc = 0x212178u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21217c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212180: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x212180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x212184: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x212184u;
    {
        const bool branch_taken_0x212184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212184) {
            ctx->pc = 0x212330u;
            goto label_212330;
        }
    }
    ctx->pc = 0x21218Cu;
    // 0x21218c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212190: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x212194: 0xc060134  jal         func_1804D0
    ctx->pc = 0x212194u;
    SET_GPR_U32(ctx, 31, 0x21219Cu);
    ctx->pc = 0x1804D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1804D0u, 0x212194u, 0x21219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21219Cu;
label_21219c:
    // 0x21219c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2121a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2121a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2121a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2121a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2121a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2121ac: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2121b0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2121b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2121b4: 0x8812  mflo        $s1
    ctx->pc = 0x2121b4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2121b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121bc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2121c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2121c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2121c4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2121c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2121c8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2121C8u;
    {
        const bool branch_taken_0x2121c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2121c8) {
            ctx->pc = 0x212288u;
            goto label_212288;
        }
    }
    ctx->pc = 0x2121D0u;
    // 0x2121d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2121d8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2121dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2121dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2121e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2121e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2121e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2121e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2121e8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2121e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2121ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2121ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2121f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121f4: 0xa3a0006c  sb          $zero, 0x6C($sp)
    ctx->pc = 0x2121f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x2121f8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2121f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2121fc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2121fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x212200: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x212200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x212204: 0xc0849c0  jal         func_212700
    ctx->pc = 0x212204u;
    SET_GPR_U32(ctx, 31, 0x21220Cu);
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x212204u, 0x21220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21220Cu;
label_21220c:
    // 0x21220c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x21220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212210: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x212210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212214: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x212214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x212218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21221c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x21221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x212220: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x212220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x212224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212228: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x212228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21222c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x21222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212230: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x212230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x212234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212238: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21223c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x21223cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x212240: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x212240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x212244: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x212244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212248: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x212248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21224c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x21224cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x212250: 0xc084990  jal         func_212640
    ctx->pc = 0x212250u;
    SET_GPR_U32(ctx, 31, 0x212258u);
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x212250u, 0x212258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212258u;
label_212258:
    // 0x212258: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x212258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21225c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x212260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212264: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x212264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x212268: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21226c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x21226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212270: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212274: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x212274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212278: 0xc084978  jal         func_2125E0
    ctx->pc = 0x212278u;
    SET_GPR_U32(ctx, 31, 0x212280u);
    ctx->pc = 0x2125E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125E0u, 0x212278u, 0x212280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212280u;
label_212280:
    // 0x212280: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x212280u;
    {
        const bool branch_taken_0x212280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212280) {
            ctx->pc = 0x212318u;
            goto label_212318;
        }
    }
    ctx->pc = 0x212288u;
label_212288:
    // 0x212288: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x212288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21228c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212290: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x212294: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x212294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x212298: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x212298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21229c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21229Cu;
    SET_GPR_U32(ctx, 31, 0x2122A4u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21229Cu, 0x2122A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122A4u;
label_2122a4:
    // 0x2122a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2122a8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2122ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2122b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2122b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2122b4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2122b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2122b8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2122b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2122bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2122c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2122c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2122c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2122c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2122cc: 0xa3a00064  sb          $zero, 0x64($sp)
    ctx->pc = 0x2122ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2122d0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2122d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2122d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2122d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2122d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2122dc: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2122e0: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2122E0u;
    SET_GPR_U32(ctx, 31, 0x2122E8u);
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2122E0u, 0x2122E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122E8u;
label_2122e8:
    // 0x2122e8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2122e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2122ec: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2122f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2122f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2122f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2122f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2122f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2122f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2122fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2122fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212300: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x212300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x212304: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x212304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21230c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212310: 0xc084978  jal         func_2125E0
    ctx->pc = 0x212310u;
    SET_GPR_U32(ctx, 31, 0x212318u);
    ctx->pc = 0x2125E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125E0u, 0x212310u, 0x212318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x212318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21231c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212320: 0xc0845a0  jal         func_211680
    ctx->pc = 0x212320u;
    SET_GPR_U32(ctx, 31, 0x212328u);
    ctx->pc = 0x211680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211680u, 0x212320u, 0x212328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212328u;
label_212328:
    // 0x212328: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212328u;
    {
        const bool branch_taken_0x212328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212328) {
            ctx->pc = 0x212354u;
            goto label_212354;
        }
    }
    ctx->pc = 0x212330u;
label_212330:
    // 0x212330: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x212330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x212334: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x212334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212338: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x212338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21233c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21233cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x212340: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x212340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x212344: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x212344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21234c: 0xc0848dc  jal         func_212370
    ctx->pc = 0x21234Cu;
    SET_GPR_U32(ctx, 31, 0x212354u);
    ctx->pc = 0x212370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212370u, 0x21234Cu, 0x212354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212354u;
label_212354:
    // 0x212354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21235c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21235cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212360: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x212364: 0x3e00008  jr          $ra
    ctx->pc = 0x212364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21236Cu;
    // 0x21236c: 0x0  nop
    ctx->pc = 0x21236cu;
    // NOP
    ctx->pc = 0x212370u;
}
